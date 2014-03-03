#include<stdio.h>


int main()
{
 FILE *fp;
    fp=fopen("write.txt","w+");
    char *sin;
    printf("enter:");
    gets(sin);
    fputs(sin,fp);
    fclose(fp);

    int words=1;

    char buf[100],*str;

    fp=fopen("write.txt","r");
    str=fgets(buf,100,fp);

    while(str!=NULL)
    {
        printf(buf);
        str=fgets(buf,100,fp);
        words++;
    }

    fclose(fp);
    printf("%d",words);
}

