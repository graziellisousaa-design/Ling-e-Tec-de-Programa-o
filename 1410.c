
/* leia um valor par e mostre sua raiz */

int main(int argc, char *argv[]) {
	int valor [10], cont, i;
	for(i=0; i<10; i++){
		scanf("%d", &valor[i]);
	}
	printf ("Acabou o for\n");
	printf ("Iniciando o while");
	while (i<10){
		scanf ("%d",&valor [i]);
		i++;
	}
	i = 0;
	do {
		printf ("%d", valor [i]);
		i++;
	}while(i<10);
	
	
/*	int valor;
	printf ("insira um valor par ");
	scanf ("%d", &valor);
	
	while (valor%2==1){
    	printf("Valor inserido nao e par, \n insira um novo valor: ");
    	scanf ("%d", &valor);
}
do {
	printf ("insira um valor par ");
	scanf ("%d", &valor);	
} while (valor%2==1);
    printf ("a raiz de %d = %f", valor, sqrt(valor));
*/	
	
/* Elabore um programa que peça ao usuario para digitar 10 numeros que sejam inteiros positivos e ignore os negativos.
 E mostre na tela o resultado da soma e a média desses valores
 --OBS: não precisa usar vetor, usem os laços da aula de hoje
 while e do-while  */

int main(int argc, char *argv[]) {
	int n, i, soma; 
	i=0;
	soma =0;
	while (i<10){	
	 	scanf ("%d", &n);
	 	if(n>0){
		
	 		soma += n;
	 		i++;
	 	}
}
	printf ("Soma = %d e media = %d", soma, (soma/10));
	
	return 0;
}
