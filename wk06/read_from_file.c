#include<stdio.h>

#define MAX_LINE 4096

int main(){
    // print the first line of the file "cats.txt"
    FILE * fp = fopen("cats.txt", "r");
    
    if( fp == NULL ){
        fprintf(stderr, "COULDN'T OPEN FILE\n");
        return 1;
    }
    
    
    char line[MAX_LINE];
    
    fgets(line, MAX_LINE, fp);
    
    printf("%s", line);
    
    fclose(fp);

    return 0;
}
