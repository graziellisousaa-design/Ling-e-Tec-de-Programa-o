#include <math.h>
/* Construa um programa que receba dois valores.
E verifique se eles são positivos ou negativos,
caso sejam positivos, verifique se são menores que 10,
caso sejam verifique se são primos,
e mostre a area e a hipotenusa do triangulo por eles formado.
Caso não sejam primos, mostre as operações básicas entre eles.
Caso sejam maiores que 10, mostre se são multiplos um pelo outro.
Caso não sejam positivos mostre seus inversos.*/

int main(int argc, char *argv[]) {

    int a, b, c, r, h, mult, div, soma, sub;

    printf("Digite dois valores de a e b: ");
    scanf("%d %d", &a, &b);

    if (a>0 && b>0){
        if (a<10 && b<10){
            if ((a==2 || a==3 || a==5 || a==7) && (b==2 || b==3 || b==5 || b==7)){
                r = (a*b)/2;
                h= sqrt((pow(a,2) + pow(b,2))); //pow é potencia, no caso seria tipo A elevado a 2
                printf("area %d e hipotenusa %d", r, h);
            }else{
                soma= a+b;
                sub = a-b;
                mult = a*b;
                div = a/b;
                printf("%d, %d, %d, %d", soma, sub, mult, div);
            }
        }else {
            if(a%b == 0) printf("sim"); else printf("não");
        }
    }else{
        printf("%d %d", (a*-1), (b*-1));
    }
    return 0;
}
