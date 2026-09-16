#include <stdio.h>
#include <stdlib.h>
//EXERCICIOS 7,8 E 9
float calc_inss (float salario_bruto)
{
	if (salario_bruto <= 1412.00)return salario_bruto*0.075;
	else if (salario_bruto <= 2666.68)return salario_bruto*0.09;
	else if (salario_bruto <= 4000.00)return salario_bruto*0.12;
	else return salario_bruto *0.14;
}
float calc_irpf (float salario_bruto)
{
	if (salario_bruto <= 2259.20 ) return salario_bruto;
	else if (salario_bruto <= 2826.65) return salario_bruto*0.075;
	else if (salario_bruto <= 3751.05) return salario_bruto*0.15;
	else if (salario_bruto <= 4664.68) return salario_bruto*0.225;
	else return salario_bruto*0.275;
	
}	
	
int main(int argc, char *argv[]) {
	float salario, desconto1, desconto2, salario_bruto, horas, valor, desconto3;
   //EXERCICIO 8
	//(Salário Base * Alíquota) - Dedução 
	//EX9
	printf ("\nDigite suas horas trabalhadas no mes: \n");
	scanf ("%f", &horas);
	printf ("\nDigite o valor que voce ganha por hora: \n");
	scanf ("%f", &valor);
	salario_bruto = horas * valor;
	desconto1 = calc_inss(salario_bruto);
	desconto2 = calc_irpf(salario_bruto);
	desconto3 = salario_bruto - desconto1 - desconto2;
	salario = desconto3 - salario_bruto;
	printf ("  RECIBO DE PAGAMENTO DE SALÁRIO (CONTRA-CHEQUE)\n");
	printf (" Salário Bruto (Horas x Valor): R$ %.2f\n", salario_bruto);
	printf("(-) Desconto INSS: R$ %.2f \n", desconto1);
	printf ("(-) Desconto IRPF: R$ %.2f\n", desconto2);
	printf (" LÍQUIDO A RECEBER: R$ %.2f\n", desconto3);
	
	//EX 04
	char nome[100];
    float nota1, nota2, nota3, media,faltam;

    printf("Digite o nome do aluno: ");
    scanf ("%s", nome);

    printf("Digite a 1a nota: ");
    scanf("%f", &nota1);
    printf("Digite a 2a nota: ");
    scanf("%f", &nota2);
    printf("Digite a 3a nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3.0;
	faltam = 10.0 - media;
    printf("\nRESULTADO FINAL\n");
    printf("Aluno: %s\n", nome);
    printf("Media: %.2f\n", media);

    if (media >= 7.0) {
        printf("\033[34mSituacao: APROVADO\033[0m\n");
    } else if (media >= 4.0) {
        printf("\033[32mSituacao: EXAME\033[0m\n");
        printf("Faltam %.2f pontos para atingir a nota maxima (10.0)\n", faltam);
    } else {
        printf("\033[31mSituacao: REPROVADO\033[0m\n");
    }
  //EX05
	int valor, resto;
    int qtd100, qtd50, qtd10, qtd5, qtd2, qtd1;

    printf("Digite o valor do saque: ");
    scanf("%d", &valor);

    resto = valor;

    qtd100 = resto / 100;
    resto  = resto % 100;

    qtd50 = resto / 50;
    resto = resto % 50;

    qtd10 = resto / 10;
    resto = resto % 10;

    qtd5 = resto / 5;
    resto = resto % 5;

    qtd2 = resto / 2;
    resto = resto % 2;

    qtd1 = resto / 1;
    resto = resto % 1;
    printf("Valor solicitado: R$ %d\n", valor);
    printf ("Para obter esse valor serão necessarios,\n %d notas de 100,\n %d notas de 50,\n %d notas de 10,\n %d notas de 5,\n %d notas de 2 \n %d notas de 1",qtd100, qtd50, qtd10, qtd5, qtd2, qtd1);
    
	
	return 0;
}
