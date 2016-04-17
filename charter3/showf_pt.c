#include "stdio.h"
int main(int argc, char const *argv[])
{
	float aboat=3200.0;
	double abet=2.14e9;
	long double dip=5.32e-5;
	printf("%f can be written %e\n",aboat,aboat);
	printf("%f can be written %e\n",abet,abet );
	printf("%Lf can be written %Le\n",dip,dip );
	float toobig=3.4e38*100.0f;
	printf("%f\n",toobig );
	return 0;
}