#include<stdio.h>
int main(){
    printf("Enter an integer : ");
    int n;
    scanf("%d",&n);
    if(n==-1)
        return 0;
    else if(n>-32){
        for(int i=n;i>=-32;i--)
        printf("%d\n",i);
    }
    else {
        for(int i=n;i<=-32;i++)
        printf("%d\n",i);
    }
    return 0;
}