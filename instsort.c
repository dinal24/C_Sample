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
    int x,token;
    for(x=j;x<i;x++)
    {   token=arg[x];
        int y;
        for(y=x-1;y>-1;y--)
        {
            if(token<arg[y]|| y>0)
            {
                  printf("%d  ",arg[y]);
                   arg[y+1]=arg[y];
            }
            else
            {
                arg[y]=token;
                break;
            }
        }
    }
    int n;
    for(n=0;n<i;n++)
    {
       // printf("%d ",arg[n]);
    }

}
