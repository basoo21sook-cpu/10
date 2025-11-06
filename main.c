#include <stdio.h>

int main(void) {
    FILE *fp;
    char line[100];

    fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}

