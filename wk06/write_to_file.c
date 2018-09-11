#include<stdio.h>

#define MAX_LINE 4096

int main(){
    
    FILE * fp;
    fp = fopen("data.txt", "a");
    if( fp == NULL ){
        printf("COULDN'T OPEN/CREATE FILE\n");
        return 1;
    }

    // TODO Get a string from user
    char line[MAX_LINE];
    fgets(line, MAX_LINE, stdin);

    // TODO write to the file
    fputs(line, fp);

    fclose(fp);

    return 0;
}
