#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
int main(){
    srand(time(0));
    setlocale(0, "");
    int N = 10, min = 100, max = -100, k1, k2, size = 10, a;
    int X[10] = {10, 11, 12, 7, 9, 3, 76, 2, 6, 5};

    for (int a = 0; a < size; a++)
        X[a] = rand() % 20 + 1;

    for (int i = 1; i < N; i++){
        if (X[i] < X[min])
            min = i;
    
        if (X[i] > X[max])
            max = i;
    }
    k1 = N-1-min;
    k2 = N-1-max;

    printf("Кол-во ҝлементов после минималльного: %i\n", k1);
    printf("Кол-во ҝлементов после максимального: %i\n", k2);
    system("pause");

}