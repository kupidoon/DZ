#include <stdlib.h>
#include <stdio.h>
#include <string.h>
// 4. Из файла, в котором находятся несколько строк текста убрать все переносы на новую строку и оставить 1 рядок.
int main(){
    FILE *fileone = fopen ("text1.txt", "r");
    int i=0;
    char radok[1000];
    char c[1000];
    while(fgetc(fileone) != EOF){
        if(fgetc(fileone)=="\n"){
            i--;
        }
        radok[i]=fgetc(fileone);
        i++;
    }  
    fclose(fileone);
    fileone= fopen("text1.txt", "w");
    for(int j=0;j<i; j++){
        fprintf(fileone, "%s",radok);
    }
    fclose(fileone);
    







    return 0;
}