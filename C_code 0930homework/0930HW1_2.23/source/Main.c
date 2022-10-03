#include <stdio.h>
#pragma warning(disable:4996)
//111360238
int main() {
	int a, b, c;
	printf("叫块材俱计计:");
	scanf("%d", &a);
	printf("叫块材俱计计:");
	scanf("%d", &b);
	printf("叫块材俱计计:");
	scanf("%d", &c);

	if (a > b && a > c) {
		printf("%d is largest number\n", a);
		if (b > c)
		{
			printf("%d is smallest number\n", c);
		}
		else if (b < c)
		{
			printf("%d is smallest number\n", b);
		}
	}
	else if (a > b && c > b)
	{
		printf("%d is smallest number\n", b);
		if (a > c)
		{
			printf("%d is largest number\n", a);
		}
		else
		{
			printf("%d is largest number\n", c);
		}
	}

	else if (b > a && b > c)
	{
		printf("%d is largest number\n", b);
		if (a > c)
		{
			printf("%d is smallest number\n", c);
		}
		else if (c > a)
		{
			printf("%d is smallest number\n", a);
		}
	}
	else if (b > a && c > a)
	{
		printf("%d is smallest number\n", a);
		if (b > c)
		{
			printf("%d is largest number\n", b);
		}
		else
		{
			printf("%d is largest number\n", c);
		}
	}

	else if (c > a && c > b)
	{
		printf("%d is largest number\n", c);
		if (a > b)
		{
			printf("%d is smallest number\n", b);
		}
		else if (b > a)
		{
			printf("%d is smallest number\n", a);
		}
	}
	else if (c > a && b > a)
	{
		printf("%d is smallest number\n", a);
		if (c > b)
		{
			printf("%d is largest number\n", c);
		}
		else
		{
			printf("%d is largest number\n", b);
		}
	}

	else if ((a == b && b > c) || (a == b && c > a))
	{
		printf("%d is largest number\n", c);
		if ((a == c) || (c == b))
		{
			printf("计单\n");
		}
	}
	else if ((b == c && a > c) || (b == c && a > b))
	{
		printf("%d is largest number\n", a);
		if ((a == b) || (a == c))
		{
			printf("计单\n");
		}
	}
	else if ((a == c && b > c) || (a == c && b > a))
	{
		printf("%d is largest number\n", b);
		if ((b = c) || (b == a))
		{
			printf("计单\n");
		}
	}
	else if ((a == c && b == c))
	{
		printf("计单\n");
    }

}
