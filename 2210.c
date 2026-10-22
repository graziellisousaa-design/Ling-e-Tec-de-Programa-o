int main(int argc, char *argv[]) {
	int i, j, palindromo;
	char palavra[30];
	scanf ("%s", &palavra);
	printf ("\n Inserido %s", palavra);
	for (i=0; i < 30 && palavra[i] != '\0'; i++){
		printf (" %d", i);
	}
	printf ("\n Tamanho da minha palavra eh %d", i);
	for (j=i-1, i=0; i<j; i++, j--) {
		if (palavra[i] == palavra[j]) palindromo = 1;
			else palindromo = 0;
			printf ("\n %d | %d", i, j);
		}
	if (palindromo) printf ("\n Eh palindromo");
	else printf  ("\n nao eh palindromo");
	return 0;
}
