int main(int argc, char *argv[]) {
	
	float area, raio, basema, baseme, h, areat; 
	printf ("Insira o raio do circulo: ");
	scanf ("%f", &raio );
	// area = M_PI* pow (raio,2) 
	 area = pi*(raio*raio);
	printf (" A area do ciruclo é de raio é %f = %f ",raio, area );
      //area do trapezio
		printf ("Area do trapezio agora, digite a base maior, base menor e a altura: ");
	scanf ("%f %f %f", &basema, &baseme, &h);
	areat = (basema + baseme)*h /  2;
	printf ("A area do trapezio é %f ", areat);

return 0;
	
