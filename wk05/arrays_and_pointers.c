
#include<stdio.h>

int main(){

    int a[5] = {1, 2, 3, 4, 5};

    printf("     a = %p\n", a );
    printf(" &a[0] = %p\n", &a[0] );
    printf(" &a[1] = %p\n", &a[1] );
    printf("    *a = %d\n", *a );
    printf("*(a+1) = %d\n", *(a+1));
}

void fill_array(){

}

