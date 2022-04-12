#include <stdio.h>
#include <stdlib.h>


int main(){
    char file[20] = "/proc/11/status";
    char str[20];
    FILE *fp = fopen(file,"r");
    fseek(fp,80L,SEEK_SET);
    fgets(str,7,fp);
    printf("%s\n",str);
    return 0;


}

