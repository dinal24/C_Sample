#include<stdio.h>

int main(){

    FILE *fp;
    char buffer[100],*out;


    fp=fopen("e9.txt","r");

    if(fp!=NULL){

        out=fgets(buffer,100,fp);
        while(out!=NULL){

            printf(buffer);
            out=fgets(buffer,100,fp);

        }
        fclose(fp);
    }
    else{
        printf("Error");
    }

    return 0;
}
