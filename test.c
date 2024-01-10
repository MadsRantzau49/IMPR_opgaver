#include<stdio.h>

int main()
{
    FILE* file = fopen("number.txt","r");
    int number;
    char c;
    while((c = fgetc(file)) != EOF){
        fscanf(file,"%d",&number);
        printf("%d ",number);
    }
    return 0;
}