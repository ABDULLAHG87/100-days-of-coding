
#include <stdio.h>
typedef char * string;
int main(void)
{
	int n = 50;
	int *p = &n; //Pointer can be used to pointer to any data types int, float, char, double
	string s = "HI!";

	printf("value of n: %d\n", n);
	printf("Address of n: %p\n", &n);
	printf("Value of n with Pointer: %d\n", *p);
	printf("Address of n with Pointer: %p\n", p);

	/* Modification of Value of Integer using the Indirect Method */
	printf("=======MODIFICATION WITH POINTER ============\n");

	*p = 100;

	printf("Modified Value of n: %d\n", n);
	/* Working with Strings with Pointers */
	printf("===========WORKING WITH STRINGS ===========\n");
	printf("%s\n", s);
	/* Illustration of Decay to Pointer in Strings */
	printf("Address of String : %p\n", s);
	printf("Address of First Letter: %p\n", &s[0]);
	/* It was noticed that the address of the string printed in line 25 is the same\
	   with address of the first letter H in the strings */
	/* This shows that the String and Array are not pointers but decays to pointer */

	/* Illustration of How Strings are stored in a contigous manner in the memory */

	printf("%p\n", &s[0]);
	printf("%p\n", &s[1]);
	printf("%p\n", &s[2]);
	printf("%p\n", &s[3]);

	/*Printing Strings using the Pointer Method */
	printf("==========PRINTING STRINGS CHARACTER BY CHARACTER USING POINGER====\n");

	printf("%c\n", *s);
	printf("%c\n", *(s+1));
	printf("%c\n", *(s+2));
	printf("%c\n", *(s+3));

	/* Another Point to Notes using Pointers with Strings */
	printf("%s\n", s);
	printf("%s\n", (s+1));
	printf("%s\n", (s+2));
	printf("%s\n", (s+3));
}
