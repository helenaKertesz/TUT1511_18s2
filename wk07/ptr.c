#include<stdio.h>

int main(void){
    int n;
    int *p;
    int *q;

    //printf("n:%d \tp:%p \tq:%p\n", n, p, q);

    p = &n;
    printf("n:%d \tp:%p \tq:%p\n", n, p, q);
    *p = 5;
    printf("n:%d \tp:%p \tq:%p\n", n, p, q);
    *q = 17;
    printf("n:%d \tp:%p \tq:%p\n", n, p, q);
    q = p;
    printf("n:%d \tp:%p \tq:%p\n", n, p, q);
    *q = 8;
    printf("n:%d \tp:%p \tq:%p\n", n, p, q);


    return 0;
}
