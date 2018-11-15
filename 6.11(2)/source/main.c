#include<stdio.h>
#include<stdlib.h>

void main()
{
	int i, j, tmp;
	int a[5] = { 26,5,81,7,63 };
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4-i; j++)
		{
			if (a[j] > a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
		printf("Loop %d: ", i);
		for (j = 0; j < 5; j++)
		{
			printf("%4d", a[j]);
		}
		printf("\n");
		
	}
	system("pause");
	return 0;

}