#include <stdio.h>
#include <string.h>  
#include <math.h>
#include <stdbool.h>
#include <locale.h>   


int ehPar(int num) {
   return (num % 2 == 0);
}

int main() {
    setlocale(LC_ALL, "portuguese-brazilian"); 
    
    int num; 

    printf("Digite um n� inteiro: ");
    scanf("%d", &num);
    
    if (ehPar(num)) {
    	printf("O n�mero %d � PAR", num);
	} else {
		printf("O n�mero %d � �MPAR", num);
	}

    return 0;
}

