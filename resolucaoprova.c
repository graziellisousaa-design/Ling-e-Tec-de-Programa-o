
#include <stdio.h>

int main() {

    int num1, num2, num3, num4;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    printf("Digite o quarto numero: ");
    scanf("%d", &num4);

    printf("Numeros impares:\n");

    if (n1 % 2 != 0) {
        printf("%d\n", num1);
    }

    if (n2 % 2 != 0) {
        printf("%d\n", num2);
    }

    if (n3 % 2 != 0) {
        printf("%d\n", num3);
    }

    if (n4 % 2 != 0) {
        printf("%d\n", num4);
    }

    printf("Multiplos de 5:\n");

    if (n1 % 5 == 0) {
        printf("%d\n", num1);
    }

    if (n2 % 5 == 0) {
        printf("%d\n", num2);
    }

    if (n3 % 5 == 0) {
        printf("%d\n", num3);
    }

    if (n4 % 5 == 0) {
        printf("%d\n", num4);
    }

    return 0;
}
