#include <stdio.h>
int main()
{
	int i = 0,n=0;
	int num[3];
	//������ÿ�ŵĶ�β����.
	for (i = 0; i < 3; i++)
	{
		scanf_s("%d", &num[i]);
	}
	//������������
	if (scanf_s("%d", &n) == 1 && n > 10 && n <= 100);
	{
		for (i = 10; i <= n; i++)
		{
			if ((i % 3 == num[0]) && (i % 5 == num[1]) && (i % 7 == num[2]))
			{
				printf("case :  %d\n", i);
			}
		}
	}
		
}