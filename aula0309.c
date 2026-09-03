 /*
 tipo nome (Lista de parametros){
     comandos
     comandos...
  }
 */
 
 void exerc2 (){
  float real, dolar, cotacao;

 printf ("\n Escreva quanto vc tem em reais: ");
 scanf ("%f", &real);
 printf ("\n Escreva qual a cotacao: ");
 scanf ("%f", &cotacao);
 dolar = real / cotacao;
 printf ("\n Voce tem um total de %f dolares", dolar);
 }

  void exerc4 (){
  	float cel, faren;
  	 printf ("\n  Digite sua temperatura em celsius: ");
      scanf ("%f", &cel);
      faren = cel * 1.8 + 32;
      printf ("\nSua temperatura em farenheit é de: %f", faren);
  }
  
  void exerc8 (){
  int seg, min, horas;
  printf ("\nEscreva o tempo em segundos do evento: ");
  scanf ("%d", &seg);
  min = seg / 60;
  horas = min / 60;
  seg = seg - ((horas*3600)+ (min*60));
  printf ("\nO %d:%d:%d", seg, min, horas);
  }

int main(int argc, char *argv[]) {
	
	int op;
	printf ("Insira qual exercicio quer resolver: [2|4|8]\n");
	scanf ("%d", &op);
	
	switch(op){

   case 2:
         exerc2();
    break;

    case 4:
        exerc4();
      break;

	case 8:
         exerc8();
     break;
    
    }	
	return 0;
}
