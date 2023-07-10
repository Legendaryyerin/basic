#include <stdio.h>
#include <string.h>
#define SIZE 20

typedef struct User {
    char ID[SIZE];
    char pw[SIZE];
} User;

int userNum = 0;
User user[SIZE];

void searchUser()
{
    if (userNum == 0) {
        printf("The database is empty\n\n");
        return;
    }

    for (int i = 0; i < userNum; i++) {
        printf("#%d\nID: %s\nPassword: %s\n\n", i + 1, user[i].ID, user[i].pw);
    }
}

void createUser()
{
    if (userNum == SIZE) {
        printf("�� �̻� ���� ����� �� �� �����ϴ�.\n\n");
        return;
    }

    printf("ID�� �Է��ϼ���: ");
    char id[SIZE];
    scanf("%s", id);

    for (int i = 0; i < userNum; i++) {
        if (!strcmp(id, user[i].ID)) {
            printf("The user is already activated\n\n");
            return;
        }
    }

    char pw[SIZE];
    while (1) {
        printf("Password�� �Է��ϼ���: ");
        scanf("%s", pw);

        if (!(5 <= strlen(pw) && strlen(pw) < SIZE)) {
            printf("Password�� 5�� �̻� %d�� �̸��̾�� �մϴ�\n\n", SIZE);
        }
        else {
            break;
        }
    }

    strcpy(user[userNum].ID, id);
    strcpy(user[userNum].pw, pw);
    userNum++;

    printf("���� ����� �Ϸ�Ǿ����ϴ�.\n\n");
}

void login()
{
    if (userNum == 0) {
        printf("The database is empty\n\n");
        return;
    }

    printf("ID�� �Է��ϼ���: ");
    char id[SIZE];
    scanf("%s", id);

    char pw[SIZE];
    while (1) {
        printf("Password�� �Է��ϼ���: ");
        scanf("%s", pw);

        if (!(5 <= strlen(pw) && strlen(pw) < SIZE)) {
            printf("Password�� 5�� �̻� %d�� �̸��̾�� �մϴ�\n\n", SIZE);
        }
        else {
            break;
        }
    }

    int check = 0;
    for (int i = 0; i < userNum; i++) {
        if (!strcmp(id, user[i].ID) && !strcmp(pw, user[i].pw)) {
            printf("�α����� �Ϸ�Ǿ����ϴ�.\n\n");
            check = 1;
            break;
        }
    }

    if (check == 0) {
        printf("��ϵ��� ���� �����Դϴ�.\n\n");
    }
}

int main(void)
{
    int check = 0;
    while (1) {
        printf("1. ���� ���� ����\n2. ���� ����\n3. �α���\n4. ���α׷� ����\n: ");
        int choice;
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            searchUser();
            break;
        case 2:
            createUser();
            break;
        case 3:
            login();
            break;
        case 4:
            check = 1;
            break;
        }
        return 0;
    }
}