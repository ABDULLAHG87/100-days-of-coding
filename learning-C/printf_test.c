#include<stdio.h>

int main()
{
	int var = -334343434;
	float f_var = 33.53343434;
	long double double_var = 3534.3334467745454568908;
	char str[]= "Hello World";
	char key = 'M';

	printf("|% d|\n", var);
	//printf("%'d\n", var);
	printf("%f\n", f_var);
	printf("%.15Lf\n", double_var);
	printf("%s\n", str);
	printf("%c\n", key);
}
