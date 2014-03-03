#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fp;
    char str[100],*es;
    gets(str);
    printf(str);
    int i = strlen(str);
    fp=fopen(es,"w+");
    if(fp!=NULL)
    {
        //fgets(str,100,fp);
       // es=str;
       // printf("%d",i);
    }fclose(fp);
}
