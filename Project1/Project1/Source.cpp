#include<stdio.h>

int main(void)
{
	for (int i = 0; i < 5; i++)
	{
		for (int s = (i + 1); s < 5; s++)
		{
			printf(" ");
		}
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}


	fgetc(stdin);
	return 0;
}