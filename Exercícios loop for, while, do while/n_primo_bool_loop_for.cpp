#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main(int arg, char *argv[])
{
	setlocale(LC_ALL, "portuguese-brazilian");

	int n;
	bool primo;
	
	primo = true;
	
	printf("Informe um n� inteiro e n�o negativo para verificar se � um n� primo ou n�o:\n");
    scanf("%d", &n);
    
    if(n > 0 && n != 1) {
    	for (int i = 2; i <= n/2; i++) {
	    	
			if(n%i == 0) {
	       		primo = false;
	       		
	       		break;
			}
	} 
				if(primo) {
					printf("O n� %d � um n� primo!", n);
				}
				else {
					printf("O n� %d N�O � um n� primo!", n);
				}
		}
	else if(n == 0 || n == 1) {
		printf("%d N�O � um n� primo pois para ser primo um n�mero precisa ter exatamente dois divisores positivos.", n);
	}
	else {
		printf("N�mero inv�lido! Deve ser inteiro e n�o negativo!");
	}
		
	return 0;
}
