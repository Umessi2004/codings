#include <stdio.h>
int main()
{
	int a, n;
	printf("ENTER A NUMBER:");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (i % 2 == 0)
			{
				a = 1;
			}
			else
			{
				a = 0;
			}
			while (j != i)
			{
				if (j % 2 == a)
				{
					printf("0 ");
				}
				else
				{
					printf("1 ");
				}
				j++;
			}
			printf("1 ");
		}
		printf("\n");
	}
	return 0;
}
