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
        printf("더 이상 유저 등록을 할 수 없습니다.\n\n");
        return;
    }

    printf("ID를 입력하세요: ");
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
        printf("Password를 입력하세요: ");
        scanf("%s", pw);

        if (!(5 <= strlen(pw) && strlen(pw) < SIZE)) {
            printf("Password는 5자 이상 %d자 미만이어야 합니다\n\n", SIZE);
        }
        else {
            break;
        }
    }

    strcpy(user[userNum].ID, id);
    strcpy(user[userNum].pw, pw);
    userNum++;

    printf("유저 등록이 완료되었습니다.\n\n");
}

void login()
{
    if (userNum == 0) {
        printf("The database is empty\n\n");
        return;
    }

    printf("ID를 입력하세요: ");
    char id[SIZE];
    scanf("%s", id);

    char pw[SIZE];
    while (1) {
        printf("Password를 입력하세요: ");
        scanf("%s", pw);

        if (!(5 <= strlen(pw) && strlen(pw) < SIZE)) {
            printf("Password는 5자 이상 %d자 미만이어야 합니다\n\n", SIZE);
        }
        else {
            break;
        }
    }

    int check = 0;
    for (int i = 0; i < userNum; i++) {
        if (!strcmp(id, user[i].ID) && !strcmp(pw, user[i].pw)) {
            printf("로그인이 완료되었습니다.\n\n");
            check = 1;
            break;
        }
    }

    if (check == 0) {
        printf("등록되지 않은 유저입니다.\n\n");
    }
}

int main(void)
{
    int check = 0;
    while (1) {
        printf("1. 현재 유저 열람\n2. 유저 생성\n3. 로그인\n4. 프로그램 종료\n: ");
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