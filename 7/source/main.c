#include <stdio.h>
#include <stdlib.h>

int main()
{
	int age;
	char name[8], phone[12];
	FILE *stream;
	stream = fopen("C:/Users/asus/Desktop/程式/7/addbook.txt", "r");
	if (stream == NULL)
	{
		printf("檔案開啟失敗!!\n");
	}
	else
	{
		printf("  姓名   電話       年齡\n");
		printf("--------------------------\n");
		while ((fscanf(stream, "%s %s %d", name, phone,&age))!= EOF)
			printf("%-6s %-11s %4d\n", name, phone, age);
		fclose(stream);
	}
	system("pause");
	return 0;
}