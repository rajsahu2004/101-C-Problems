#include<stdio.h>
int main(){
    FILE *fp;
    fp = fopen("myFile.txt","w");
    fprintf(fp,"Hello %s has got %d marks","Raj Sahu",100);
    fclose(fp);
}