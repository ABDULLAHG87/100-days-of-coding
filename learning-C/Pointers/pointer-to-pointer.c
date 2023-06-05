#include<stdio.h>


int main(void)
{
	int x = 5;

	printf("Address of x = %p; Value of x = %d\n", &x, x);

	/* Declaration of a Pointer to Integer */
	int *p = &x;
	
	printf("Address of p = %p; Value of p = %p\n", &p, p);

	/* Indirect Accessing of Value of x using the pointer p */

	printf("Value of x: %d\n", *p);

	/* Declaration of a pointer to pointer */
	int **q  = &p;

	printf("Address of q = %p; value of q is %p\n", &q, q);
	printf("Address of q = %p; value of q is %p\n", &q, *q);
	printf("Address of q = %p; value of x is %d\n", &q, *(*q));



	return (0);
}
