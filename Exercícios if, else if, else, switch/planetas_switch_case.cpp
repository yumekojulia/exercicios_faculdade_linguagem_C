#include <stdio.h>
#include <locale.h>

int main(int arg, char *argv[])
{
	setlocale(LC_ALL, "portuguese-brazilian");

    int p;
    
    printf("\nDigite o n� do planeta desejado: \n");
    printf("\n1 - Merc�rio\n");
    printf("\n2 - V�nus\n");
    printf("\n3 - Terra\n");
    printf("\n4 - Marte\n");
    printf("\n5 - J�piter\n");
    printf("\n6 - Saturno\n");
    printf("\n7 - Netuno\n");
    printf("\n8 - Urano\n");
    printf("\n9 - Plut�o\n");
    printf("\n");
    scanf("%d", &p);
	printf("\n");
	
	switch (p) {
        case 1:
            printf("A dist�ncia do Sol at� Merc�rio � de 59 milh�es de km.\n");
            break; 

        case 2:
            printf("A dist�ncia do Sol at� V�nus � de 108 milh�es de km.\n");
            break;

        case 3:
            printf("A dist�ncia do Sol at� Terra � de 150 milh�es de km.\n");
            break;

        case 4:
            printf("A dist�ncia do Sol at� Marte � de 228 milh�es de km.\n");
            break;

        case 5:
            printf("A dist�ncia do Sol at� J�piter � de 750 milh�es de km.\n");
            break;

        case 6:
            printf("A dist�ncia do Sol at� Saturno � de 1431 milh�es de km.\n");
            break;

        case 7:
            printf("A dist�ncia do Sol at� Netuno � de 2877 milh�es de km.\n");
            break;

        case 8:
            printf("A dist�ncia do Sol at� Urano � de 4509 milh�es de km.\n");
            break;

        case 9:
            printf("A dist�ncia do Sol at� Plut�o � de 5916 milh�es de km.\n");
            break;
        default:
            printf("Erro: O n�mero %d � inv�lido.\n", p);
            break;
    }
    
	return 0;
}

