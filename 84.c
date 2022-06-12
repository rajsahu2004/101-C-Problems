#include<stdio.h>
#include<string.h>
struct writer{
    char name[20],genre[20];
};
int main(){
    struct writer writerRecords[3];
    strcpy(writerRecords[0].name,"Mukula.C");
    strcpy(writerRecords[0].genre,"Technical");
    strcpy(writerRecords[1].name,"Mostasim Billah");
    strcpy(writerRecords[1].genre,"Technical");
    strcpy(writerRecords[2].name,"Mahady Joy");
    strcpy(writerRecords[2].genre,"Technical");
    int i;
    for(i=0;i<3;i++){
        printf("Writer %d : \n",i+1);
        printf("Name : %s\n",writerRecords[i].name);
        printf("Genre : %s\n",writerRecords[i].genre);
    }
}