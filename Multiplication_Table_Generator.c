/** Multiplication Table Generator **/

#include<stdlib.h>

int main()
{
	int m, n, f, i;
	// system("cls");
	printf("Enter any number for which you want the Multiplication Table:");
	scanf("%d", &n);
	printf("     Multiplication Table of %d", n);
	printf("\n________________________________");
	for(i=1;i<=10;i++)
	{
		m=n*i;
		f=n*(i+10);
		printf("\n |%d x %d = %d \t| %d x %d = %d |", n, i, m, n, i+10, f);
	}
	printf("\n________________________________");
	return 0;
}
