int main()
{
    int val=1,i,j,r,n;
    scanf("%d",&n);

   // for(i=0;i<=n;i++)
   // {
        for(j=0;j<=n;j++)
        {

            for(r=1;r<=j;r++)
            {

                val=val*(n-r+1)/r;
               // printf("*%d*",val);

            }
        printf("%d ",val);
        val=1;
        }
    printf("\n");
   // }

}
