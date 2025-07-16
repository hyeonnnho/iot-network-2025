#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100
#define FILE_NAME "userFile.txt"

void signup() {
    char id[MAX], pw[MAX];
    FILE *fp = fopen(FILE_NAME, "a"); // append 모드

    if (fp == NULL) {
        perror("파일 열기 실패");
        exit(1);
    }

    printf("회원가입\n아이디: ");
    scanf("%s", id);
    printf("비밀번호: ");
    scanf("%s", pw);

    fprintf(fp, "%s %s\n", id, pw);
    fclose(fp);

    printf("회원가입 완료!\n");
}

void login() {
    char id[MAX], pw[MAX];
    char file_id[MAX], file_pw[MAX];
    int success = 0;

    FILE *fp = fopen(FILE_NAME, "r");
    if (fp == NULL) {
        printf("회원 정보 파일이 없습니다.\n");
        return;
    }

    printf("로그인\n아이디: ");
    scanf("%s", id);
    printf("비밀번호: ");
    scanf("%s", pw);

    while (fscanf(fp, "%s %s", file_id, file_pw) != EOF) {
        if (strcmp(id, file_id) == 0 && strcmp(pw, file_pw) == 0) {
            success = 1;
            break;
        }
    }

    fclose(fp);

    if (success)
        printf("로그인 성공!\n");
    else
        printf("로그인 실패: 아이디나 비밀번호가 틀렸습니다.\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n=== 메뉴 ===\n");
        printf("1. 회원가입\n");
        printf("2. 로그인\n");
        printf("3. 종료\n");
        printf("선택: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: signup(); break;
            case 2: login(); break;
            case 3: printf("프로그램 종료.\n"); exit(0);
            default: printf("잘못된 선택입니다.\n"); break;
        }
    }

    return 0;
}
