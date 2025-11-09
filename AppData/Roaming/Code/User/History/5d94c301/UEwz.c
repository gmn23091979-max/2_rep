
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void rem(char* word){
    int i, j;
    int len = strlen(word);
    for (i=0, j=0; i<len; i++){
        if (i%2 != 0)
            word[j++] = word[i];
    }
    word[j] = '\0';
}

int main(){
    system("chcp 65001");
    int max_w = 0, cur = 0, i, st_ind = 0, end_ind = 0, x = 1000;
    char str[1000];
    char L_word = " ";
    
    printf("Введите строку: \n");
    if (fgets(str, 1000, stdin) == 0)
        return 1;
    str[strcspn(str, "\\n")] = '\\0';
    int len = strlen(str);
    for (i=0; i <= len; i++){
        if (str[i] != " " && str[i] != "\\0")
            cur++;
        else{
            if (cur > max_w){
                max_w = cur;
                st_ind = i - max_w;
            }
        cur = 0;
        }
    }
    
    for (i = 0;i < max_w; i++)
        L_word[i] = str[st_ind + i];
    L_word[max_w] = '\\0';
    printf("Самое длинное слово: %s\\n", L_word);
    rem(L_word);
    printf("Слово после удаления четных символов: %s\\n", L_word);

    return 0;

}
    