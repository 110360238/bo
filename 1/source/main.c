#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int nx;
	double dx;

	nx = 9.99;
	dx = 9.99;

	printf("int ���O�ܼ�nx����:%d\n", nx);
	printf("int ���O�ܼ�nx/2����:%d\n",nx/2);

	printf("double ���O�ܼ�dx����:%f\n", dx);
	printf("int ���O�ܼ�dx/2.0����:%f\n", dx / 2);

	system("pause");
	return 0;

}