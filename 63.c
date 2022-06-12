#include<stdio.h>
void toUpperCase(char a){
    printf("%c",'A'+a-'a');
}
int main(){
    char a;
    printf("Enter a lower case letter : ");
    scanf("%c",&a);
    toUpperCase(a);
}