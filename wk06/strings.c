#include <stdio.h>
#include <string.h>

int main(void) {

    char* string = "Hello"; // can't edit
    string[0] = 'Z';
    
    char string1[6] = "Hello" // can edit
    
    printf("%s\n", string);

    /*char str[10];
    str[0] = 'H';
    str[1] = 'i';
    str[2] = '\0';
    printf("%s\n", str);
    
    strcpy( str, "Hi");
   
   
    printf("%c\n", )*/
    
    return 0;
}
