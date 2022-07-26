#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int num;
//	scanf("%d", &num);
//
//	for (int i = 1; i < 10; i++)
//	{
//		printf("%d * %d = %d\n", num, i, num * i);
//	}
//}

//int main()
//{
//	int A, B;
//	int T;
//	scanf("%d", &T);
//	scanf(" %d", &A, &B);
//	scanf(" %d", &B);
//	for (int i = 0; i < T; i++)
//	{
//		printf("%d %d %d\n", A, B, A+B);
//	}
//
//}
//
//int main()
//{
//	int n;
//	int sum = 0;
//	scanf("%d", &n);
//
//	for (int i = 1; i <= n; i++)
//	{
//		sum += i;
//	}
// 	printf("%d",sum);
//}

//int main()
//{
//	int n;
//	int sum;
//	int i;
//
//	scanf("%d", &n);
//	while (i < n)
//	{
//		sum += i;
//		i++;
//	}
//	printf("%d", sum);
//}

//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		printf("%d\n", i);
//	}
//}
//int main()
//{
//	int n;
//	int i;
//	scanf("%d", &n);
//	while (i <= n)
//	{
//		printf("%d", i);
//		i++;
//	}
//
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; n < i; i++)
//	{
//		printf("%d", i%10);
//	}
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = n; i > 0; --i)
//	{
//		printf("%d\n", i);
//	}
//}
//int main()
//{
//	int N;
//	scanf("%d", &N);
//
//	for (int i = 1; i <= N; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			pr
//			for (int e = 1; e <= j; e++)
//			{
//				printf("*");
//			}
//			for (int l = 1; l <= i; l++)
//			printf("*");
//		}
//		printf(" ");
//	}
//	printf("\n");
//}



//int main()
//{
//	int a = ' ';
//	int b = 'b';
//
//	printf("%c", a);
//	printf("%c", b);
//
//}
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	for (int i = 1; i <= N; i++)
//	{
//		for (int j = 1; j <= N-i; j++)
//			printf(" ", j);
//		for (int k = 1; k <= i; k++)
//			printf("*");
//		printf("\n");
//	}
//}
int main()
{
	int N;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N-i; j++)
			printf(" ", j);
		for (int k = 1; k <= 2*i-1; k++)
			printf("*");
		printf("\n");
	}
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N-i; j++)
			printf(" ", j);
		for (int k = 1; k <= 2*i-1; k++)
			printf("*");
		printf("\n");
	}
}
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++)
//	{
//		for (int k = 0; k < i; k++)
//			printf(" ");
//		for (int j = 0; j < 2*; j++)
//			printf("*");
//		printf("\n");
//	}
//}