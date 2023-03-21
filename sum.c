#include<stdio.h>
void adress(int n);
int main(){
    int n=4;
adress(n);
    printf("adress of n is %p\n",&n);

    return 0;}
    void adress(int n)
{
    printf("adress of n is %p\n",&n);
}
    	
 
