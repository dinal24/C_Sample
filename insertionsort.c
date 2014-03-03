#include<stdio.h>

void main()
{
    int arg[]={1,8,7,6,5};
    int i=5;
    sort(arg,i);
}
void sort(int arg[],int i)
{
    int j=1;
    while(j<i)
    {   int tok=arg[j];
        int w=j;

        while(tok<arg[w-1] && w>0 )
        {
            arg[w]=arg[w-1];
            w--;
        }
        arg[w]=tok;
        j++;
    }

    int n;
    for(n=0;n<i;n++)
    {
       printf("%d ",arg[n]);
    }


}
