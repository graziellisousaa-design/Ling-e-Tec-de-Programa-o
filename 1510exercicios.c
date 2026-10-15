
int main() {
	//EXERCICIO 1
    int inicio, fim, passo;
    int i;

    printf("Digite o valor inicial: ");
    scanf("%d", &inicio);

    printf("Digite o valor final: ");
    scanf("%d", &fim);

    printf("Digite o passo da contagem: ");
    scanf("%d", &passo);

    if (passo <= 0) {
        printf("Erro: O passo deve ser maior que zero.\n");
        return 1;
    }

    printf("Resultado: ");

    i = inicio + passo; 

    while (i < fim) {
        printf("%d ", i);
        i += passo;
    }

    printf("\n");
    //jeito do prof do exercicio 1
    int ini,fim,passo;
    printf ("entre com o valor inicial, final e passo: ");
    scanf ("%d %d %d", &ini, &fim, &passo);
	if (ini<fim){
		printf ("%d",ini);
		ini += passo;
	}
}else {
	while (ini>fim){
		printf ("%d",ini);
		ini -= passo;
		
	}
	
}
	//Exercicio 2
	//Faça um programaque que receba um numero n e realize a soma dos n primeiro termos da sequencia defenida como: [S = 1/2; 1/4; 1/8; 1/16... N]








	/*Exercicio 3   
	Crie um programa que exiba na tela,  o triangulo de pascl.
	*/ 
	
	
	return 0;
}
