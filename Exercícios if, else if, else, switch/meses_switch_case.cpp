#include <stdio.h>
#include <locale.h>

int main(int arg, char *argv[])
{
	setlocale(LC_ALL, "portuguese-brazilian");

    int mes;
    
    printf("\nDigite o n� do m�s (1 a 12): ");
    scanf("%d", &mes);
	printf("\n");
	
	switch (mes) {
        case 1:
            printf("M�s: Janeiro\n");
            printf("Dias: 31\n");
            break; 

        case 2:
            printf("M�s: Fevereiro\n");
            printf("Dias: 28 (desconsiderando anos bissextos)\n");
            break;

        case 3:
            printf("M�s: Mar�o\n");
            printf("Dias: 31\n");
            break;

        case 4:
            printf("M�s: Abril\n");
            printf("Dias: 30\n");
            break;

        case 5:
            printf("M�s: Maio\n");
            printf("Dias: 31\n");
            break;

        case 6:
            printf("M�s: Junho\n");
            printf("Dias: 30\n");
            break;

        case 7:
            printf("M�s: Julho\n");
            printf("Dias: 31\n");
            break;

        case 8:
            printf("M�s: Agosto\n");
            printf("Dias: 31\n");
            break;

        case 9:
            printf("M�s: Setembro\n");
            printf("Dias: 30\n");
            break;

        case 10:
            printf("M�s: Outubro\n");
            printf("Dias: 31\n");
            break;

        case 11:
            printf("M�s: Novembro\n");
            printf("Dias: 30\n");
            break;

        case 12:
            printf("M�s: Dezembro\n");
            printf("Dias: 31\n");
            break;
            
        default:
            printf("Erro: O n�mero do m�s informado � inv�lido.\n");
            break;
    }
    
    return 0;
}

