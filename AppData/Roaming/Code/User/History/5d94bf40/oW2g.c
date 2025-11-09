#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0));
    int N = 10, min = 0, max = 0, k1, k2, size = 10, a;
    int X[10] = {10, 11, 12, 7, 9, 3, 76, 2, 6, 5};

    for (int a = 0; a < size; a++){
        X[a] = rand() % 20 + 1;
        printf("%i\n ", X[a]);
    }
        

    for (int i = 1; i < N; i++){
        if (X[i] < X[min])
            min = i;
    
        if (X[i] > X[max])
            max = i;
    }
    k1 = N-1-min;
    k2 = N-1-max;

    printf("qt elements after min: %i\n", k1);
    printf("qt elements after max: %i\n", k2);
    system("pause");

}