#include <stdio.h>
int m(int *a);
int main()
{
  char *str;
  gets(str);
 // printf(str);
 // printf("%d",str);
    int i,d=1;

    for(i=0; *(i+str)!='\0' ; i++)
    {
        if(*(str+i)==' '){
            d++;
        }
    }
    printf("%d",d);

}
int m(int *a)
{

    *a *=2;
    return *a;
}
