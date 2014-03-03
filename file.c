#include<stdio.h>

int main(){

    FILE *fp;
    char c;

    fp=fopen("e9.txt","r");

    if(fp!=NULL){

        c=getc(fp);
        while(c!=EOF){

            printf("%c",c);
            c=getc(fp);

        }
    }
    else{
        printf("Error");
    }





    return 0;
}
