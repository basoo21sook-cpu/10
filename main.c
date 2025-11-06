#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void) {
    char src[] = "The worst things to eat before you sleep";
    char dst[100];

    strcpy(dst, src); // <--- 문자열 복사 (dst = 대상, src = 원본)

    printf("copied string : %s\n", dst);
}

