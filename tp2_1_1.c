#include <stdio.h>
#include <stdlib.h>

#define N 4
#define M 5
int main (){
    int f,c;
    double mt[N][M];
    c=3;
    for(f = 0; f < N; f++){
        for (f = 0; f < N; f++)
        {        
             printf("%lf ", mt[f][c]);
        }
        printf("\n");
    }
}