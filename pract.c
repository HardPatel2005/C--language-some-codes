#include<stdio.h>
int main(){ 
    int x;
    int *ptr;
    ptr =&x;
    *ptr=0;
    printf("x= %d\n",x);
    printf("*ptr =%d\n",*ptr);
    *ptr+=5 ;
    printf("*ptr =%d\n",x);
    printf("*ptr =%d\n",*ptr);
    (*ptr)++;
    printf("*ptr =%d\n",x);
printf("*ptr =%d\n",*ptr);


    return 0; 
}

      
    
