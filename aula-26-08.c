int main(int argc, char *argv[]) {
	int a,b,c,r;
	printf ("Entre com os valores para A,B e C: ");
	scanf ("%d %d %d", &a, &b, &c);
	
	if (a>b){
		r = a;
	}
	else{
	
	    r=b;
	}
	if (c>r){
		r = c;
	}
	printf ("%d eh o maior", r);
/* par ou impar */	
	int numero;
	printf ("\nEscreva um numero: ");
	scanf ("%d", &numero);
	if (numero % 2 == 0){
		printf ("\nO numero %d eh par",numero);
		}
	else{
		printf ("\nO numero %d eh impar", numero);
	}
	
	
	
	
	return 0;
}
