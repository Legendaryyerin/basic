#include <stdio.h>

int main()
{
	
	printf("안녕하세요! 한영 번역기 입니다. \n 원하시는 번호를 적어주세요!\n");
	printf("1. 이예린 \n2. 트윅스 \n3. 덕성여자대학교 \n4. 사이버보안\n\n");

	int num;
	scanf("%d", &num);

	if (num == 1) {
		printf("1.이예린 -> %s", "Yerin LEE");
	}
	else if (num == 2) {
		printf("2. 트윅스 -> %s", "TWIX");
	}
	else if (num == 3) {
		printf("3. 덕성여자대학교 -> %s", "Duksung Women's University");
	}
	else if (num == 4) {
		printf("4. 사이버보안 -> %s", "Ciber Security");
	}
	else {
		printf("잘못된 입력값입니다. 1~4에서 골라주시기 바랍니다.");
	}
}