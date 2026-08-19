int main(int argc, char *argv[]) {
//exercicio 1
	int primeiro, segundo, aux;
	
	printf ("Escreva o primeiro valor: ");
	scanf("%d", &primeiro) ;
	printf ("Escreva o segundo valor: ");
	scanf("%d", &segundo) ;
	aux = primeiro;
	primeiro = segundo; //primeiro -> 5
	segundo = aux;
	printf("%d \n %d \n", primeiro, segundo);

	//EX2notação cientifica (2)

	float valor, binario, sf, vt, total, a, b, c, d, idade, soma, media, produtorio, dd, mm, aa;
	double valor1;
	printf ("Primeiro valor: ");
	scanf ("%lf", &valor1);
	printf ("Valor em notação: %e", valor1);

	//Exercício 3
	printf("\nExercicio 3\n");
	int n;
	int b1, b2, b3, b4, b5,b6,b7;
	printf("Digite um número: ");
	scanf("%d", &n); //sistema de conversão em escadinha
	b1 = n/64;
	n = n % 64;
	b2 = n/32;
	n = n % 32;
	b3 = n/16;
	n = n %16;
	b4 = n/8;
	n = n%8;
	b5 = n/4;
	n = n%4;
	b6 = n/2;
	n = n%2;
	b7 = n;
	printf("Em binário: %d %d %d %d %d %d %d", b1, b2, b3, b4, b5, b6, b7);

	//3 mas forma do professor
	int n, resultado, bit64, bit32, bit16, bit8, bit4, bit2;
	printf ("Escreva um valor pra conversão: ");
	scanf ("%d",&n);
	
	bit64 = n%2;
	resultado = n/2;
	bit32 = resultado%2;
	resultado = resultado/2;
	bit16 = resultado%2;
	resultado = resultado/2;
	bit8 = resultado%2;
	resultado = resultado/2;
	bit4 = resultado%2;
	resultado = resultado/2;
	bit2 = resultado%2;
	resultado = resultado/2;
	printf ("O numero %d em binario = %d%d%d%d%d%d%d ", n, resultado%2, bit2, bit4, bit8, bit16, bit32, bit64);
	

	
	//Exercicio 4 

  //salario fixo e valor total em vendas 15% de comissão
	printf ("Digite seu salario fixo: ");
	scanf ("%f", &sf);
	printf ("Digite seu valor total de vendas: ");
	scanf ("%f", &vt);
	total = (vt * 0.15) + sf;
	printf ("Seu valor final é de %f \n", total);

	//exercicio 5 digite 4 valores , exiba soma, media e produtorio

	printf ("\n Digite o primeiro valor: ");
	scanf ("%f", &a);
	printf ("Digite o segundo valor: ");
	scanf ("%f", &b);
	printf ("Digite o terceiro valor: ");
	scanf ("%f", &c);
	printf ("Digite o quarto valor: \n");
	scanf ("%f", &d);
	soma = a+b+c+d;
	media = (a+b+c+d) / 2;
	produtorio = a*b*c*d;
	printf ("\n Os resultados sao soma: %f media: %f produtorio: %f \n ", soma, media, produtorio);

	//exercicio 6 valor da idade em dias, meses e anos

	printf ("\n Escreva sua idade: ");
	scanf("%f", &idade);
	aa = idade;
	mm = idade*12 ;
	dd = idade*365;
	printf ("Sua idade em dias: %f meses %f e anos %f",dd, mm, aa);

	/Exercício 7
	
	float raio, vol;
	
	printf("Digite o raio: ");
	scanf("%f", &raio);
	
	vol = (4.0/3) * pi * (raio *raio * raio); //Podia usar o pow, mas achei chato
	
	printf("O volume é: %f", vol);
	
	//Exercício 8

	printf("\nExercício 8\n");	
	float x1, y1, x2, y2, dist, dfinal;
	
	printf("Digite a coordenada do ponto 1 (eixo x e eixo y): ");
	scanf("%f %f", &x1, &y1);
		
	printf("Digite a coordenada do ponto 2 (eixo x e eixo y): ");
	scanf("%f %f", &x2, &y2);
	
	dist = (((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)));//Poderia ter facilitado com o pow, mas quando percebi deu preguiça de mudar, fica difícil entender vendo, mas se executar o resultado é o mesmo ;)
	
	dfinal = sqrt(dist);
	
	printf("A distancia entre os pontos é: %.2f", dfinal);


	
	
	
	
