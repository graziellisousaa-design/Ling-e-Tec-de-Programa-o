//LISTA DOIS, Exercicio 1
  float ano, idade, atual, km, ms, real, dolar, cel, faren;
printf ("Escreva a sua idade: ");
	scanf("%f", &idade) ;
printf ("Escreva o ano atual: ");
	scanf("%f", &atual);
ano = atual - idade;
printf ("Seu ano de nascimento é: %f ", ano);

//Exercicio 2

printf ("\n escreva a velocidade em km/h: ");
 scanf ("%f", &km);
 ms = km / 36;
 printf ("\n Sua velocidade em metros por segundo e de: %f ", ms);

 //Exercicio 3

 printf ("\n Escreva quanto vc tem em reais: ");
 scanf ("%f", &real);
 dolar = real / 5.20;
 printf ("\n Voce tem um total de %f dolares", dolar);

 // exercicio 4

 printf ("\n  Digite sua temperatura em celsius: ");
 scanf ("%f", &cel);
faren = cel * 1.8 + 32;
 printf ("\nSua temperatura em farenheit é de: %f", faren);

// exercicio 5

float ang, rad, p, suc, a, ant;
printf ("\nEscreva o angulo:  ");
scanf ("%f", &ang);
p = 3.1415;
rad = (ang)* p/ 180;
printf ("\n O angulo em radiano fica: %f ", rad);

//Exercicio 6 

printf ("\nEscreva um numero inteiro: ");
scanf ("%f", &a);
suc = a + 1;
ant = a - 1;
printf ("\nO sucessor é: %f e o antecessor é %f", suc, ant);

//Exercicio 7

float primeiro, segundo, terceiro;
primeiro = 780.000 * 0.46;
segundo = 780.000 * 0.32;
terceiro = 780.000 * 0.22;
printf ("\nVALOR DOS 3 GANHADORES DA LOTERIA");
printf ("\nO primeiro ganhador vai receber: %f", primeiro);
printf ("\nO segundo ganhador vai receber: %f", segundo);
printf ("\nO terceiro ganhador vai receber: %f", terceiro);

//Exercicio 8

int seg, min, horas;
printf ("\nEscreva o tempo em segundos do evento: ");
scanf ("%d", &seg);
min = seg / 60;
horas = min / 60;
printf ("\nO tempo em segundos: %d minutos: %d e horas:%d ", seg, min, horas);

//Exercicio 9

float tempo, velocidade, distancia, litros;
printf ("\nInforme o tempo gasto na viagem (em horas): ");
scanf ("%f", &tempo);
printf ("\nEscreva a velocidade média (em km/h) durante a viagem: ");
scanf ("%f", &velocidade);
distancia = tempo * velocidade;
litros = distancia / 12.0;
printf ("\nA distancia que da viagem foi de: %f e a quantidade de litros e de: %f",distancia, litros);

//Exercicio 10

int A, B, C, cal1, cal2;
printf ("\n Digite o primeiro valor: ");
scanf ("%d", &A);
printf ("\n Digite o segundo valor: ");
scanf ("%d", &B);
printf ("\n Digite o terceiro valor: ");
scanf ("%d", &C);
cal1 = (A + B + abs(A-B))/2;
cal2 = (cal1 + C + abs (cal1-C))/2;
printf ("\n %d e o maior", cal1);

