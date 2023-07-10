#pragma warning(disable:4996)
#include <time.h>
#include <stdio.h>
int main(void)
{
	int integer = 0, i = 0; //integer:입력받을 10진수 정수, i:비트자리

	printf("10진수 양의 정수를 입력하세요. : "); //10진수 정수 입력
	scanf("%d", &integer);
	printf("10진수 %d는 2진수로 ", integer);

	for (i = 31; i >= 0; i--) //2진수가 시작하는 bit자리부터 &연산으로 2진수 출력.
	{
		if (integer & (1 << i))
		{
			break;
		}
		for (i; i >= 0; i--)
		{
			if (integer & (1 << i))
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
			if (i % 4 == 0)
			{
				printf(" ");
			}
		}
		printf("입니다.");
		printf("\n");
	}
}