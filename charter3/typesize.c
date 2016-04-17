#include "stdio.h"
int main(int argc, char const *argv[])
{
	printf("The length of int on mac is %lu\n",sizeof(int) );
	printf("The length of long on mac is %lu\n",sizeof(long) );
	printf("The length of unsigned int on mac is %lu\n",sizeof(unsigned int) );
	printf("The length of char on mac is %lu\n",sizeof(char) );
	printf("The length of float on mac is %lu\n",sizeof(float) );
	printf("The length of double on mac is %lu\n",sizeof(double) );

	return 0;
}