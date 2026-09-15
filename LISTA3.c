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
	
	
	
	
	return 0;
}
