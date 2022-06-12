#include<stdio.h>
int main(){
    char par[1000];
    FILE *file;
    file=fopen("paragraph.txt","r");
    while(fgets(par,1000,file))
        printf("%s",par);
    printf("\n");
}