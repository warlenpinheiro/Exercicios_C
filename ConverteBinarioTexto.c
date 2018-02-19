#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* Programa para converter numeros binarios para texto, até que o numero 2 seja digitado */

int Binario(int bin){

   	int dec = 0, i;
 
    for(i = 0; bin > 0; i++)
    {
        dec = dec + pow(2, i) * (bin % 10);
        bin = bin / 10;
    }
    return dec;
}

int main()
{
	int bin, i=0;
	char *s;

	s = malloc(50 * sizeof(char));

	while(bin!=2){
		printf("Digite o binario: ");
		scanf("%d", &bin);

		if (bin == 2)
		{
			continue;
		}

		s[i] = Binario(bin);
		i++;
	}

	s[i]='\0';


		printf("O texto correspondente eh: %s\n", s);

	free(s);
    return 0;

}