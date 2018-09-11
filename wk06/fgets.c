#include <stdio.h>
#include <string.h>

#define LINE_SIZE 15

int main(void) {
    // Read input into 
    char line[LINE_SIZE];
    
    fgets(line, LINE_SIZE, stdin);
    //scanf("%s", line);
    printf("%s\n", line);

    printf("size: %ld\n", strlen(line));

    // why is fgets better than scanf?

    return 0;
}
