#include <stdio.h>

int main()
{
	
	printf("�ȳ��ϼ���! �ѿ� ������ �Դϴ�. \n ���Ͻô� ��ȣ�� �����ּ���!\n");
	printf("1. �̿��� \n2. Ʈ���� \n3. �������ڴ��б� \n4. ���̹�����\n\n");

	int num;
	scanf("%d", &num);

	if (num == 1) {
		printf("1.�̿��� -> %s", "Yerin LEE");
	}
	else if (num == 2) {
		printf("2. Ʈ���� -> %s", "TWIX");
	}
	else if (num == 3) {
		printf("3. �������ڴ��б� -> %s", "Duksung Women's University");
	}
	else if (num == 4) {
		printf("4. ���̹����� -> %s", "Ciber Security");
	}
	else {
		printf("�߸��� �Է°��Դϴ�. 1~4���� ����ֽñ� �ٶ��ϴ�.");
	}
}