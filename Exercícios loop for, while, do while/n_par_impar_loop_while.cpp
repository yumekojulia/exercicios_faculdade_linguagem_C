#include <stdio.h>
#include <locale.h>
#include <math.h> 

/* Escreva um programa que leia n n�meros e para cada n�mero digitado imprima, 
o quadrado do n�mero se o n�mero for �mpar ou a raiz quadrada do n�mero se ele for um n�mero par. */

int main(int arg, char *argv[])
{
	setlocale(LC_ALL, "portuguese-brazilian");
     
    float num, imp, par;
    int n, i = 1;
     
    printf("Escolha a quantidade de termos:\n");
    scanf("%d", &n);
	    
	while(i <= n) {
		printf("Digite o %d n�mero: ", i);
        scanf("%f", &num);
        
		if((int)num % 2 == 0) {
            par = sqrt(num);
			printf("v%.1f = %.1f\n", num, par);
        }
        else {
        	imp = pow(num, 2);
			printf("%.1f� = %.1f\n", num, imp);
		}
		
		i++;
    }
	 
	return 0;
}

