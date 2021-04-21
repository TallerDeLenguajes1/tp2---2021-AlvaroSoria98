#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FILAS 4
#define MIN 5
#define MAX 6

int **p_mt;
int cantPares(int **p_mt, int columnas);

int main (){
	srand(time(NULL));
	int columnas=rand()%(MAX - MIN + 1) + MAX;
    p_mt=(int **)malloc(sizeof(int*) * FILAS);
    for (int i = 0; i < FILAS; i++)
    {
    	/* code */
    	p_mt[i]= (int *)malloc(sizeof(int*) * columnas);
    }
    int n=999, m=100;
    for (int j = 0; j < FILAS; j++)
    {
    	/* code */
    	for(int k = 0; k < columnas; k++){
    		p_mt[j][k]=rand()% (n - m + 1) + m;
    		if ((p_mt[j][k] % 2)==0)
    		{
    			/* code */
    			printf("se encuentra en el numeros numero de fila= %d \n %d\n\n", j, p_mt[j][k]);
    		}		
    	}    	
    }

    for (int j = 0; j < FILAS; j++)
    {
    	/* code */
    	for(int k = 0; k < columnas; k++){
    		printf(" %d ", p_mt[j][k]);
    	}
    	printf("\n");
    }

    printf("cantidad de pares= %d\n", cantPares(p_mt,columnas));
    

    free(p_mt);
    return 0;
}

int cantPares(int **p_mt, int columnas){
	int pares = 0;
	for (int i = 0; i < FILAS; i++)
	{
		
		for (int c = 0; c < columnas; c++)
		{
			if ((p_mt[i][c] % 2)==0)
			{
				pares++;
			}
		}
	}
	return pares;
}