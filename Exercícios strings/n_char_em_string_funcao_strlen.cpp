#include <stdio.h>
#include <locale.h>
#include <string.h> 

int main(int arg, char *argv[])
{
	setlocale(LC_ALL, "Portuguese");
	
    char minha_string[51]; // 50 caracteres + 1 para o caractere nulo '\0'.
    
    printf("Digite uma string (m�ximo de 50 caracteres): ");
    scanf("%50s", minha_string); // limita a leitura a 50 caracteres
    
    // 3. Usa strlen() para encontrar o comprimento da string.
    size_t comprimento = strlen(minha_string);
    
    // 4. Calcula o tamanho total (incluindo o '\0') e exibe o resultado.
    size_t tamanho_total = comprimento + 1;
    // %zu: especificador de formato correto para exibir o tipo size_t
    printf("\nO n�mero de caracteres na string (sem o '\\0') �: %zu\n", comprimento);
    printf("O n�mero total de caracteres na string (incluindo o '\\0') �: %zu\n", tamanho_total);
    
    return 0;
}

