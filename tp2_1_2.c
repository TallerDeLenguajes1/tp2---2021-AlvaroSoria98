#include <stdio.h>
#include <stdlib.h>

#define N 4
#define M 5
int main (){
    int f,c;
    double mt[N][M], j=0, *p_mt;

    p_mt= mt;

    for(f=0; f < N; f++){
        for (c = 0; c < M; c++)
        {
            *(p_mt+(f*M)+c)=j;
            j++;
        }
    }

    for(f = 0; f < N; f++){
        for (c = 0; c < M; c++)
        {        
             printf("%lf ", *(p_mt+(f*M)+c));
        }
        printf("\n");
    }
}