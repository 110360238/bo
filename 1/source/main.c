#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int nx;
	double dx;

	nx = 9.99;
	dx = 9.99;

	printf("int 型別變數nx之值:%d\n", nx);
	printf("int 型別變數nx/2之值:%d\n",nx/2);

	printf("double 型別變數dx之值:%f\n", dx);
	printf("int 型別變數dx/2.0之值:%f\n", dx / 2);

	system("pause");
	return 0;

}