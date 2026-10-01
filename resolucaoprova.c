
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	void exercicio1 (){
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

}
void exercicio2 (){
	int capacidade, qtd_itens, n_mochilas;
    
    printf("Escreva a quantidade de itens a serem dispostos nas mochilas: \n");
    scanf("%d",&qtd_itens);
    printf("Escreva a capacidade de itens de cada mochila: \n");
    scanf("%d",&capacidade);
    
    n_mochilas = qtd_itens/capacidade;
    
    printf("Voce precisa de %d mochilas", n_mochilas);
}	

void exercicio3 (){
	    float valor, resultado;
    int codigo;

    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    printf("Digite o codigo da unidade: ");
    scanf("%d", &codigo);

    if (codigo == 1) {
        // Celsius para Fahrenheit
        resultado = valor * 1.8 + 32;
        printf("Resultado: %.2f F", resultado);
    }

    else if (codigo == 2) {
        // Celsius para Kelvin
        resultado = valor + 273.15;
        printf("Resultado: %.2f K", resultado);
    }

    else if (codigo == 3) {
        // Kelvin para Celsius
        resultado = valor - 273.15;
        printf("Resultado: %.2f C", resultado);
    }

    else if (codigo == 4) {
        // Metro para Milha
        resultado = valor / 1609.34;
        printf("Resultado: %.2f mi", resultado);
    }

    else if (codigo == 5) {
        // Milha para Metro
        resultado = valor * 1609.34;
        printf("Resultado: %.2f m", resultado);
    }

    else if (codigo == 8) {
        // Quilograma para Libra
        resultado = valor * 2.205;
        printf("Resultado: %.2f lb", resultado);
    }

    else if (codigo == 9) {
        // Libra para Quilograma
        resultado = valor / 2.205;
        printf("Resultado: %.2f kg", resultado);
    }

    else if (codigo == 10) {
        // km/h para mph
        resultado = valor / 1.609;
        printf("Resultado: %.2f mph", resultado);
    }

    else if (codigo == 11) {
        // mph para km/h
        resultado = valor * 1.609;
        printf("Resultado: %.2f km/h", resultado);
    }

    else {
        printf("Unidade invalida");
    }
}
void exercicio4 (){
	int capacidade, qtd_itens, n_mochilas;
    
    printf("Escreva a quantidade de itens a serem dispostos nas mochilas: \n");
    scanf("%d",&qtd_itens);
    printf("Escreva a capacidade de itens de cada mochila: \n");
    scanf("%d",&capacidade);
    
    n_mochilas = qtd_itens/capacidade;
    
    printf("Voce precisa de %d mochilas", n_mochilas);
}	

	
void execercicio5 (){
	int a, b, c;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("Digite o valor de c: ");
    scanf("%d", &c);

    if (a == b || a == c || b == c) {
        printf("Os numeros tem que ser distintos");
    }
    else if (a < b && b < c) {
        printf("%d %d %d", a, b, c);
    }
    else if (a < c && c < b) {
        printf("%d %d %d", a, c, b);
    }
    else if (b < a && a < c) {
        printf("%d %d %d", b, a, c);
    }
    else if (b < c && c < a) {
        printf("%d %d %d", b, c, a);
    }
    else if (c < a && a < b) {
        printf("%d %d %d", c, a, b);
    }
    else {
        printf("%d %d %d", c, b, a);
    }
}	
void exercicio6 (){
	int valor1, valor2, codigo;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    printf("Digite o codigo da operacao: ");
    scanf("%d", &codigo);

    if (codigo == 1) {
        if (valor1 > valor2) {
            printf("Verdadeiro");
        }
        else {
            printf("Falso");
        }
    }

    else if (codigo == 2) {
        if (valor1 < valor2) {
            printf("Verdadeiro");
        }
        else {
            printf("Falso");
        }
    }

    else if (codigo == 3) {
        if (valor1 == valor2) {
            printf("Verdadeiro");
        }
        else {
            printf("Falso");
        }
    }

    else if (codigo == 4) {
        if (valor1 != valor2) {
            printf("Verdadeiro");
        }
        else {
            printf("Falso");
        }
    }

    else {
        printf("Operador invalido");
    }
}

void exercicio7 (){
	int num1, num2, num3, num4, num5;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    printf("Digite o quarto numero: ");
    scanf("%d", &num4);

    printf("Digite o quinto numero: ");
    scanf("%d", &num5);

    if (num2 == num1 + 1) {
        printf("%d e %d sao consecutivos\n", num, num2);
    }

    if (num3 == num2 + 1) {
        printf("%d e %d sao consecutivos\n", num2, num3);
    }

    if (num4 == num3 + 1) {
        printf("%d e %d sao consecutivos\n", num3, num4);
    }

    if (num5 == num4 + 1) {
        printf("%d e %d sao consecutivos\n", num4, num5);
    }

}

void ex8 (){
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
}

void ex9 (){
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
}
int main(int argc, char *argv[]) {
    
    
    int op;
	printf ("Insira qual exercicio quer resolver sendo eles de 1 a 3 prova Esoft A, 4 a 6 prova Esoft B e 7 a 9 Ads\n");
	scanf ("%d", &op);
	
	switch(op){

   case 1:
         ex1();
    break;

    case 2:
        ex2();
      break;

	case 3:
         ex3();
     break;
     	
	case 4:
         ex4();
     break;
    
    case 5:
         ex5();
     break;
     
    case 6:
         ex6();
     break;
     
    case 7:
         ex7();
     break;
    	
	case 8:
         ex8();
     break;
    
    case 9:
         ex9();
     break;
    
    
    }
	return 0;
}
