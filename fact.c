#include<stdio.h>
int main(){ 
    int n,fact =1;
    printf("enter the number to make its factorial: \n ");
    scanf("%d",&n);
    
    for(int i=1;i<=n; i++) 
	{
fact*=i;
    }
    //added cooment
    printf("final factorial of %d is : %d\n",n,fact);
return 0;
}    
    	
 


