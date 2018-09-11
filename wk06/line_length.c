// What is wrong with this?

#include <stdio.h>

#define MAX_LINE 10

int main(void) {
    char line[MAX_LINE];
    int  i;

    while (fgets(line, MAX_LINE, stdin) != NULL) {
        i = 0;
        while (line[i] != '\0') {
            i = i + 1;
        }
        printf("the line is %d characters long\n", i);
    }
    return 0;
}
