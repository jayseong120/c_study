#pragma optimize("", off)

#include <stdio.h>

/*
int main(void)
{
	int i = 1;

printf("1*1=%d\n", 1 * i++);
printf("1*2=%d\n", 1 * i++);
printf("1*3=%d\n", 1 * ++i);
printf("1*4=%d\n", 1 * ++i);
printf("1*5=%d\n", 1 * i++);
printf("1*6=%d\n", 1 * ++i);
printf("1*7=%d\n", 1 * ++i);
printf("1*8=%d\n", 1 * i++);
printf("1*9=%d\n", 1 * ++i);
}*/


int main(void)
{
	int num1 = 10; 
	int	num2 = 20;

	int result = 0;

	result = fn_add (   num1  , num2    );
	
	printf("num1 : %d\n", num1);
	printf("num2 : %d\n", num2);
	printf("result : %d\n", result);
	
	
	//result = fn_add (   num1  , result    );
	//result = fn_add (   num1  , result    );
	//result = fn_add (   num1  , result    );

	//printf("result : %d\n", result);

	//result = fn_minus (   (num1 - num2)  , num2    );
	//printf("result : %d\n", result);
}

int fn_add(int value1, int value2)
{
	printf("fn_add %t value1 : %d %t value2 : %d\n", value1, value2);

	value1 = 100;

	return (value1 + value2);
}


int fn_minus(int value1, int value2)
{



	return (value1 - value2);
}



/*
int main(void)
{
	int num1 = 0;
	//int addr_num1 = &num1;


	// (num1 == 0) : 참 1 거짓 0
	// (num1 >= 0) : 참 1 거짓 0
	// (num1 <= 0) : 참 1 거짓 0

	// 비트 연산
	// 0 1
	// 1100 & 0110 = 0100
	// 

	// 논리 연산
	// 1100 && 0110 = 
	// AND, OR, XOR, AND NOT (NAND), OR NOT (NOR)
	//

	printf("%d\n", (num1 == 0));
	

	if (num1 == 0)
	printf("%d", 1100 && 0100);
	/*
	* 
	* 데니스 리치가 생각한 if문이 참일 때의 조건 : 0이 아닐경우
	if (  )
	{
		//참일경우 동작
	}
	else if (  )
	{

	}
	else
	{
		//거짓일 경우
	}
	*/
	
/*
	int* Ptr = NULL;

	printf("address : %d\n", Ptr);

	int a;

	Ptr = &a;

	printf("address : %d\n", Ptr);

	a = 100;

	printf("address : %d\n", Ptr);

	char b = 'B';

	char char_a = 0x61;

	printf("성재영a : %d, char_a = %c\n", a, a);
	printf("b : %d, char_b = %c\n", b, b);

	printf("a+b : %d, char_a+b = %c", a & b, a & b);


}

int add(int a, int b)
{
	return (a + b);
}

*/