#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
int main()
{
    char ch;
    FILE *fp = fopen("doc\\test.txt", "r");
    FILE *fp2 = fopen("doc\\out.txt", "w");
    if (!fp)
    {
        printf("the file cannot be opend!\n");
        return 0;
    }
    if (!fp2)
    {
        printf("the file cannot be opend!\n");
        return 0;
    }
    fscanf(fp, "%c", &ch);
    while ((fscanf(fp, "%c", &ch) != EOF))
    {
        fprintf(fp, "%c", ch);
    }
    fclose(fp2);
    fclose(fp);
    printf("end of program\n");
    return 0;
}
