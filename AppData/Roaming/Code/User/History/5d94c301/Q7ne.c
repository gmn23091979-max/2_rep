
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    system("chcp 65001");
    int max = 0, cur = 0, i, st_ind = 0, end_ind = 0, x = 1000;
    char str[1000], L_word = "";
    
    printf("Введите строку: \n");
    if (fgets(str, 1000, stdin) == 0)
        return 1;
    str[strcspn(str, "\\n")] = '\\0';
    int len = strlen(str);
    for (i=0; i <= len; i++){
        if (str[i] != " " && str[i] != "\\0")
            cur++;
        else{
            if (cur > max){
                max = cur;
                st_ind = i - max;
            }
        cur = 0;
        }
    }
    
    for (i = 0;i < max; i++)
        L_word[i] = str[st_ind]

    

}
    