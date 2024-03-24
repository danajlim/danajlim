#include<stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct People {
    char *name [LEN];
    char *gender[LEN];
    char *place[LEN];
    char *major[LEN];
    float score;
    int *height;
    int *weight;};
    
int count(){
    File *fp;
    fp=fopen("list.txt","r");
    char tmp;
    int cnt=1;
    if (fp=NULL){
        exit(0);
    }
    while (fscanf(fp,"%c",&tmp)!= EOF){
        printf("%c",tmp);
        if (tmp==\n')
            cnt++;
    return 0;
    }
}

int main(){
    int **arr;

     struct People p[LEN];
    int i=0;
    

    FILE *fp=NULL;
    fp=fopen("list.txt","r");

    int n=0
    People *a=(People*)malloc(sizeof(People)*n);
    for (int i=0;i<n;i++){
        for (i=0;i++;);
        fscanf(fp,"%s %s %s %s %d %d %d",&p[i].name,&p[i].gender,&p[i].place,&p[i].major,&p[i].score,&p[i].height,&p[i].weight)
        fclose(fp);
    }

    for(i=0;i++;);
    printf("%s %s %s %s %d %d %d\n",p[i].name,p[i].gender,p[i].place,p[i].major,p[i].score,p[i].height,p[i].weight)

    return 0;
}
