#include<stdio.h>
int main(){
    FILE *file;
    int i=0,sum=0,n[10];
    file = fopen("integrs89.txt","r");
    while(fscanf(file,"%d",&n[i])!=EOF)
        i++;
    for(i=0;i<10;i++)
        sum+=n[i];
    printf("%.1f",sum/10.0);
}