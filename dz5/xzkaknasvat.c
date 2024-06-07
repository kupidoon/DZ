#include <stdio.h>
#include <stdlib.h>
//  Задания по файлам: (1 и 2 вчера на занятии были)
// 3. Определить, какая строка является самой длинной в заданном файле.
// 4. Из файла, в котором находятся несколько строк текста убрать все переносы на новую строку и оставить 1 рядок.
// 5. В первом файле есть число (и только число, ничего лишнего), во втором файле есть второе число. Задача: создать третий
//  файл и записать туда результат суммы 2 чисел. (не 1 цифра, а 1 число - то есть может быть 2, 3, 4-значное итд).
int main()
{
    int perve = 0, vtore = 0, resultat = 0, i = 0, temp = 0;
    char per[1000], vtor[1000];
    FILE *fileone = fopen("text1.txt", "r");

    if (fileone == NULL)
    {
        printf("Cannot open file\n");
        return 1;
    }
    fgets(per, 999, fileone);
    fclose(fileone);
    FILE *filetwo = fopen("text2.txt", "r");
    if (filetwo == NULL)
    {
        printf("Cannot open file\n");
        return 1;
    }
    fgets(vtor, 999, filetwo);
    fclose(filetwo);
    while (per[i] != '\0')
    {
        temp = per[i] - '0';
        perve = perve * 10 + temp;
        i++;
    }
    i = 0;
    while (vtor[i] != '\0'){
		temp = vtor[i] - '0';
		vtore = vtore * 10 + temp;
		i++;
	}
    resultat= perve + vtore;
    FILE *filethree = fopen("text3.txt", "w");
    if (filethree == NULL)
    {
        printf("Cannot open file\n");
        return 1;
    }
    fprintf(filethree, "%i", resultat);
    
    
    
    
    
    
    
    return 0;
}
