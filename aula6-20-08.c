#include <stdio.h>
#include <stdlib.h>

/*

int main(int argc, char *argv[]) {
    int a, b, c, d maior, maior_temp, maiort;
    printf("Insire os valores a serem comparados");
    scanf("%d %d %d", &a, &b, &c);
    maior_temp = (a + b + abs(a - b)) / 2;
    maior = (maior_temp + c + abs(maior_temp - c) ) / 2;

    printf("O maior entre |%d|%d|%d = %d", a, b, c, maior);

    */

    // 4 valores



    int main(int argc, char *argv[]) {
    int a, b, c, d, maior, maior_temp, maiort;
    printf("escreva os valores a serem comparados");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    maior_temp = (a + b + abs(a - b)) / 2;
    maior = (maior_temp + c + abs(maior_temp - c) ) / 2;
    maiort = ( maior + d + abs(maior - d)) / 2;

    printf("O maior é |%d|%d|%d|%d = %d", a, b, c, d, maiort);
