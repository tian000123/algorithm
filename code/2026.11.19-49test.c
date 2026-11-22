#include<stdio.h>

int main(){
    char* str[] = {"abc","ash","fhiad"};
    int size = sizeof(str) / sizeof(str[0]);
    // int n = 3;
    for(int i = 0;i < size;i++){
        // char* ans = str[i];
        printf("%s\n",str[i]);
    }
    // // char* str = {"abc"};
    // // int n = 3;
    // for(int i = 0;i < 3;i++){
    //     printf("%c ",str[i]);
    // }
    // printf("\n");
    // for(int j = 0;str[j] != '\0';j ++){
    //     printf("%c\n",str[j]);
    // }
    return 0;
}