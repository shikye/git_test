#include <stdio.h>
#include <stdlib.h>

int main(){
    char file_name[10] = "a.c";
    FILE* fp = fopen(file_name,"w");
    int c;
    if(fp == NULL)
    {
        printf("Failed open\n");
        exit(0);
    }
    printf("get char");
    while((1 = fgetc(stdin)) != '\n')
    {
        fputc(c,stdout);
        fputc(c,fp);
    }
    fputc('\n',stdout);
    fclose(fp);
    return 0;







}
