#include <stdio.h>
#include <stdlib.h>

int main(){
    system("chcp 1251");
    int age;
    char name[100], str[100];
    puts("Введите Ваше Имя : ");
    scanf("%s", name);
    printf("Введите Ваш возраст : ");
    scanf("%i", &age);
    sprintf(str, "Здравствуйте %s.Ваш возраст %i лет", name, age);
    puts(str);
    system("pause");
}
