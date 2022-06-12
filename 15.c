#include<stdio.h>
int main(){
    char cLower,cUpper;
    printf("Enter an alphabet : ");
    scanf("%c",&cLower);
    cUpper= (cLower>='a' && cLower<='z')?('A'+cLower-'a'):cLower;
    printf("Upper case of the alphabet is %c",cUpper);
}