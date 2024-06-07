#include <stdlib.h>
#include <stdio.h>
// 3. Определить, какая строка является самой длинной в заданном файле.
int main(){
    FILE *fileone = fopen("text1.txt", "r");
    int dlina1=0;
    int dlina2=0;
    while(fgetc(fileone) != "\0")
    {
        dlina1++;
        
    }
    fclose(fileone);
    fileone= fopen("text1.txt", "w");
    fprintf(fileone, "%i",dlina1 );







    return 0;
}