# 第八章 字符输入\输出和输入确认
缓冲与非缓冲
在stdio.h 当中定义 EOF作为文件的结尾。 echo_eof 可以 接收文件重定向。
···
#include "stdio.h"
int main(int argc, char const *argv[])
{
	char ch;
	while((ch=getchar())!=EOF)
		putchar(ch);



	return 0;
}
···
制作文件的副本
echo_eof < mywords > copywords
注意两个文件名不可以相同