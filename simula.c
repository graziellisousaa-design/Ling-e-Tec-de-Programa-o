	int A, B, C, D, aux;
    printf("Digite o valor para A: ");
    scanf("%d", &A);

    printf("Digite o valor para B: ");
    scanf("%d", &B);

    printf("Digite o valor para C: ");
    scanf("%d", &C);

    printf("Digite o valor para D: ");
    scanf("%d", &D);     
    aux = A;
    A = C;
    C = D;    
    D = B;
    B = aux; 
    printf("Resultado após a permutação: %d, %d, %d, %d\n", A, B, C, D);

	#include <stdio.h>

int main() {
    double valor_patrimonial, preco_acao, vpa, p_vp;
    int qnt_acoes;
    printf("Digite o valor patrimonial da empresa (R$): ");
    scanf("%lf", &valor_patrimonial);

    printf("Digite a quantidade de acoes disponiveis: ");
    scanf("%d", &qnt_acoes);

    printf("Digite o preco atual da acao (R$): ");
    scanf("%lf", &preco_acao);
    if (qnt_acoes <= 0) {
        printf("Erro: A quantidade de acoes deve ser maior que zero.\n");
        return 1;
    }

    vpa = valor_patrimonial / qnt_acoes;
    p_vp = preco_acao / vpa;

    printf("\nVPA (Valor Patrimonial por Acao): R$ %.2f\n", vpa);
    printf("Indicador P/VP: %.2f\n", p_vp);
 
    printf("Classificacao da acao para compra: ");
    
    if (p_vp < 0.0) {
        printf("Pessima\n");
    } 
    else if (p_vp >= 0.0 && p_vp < 0.8) {
        printf("Otima\n");
    } 
    else if (p_vp >= 0.8 && p_vp <= 1.2) {
        printf("Indiferente\n");
    } 
    else if (p_vp > 1.2 && p_vp <= 2.0) {
        printf("Boa\n");
    } 
    else { // p_vp > 2.0
        printf("Ruim\n");
    }

    return 0;
}
