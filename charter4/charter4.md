# Charter 4 字符串和格式化输入输出
字符串常量"x"与'x'表示不同的含义。'x'表示一个char的常量,"x" 实际上是包含'x'和'\0'的数组。
使用"%s"的scanf只会把单词当成输入而不是句子，遇到空格会中止。需要用gets()来读取句子。
strlen包含于string.h。
sizeof 返回的结果比strlen大1。因为sizeof 包含了结尾的'\0'。
在c99当中，定义了const 来定义常量。
在c99当中，实行“趋零截尾”就意味着-3.8转为整数会是-3而不是-4。
sizeof返回一个size_t类型的数，是一个无符号整数类型。
在c语言当中可以通过typedef来实现类型的别的名，例如
```
typedef double real;
real deal;
```
在c99当中，使用_Bool来定义布尔类型的变量。
关系运算符的优先级要大于赋值运算符，所以 x=y>2 等同于x=(y>2)。
逗号运算符分为左子表达式和右子表达式两种情况：
x=(y=3,(z=(++y+2))+5) 最终结果为x=11
但是 如果 x=23,500; 最终结果为x=23;
但如果x=(23,500)最终结果为x=500 前者称为左子表达式，后都称为右子表达式。
