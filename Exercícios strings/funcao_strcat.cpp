#include <stdio.h>
#include <locale.h>
#include <string.h> 

int main(int arg, char *argv[])
{
	setlocale(LC_ALL, "Portuguese");
	
   	char p1[50], p2[50];

	printf("Digite a 1� palavra: ");
	scanf("%25[^\n]s", p1);
	fflush(stdin);
	printf("Digite a 2� palavra: ");
	scanf("%24[^\n]s", p2);
	fflush(stdin);
	
	strcat(p1, " "); // jogue o espa�o na palavra1
	strcat(p1, p2); //jogue a palavra2 na palavra1 que j� alocou o espa�o 
	
	printf("Resultado: %s\n", p1);

    return 0;
}
