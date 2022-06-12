#include<stdio.h>
int main(){  
    int a[10],n,i=0; 
    printf("Enter the number to convert: ");    
    scanf("%d",&n);    
    while(n>0){    
        a[i]=n%2;    
        n=n/2;   
        i++;
    }    
    printf("\nBinary of Given Number is : ");    
    for(i=i-1;i>=0;i--)     
        printf("%d",a[i]);        
    return 0;  
}  