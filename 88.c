#include<stdio.h>
int main(){
    int c;
    FILE *file;
    file = fopen("myFile.txt","w");
    fclose(file);
    file = fopen("myfile.txt","r");
    if(file){
        while((c=getc(file))!=EOF){
            putchar(c);
            fclose(file);
        }
    }
    file=fopen("myFile.txt","a");
    fprintf(file,"%s","Jasper Hostel");
    fclose(file);
    file=fopen("myFile.txt","r");
    if(file){
        while((c=getc(file))!=EOF)
        putchar(c);
        fclose(file);
    }
}