#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}


int main()
{

	int num1, num2;

	printf("first number -->");
	scanf("%d", &num1);
	printf("second number -->");
	scanf("%d", &num2);

	if (num1 > num2)
	{
		num1 = num1;
		num2 = num2;
	}
	else if (num1 < num2)
	{
		swap(&num1, &num2);
	}
	else if (num1 = num2)
	{
		num1++;
		num2--;
	}


	for (int i = 0; i < num1 - num2; i++)
	{
		if (num2 != 0)
		{
			num2--;
			num1++;
		}
	}

	printf("conculusion-> %d\n", num1);

	system("pause");

	return 0;
}