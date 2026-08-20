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
	
//8
float x1, x2, y1, y2, p1, p2, dist;
	
	printf ("Escreva as coordendas do ponto P1: ");
	scanf ("%f, %f", &x1, &y1);
	printf ("Escreva as coordendas do ponto P2: ");
	scanf ("%f, %f", &x2, &y2);
	p1 = pow (x2-x1, 2);
	p2 = pow (y2-y1, 2);

	dist = sqrt(p1+p2);
	printf("Distancia: %f", dist);
