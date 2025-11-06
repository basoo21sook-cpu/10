#include <stdio.h>

int main(void) {
    FILE *fp;       
    char word[100]; 
    int i;

  
    fp = fopen("sample.txt", "w");

    if (fp == NULL) { 
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    for (i = 0; i < 3; i++) {
        printf("input a word: ");
        scanf("%s", word);
        fprintf(fp, "%s\n", word); 
    }

    fclose(fp); 
    return 0;
}


