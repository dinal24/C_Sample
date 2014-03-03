#include<stdio.h>

int main()
{

    int a[]={12,3231,112,323,1,11};
    int j=1;
    int z=j;

int size = 6;
    while(j<size){
        z=j;
    while(a[j]<a[j-1]&&j>0)
    {
        int k = a[j-1];
         a[j-1]=a[j];
         a[j]=k;
         j--;
    }
        z++;
        j=z;
    }
    int i=0;
    for(i=0;i<size;i++)
    printf("%d  ",a[i]);
}
