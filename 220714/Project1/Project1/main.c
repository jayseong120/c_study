/*
#include <stdio.h>

int main()
{ 
	int i;
	printf("Hello World\n"); 
	i = add(3584, 4458);
	printf("%d\n", i);
	printf("%X\n", i);
	printf("%c\n", i);

	return 0;
}

int add(int a, int b)
{
	return a + b;
}
*/

#include <stdio.h>

int main()
{
    int *numPtr;      // ������ ���� ����
    int num1 = 10;    // ������ ������ �����ϰ� 10 ����

    numPtr = &num1;   // num1�� �޸� �ּҸ� ������ ������ ����

    *numPtr = 20;     // ������ �����ڷ� �޸� �ּҿ� �����Ͽ� 20�� ����

    printf("%d\n", *numPtr);    // 20: ������ �����ڷ� �޸� �ּҿ� �����Ͽ� ���� ������
    printf("%d\n", num1);       // 20: ���� num1�� ���� �ٲ�

    return 0;
}