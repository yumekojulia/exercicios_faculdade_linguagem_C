#include <stdio.h>
#include <locale.h>

int main(int arg, char *argv[])
{
	setlocale(LC_ALL, "portuguese-brazilian");

    int num;
    
    printf("Informe um n�mero inteiro: \n");
    scanf("%d",&num);
    
	if (num > -10 && num < 10) {
        printf("O n�mero %d tem 1 d�gito.\n", num);
    } 
    else {
        if (num > -100 && num < 100) {
            printf("O n�mero %d tem 2 d�gitos.\n", num);
        }
        else {
            if (num > -1000 && num < 1000) {
                printf("O n�mero %d tem 3 d�gitos.\n", num);
            }
            else {
                printf("O n�mero %d tem quatro ou mais d�gitos.\n", num);
            }
        }
	}
	  return 0;
}

