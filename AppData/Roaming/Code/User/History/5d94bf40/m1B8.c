#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0));
    int N = 10, min = 0, max = 0, k1, k2, size = 10, a; min_v = 0, ma
    int X[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    for (int a = 0; a < size; a++){
        X[a] = rand() % 20 + 1;
        printf("%i ", X[a]);
    }

    printf("\n");
    for (int i = 0; i < N; i++){
        if (X[i] < X[min])
            min = i;
            min_v = 
    
        if (X[i] > X[max])
            max = i;
    }
    k1 = N-1-min;
    k2 = N-1-max;

    printf("min num: %i\n", min);
    printf("qt elements after min: %i\n", k1);
    printf("qt elements after max: %i\n", k2);
    system("pause");

}