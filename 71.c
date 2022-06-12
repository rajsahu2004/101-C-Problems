#include<stdio.h>
int main(){
    char a[1000];
    printf("Enter a line :");
    gets(a);
    int i=0,count=1;
    while(a[i]!='\0'){
        if(a[i]==' ')
        count++;
        i++;
    }
    printf("There are %d words",count);
}