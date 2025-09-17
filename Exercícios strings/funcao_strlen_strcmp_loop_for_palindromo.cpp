#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "portuguese-brazilian");
    char frase[101], fraseinvertida[101];
    int i, j = 0;

    printf("Digite uma string para verificar se � um pal�ndromo: ");
    scanf("%100[^\n]s", frase);
    
	
	int tamanho = strlen(frase);
	
    for(i = tamanho - 1; i >= 0; i--) {
    	fraseinvertida[j] = frase[i];
    	j++;
	}
	
	fraseinvertida[j] = '\0';
	
	if(strcmp(frase, fraseinvertida) == 0) { // 0 = id�nticas char a char
		printf("A string %s � um pal�ndromo!\n", frase); 
	}
	else { // -1 ou 1 = diferentes
		printf("A string %s n�o � um pal�ndromo.", frase);
	}
	
    return 0;
}

