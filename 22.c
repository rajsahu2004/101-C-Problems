#include<stdio.h>
int main(){
    char c;
    printf("Enter a letter : ");
    scanf("%c",&c);
    if(c>='a' && c<='z')
        c= ('A'+c-'a');
    switch(c){
        case 'A': 
        printf("Vovel");
        break;
        case 'E': 
        printf("Vovel");
        break;
        case 'I': 
        printf("Vovel");
        break;
        case 'O': 
        printf("Vovel");
        break;
        case 'U': 
        printf("Vovel");
        break;
        default: 
        printf("Consonent");
    }
}