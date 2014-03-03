#include<stdio.h>

int main()
{

    FILE *fp;
    char c,str[100],*strv;
    int i=0;
    fp=fopen("strrev.txt","a+");

    if(fp!=NULL)
    {

       str[i]=getc(fp);
       while(str[i]!=EOF)
       {    i++;
           str[i]=getc(fp);

            //if(c=EOF){*(str+i)='\0'; break;}
       }
       fclose(fp);
    }
    printf("%s:%d",str,strlen(str));
    int j=strlen(str);
    int x;
    for(x=0;x<=j;x++)
    {
        printf("%c",str[j-x]);
    }


}
