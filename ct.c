 int a;
 void s(int x,int y);
 void s1(int x);
int main()
{
    int b=10,c=15;
    a=5;

    printf("%d %d %d\n",a,b,c);
    s(b,c);
    printf("%d %d %d\n",a,b,c);
    s1(b);
    printf("%d %d %d\n",a,b,c);
}

void s1(int x){
int z;
z=x;
x=a;
a=z;



}
void s(int x,int y){
int z;
z=x;
x=y;
y=z;



}
