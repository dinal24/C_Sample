#include<stdio.h>


int main()
{
 FILE *fp;
    fp=fopen("write.txt","w+");
    char *sin;
    printf("enter:\n");
    gets(sin);
    fputs(sin,fp);
    fclose(fp);

    int words=1;

    char c;
    printf("output:\n");
    fp=fopen("write.txt","r");
    c=getc(fp);

    while(c!=EOF)
    {
        printf("%c",c);
        c=getc(fp);
        if(c==' '||c==','||c=='.')
        {
            words++;
        }

    }

    fclose(fp);
    printf("\n%d:",words);

    FILE *fpo;
     fpo=fopen("prob.txt","w");
    fputs("number:",fpo);
    char ce='a';//words+30;
      putc(ce,fpo);
      fclose(fpo);

}

