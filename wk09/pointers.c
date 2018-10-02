#include<stdio.h>

int main(){
    char s[] = "Hello World!";
    char *cp = s;
    char *cp2 = &s[8];
    
    int a[] = {1, 2, 3};
    
    printf("%d\n", *a);
  

    printf("%s\n",  cp    );
    printf("%c\n",  *cp   );
    printf("%c\n",  cp[6] );
    printf("%s\n",  cp2   );
    printf("%c\n", *cp2   );

    return 0;
}

