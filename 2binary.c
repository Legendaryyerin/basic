#pragma warning(disable:4996)
#include <time.h>
#include <stdio.h>
int main(void)
{
	int integer = 0, i = 0; //integer:�Է¹��� 10���� ����, i:��Ʈ�ڸ�

	printf("10���� ���� ������ �Է��ϼ���. : "); //10���� ���� �Է�
	scanf("%d", &integer);
	printf("10���� %d�� 2������ ", integer);

	for (i = 31; i >= 0; i--) //2������ �����ϴ� bit�ڸ����� &�������� 2���� ���.
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
		printf("�Դϴ�.");
		printf("\n");
	}
}