#include <stdio.h>

int main() {

    int n1, n2, n3, n4, n5;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);

    printf("Digite o quarto numero: ");
    scanf("%d", &n4);

    printf("Digite o quinto numero: ");
    scanf("%d", &n5);

    if (n2 == n1 + 1) {
        printf("%d e %d sao consecutivos\n", n1, n2);
    }

    if (n3 == n2 + 1) {
        printf("%d e %d sao consecutivos\n", n2, n3);
    }

    if (n4 == n3 + 1) {
        printf("%d e %d sao consecutivos\n", n3, n4);
    }

    if (n5 == n4 + 1) {
        printf("%d e %d sao consecutivos\n", n4, n5);
    }

    return 0;
}





#include <stdio.h>

int main() {

    float peso, altura, imc;

    printf("Digite seu peso em kg: ");
    scanf("%f", &peso);

    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("Seu IMC e: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Classificacao: Abaixo do peso");
    }
    else if (imc <= 24.9) {
        printf("Classificacao: Normal");
    }
    else if (imc <= 29.9) {
        printf("Classificacao: Acima do peso");
    }
    else {
        printf("Classificacao: Obeso");
    }

    return 0;
}
#include <stdio.h>

int main() {

    int A = 6;
    int B = 0;
    int C = 0;

    printf("Inicio: A = %d, B = %d, C = %d\n", A, B, C);

    // Disco 1: A -> C
    A = A - 1;
    C = C + 1;
    printf("A -> C: A = %d, B = %d, C = %d\n", A, B, C);

    // Disco 2: A -> B
    A = A - 2;
    B = B + 2;
    printf("A -> B: A = %d, B = %d, C = %d\n", A, B, C);

    // Disco 1: C -> B
    C = C - 1;
    B = B + 1;
    printf("C -> B: A = %d, B = %d, C = %d\n", A, B, C);

    // Disco 3: A -> C
    A = A - 3;
    C = C + 3;
    printf("A -> C: A = %d, B = %d, C = %d\n", A, B, C);

    // Disco 1: B -> A
    B = B - 1;
    A = A + 1;
    printf("B -> A: A = %d, B = %d, C = %d\n", A, B, C);

    // Disco 2: B -> C
    B = B - 2;
    C = C + 2;
    printf("B -> C: A = %d, B = %d, C = %d\n", A, B, C);

    // Disco 1: A -> C
    A = A - 1;
    C = C + 1;
    printf("A -> C: A = %d, B = %d, C = %d\n", A, B, C);

    return 0;
}
