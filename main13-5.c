#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int m[5][5], n = 0, lista[25], repete;

    srand(time(NULL));
    for (int i = 0; i < 25; i++)
    {
    
        do {
            n = rand() % 100;
            repete = 0;

            for (int j = 0; j < i; j++)
            {
                if (lista[j] == n)
                {
                    repete = 1;
                    break;
                }
            }

            if (!repete)
            {
                lista[i] = n;
                break;
            }
        } while (repete);
    }

    int contador = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            m[i][j] = lista[contador];
            contador++;
            printf("%d ", m[i][j]);
        }
        printf("\n");
        
    }

    return 0;
}
