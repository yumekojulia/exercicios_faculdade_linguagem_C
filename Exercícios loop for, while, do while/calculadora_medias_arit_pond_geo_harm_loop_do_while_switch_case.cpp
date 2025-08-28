#include <stdio.h>
#include <locale.h>
#include <math.h> 
#include <stdlib.h>

int main(int arg, char *argv[])
{
	setlocale(LC_ALL, "portuguese-brazilian");

	int esc;
	float n1, n2, n3, n4, n5, p1, p2, p3, nt;
	float mediaarit = 0.0, mediapond = 0.0, mediageo = 0.0, mediahar = 0.0;
	
    do
    {
        system("cls");
        printf("\nC�lculadora de M�dias\n");
		printf("1 - M�dia Aritm�tica\n");
        printf("2 - M�dia Ponderada\n");
        printf("3 - M�dia Geom�trica\n");
        printf("4 - M�dia Harm�nica\n");
        printf("5 - Sair\n");
        scanf("%d", &esc);
        
        switch (esc) { 
            case 1:
                printf("Infome as duas notas a serem calculadas:\n");
                scanf("%f%f", &n1, &n2);
                mediaarit = (n1 + n2) / 2.0;
				printf("M�dia Aritm�tica: %.2f\n", mediaarit);
				system("pause");
                break;

            case 2:
                printf("Infome as tr�s notas a serem calculadas, respectivamente:\n");
                scanf("%f%f%f", &n1, &n2, &n3);
                printf("Infome os tr�s pesos das notas a serem calculadas anteriormente, respectivamente:\n");
                scanf("%f%f%f", &p1, &p2, &p3);
                
                nt = (n1 * p1) + (n2 * p2) + (n3 * p3);
                mediapond = nt / (p1 + p2 + p3);
                
				printf("M�dia Ponderada: %.2f\n", mediapond);
				system("pause");
				break;
            case 3:
               	printf("Infome as quatro notas a serem calculadas, respectivamente:\n");
                scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
                
                nt = n1 * n2 * n3 * n4;
                mediageo = pow(nt, 1/4.0);
                
                printf("M�dia Geom�trica: %.2f\n", mediageo);
                system("pause");
				break;
            
            case 4:
                printf("Infome as cinco notas a serem calculadas, respectivamente:\n");
                scanf("%f%f%f%f%f", &n1, &n2, &n3, &n4, &n5);
                
				nt = pow(n1, -1.0) + pow(n2, -1.0) + pow(n3, -1.0) + pow(n4, -1.0) + pow(n5, -1.0);
				mediahar = 5.0 / nt;
				
				printf("M�dia Harm�nica: %.2f\n", mediahar);
				system("pause");				
				break;
				
			case 5:
               	
               	printf("Saindo da opera��o...\n");
               	system("pause");
				break;
				
            default:
            	
                printf("Op��o Inv�lida.\n");
                system("pause");                
                break;
        } 
        
    } while(esc != 5);
    	
	return 0;
}

