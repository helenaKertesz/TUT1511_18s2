#include<stdio.h>
#include<string.h>

#define LINE_SIZE 15

int main(){
    
    char line[LINE_SIZE];
    printf("Enter a phrase (less that %d characters):\n", LINE_SIZE);
    fgets(line, LINE_SIZE, stdin );

    // TODO let's print it backwards!

}
