#include <stdio.h>

void desenhaCirculo(char caractere,int raio)
{
     int i, j;
     
    for(i=-raio; i<raio; i++)
    {
        for(j=-raio; j<raio; j++)
        {
            if(i * i + j * j < raio * raio)
                printf("%c", caractere);
            else
                printf(" ");
                
        }
        printf("\n");
    }
}

int main()
{
    int raio;
 
    printf("passe o valor do raio: ");
    scanf("%i", &raio);
    
    desenhaCirculo('*', raio);

    return 0;
}

