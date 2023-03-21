#include<stdio.h>
int main(){ 
	int a[2][2],b[2][2],c[2][2];
	int i,j,k;
for ( i = 0; i < 2; i++)
	{for (j= 0; j < 2; j++)
	{
		/* code */scanf("%d",&a[i][j]);
	}
	
		/* code */
	}for ( i = 0; i < 2; i++)
	{for (j=0; j < 2; j++)
	{
		/* code */scanf("%d",&b[i][j]);
	}
	
		/* code */
	}for ( i = 0; i < 2; i++)
	{for (j= 0; j < 2; j++)
	{c[i][j]=0;
	for ( k = 0; k < 2; k++){
c[i][j]+=(a[i][k]*b[i][k]);}
	}
	}
	for ( i = 0; i < 2; i++)
	{printf("[");
		for (j= 0; j < 2; j++)
	{
		/* code */scanf("%d",c[i][j]);
	}printf("]");
	printf("\n");
	
		/* code */
	}return 0;}


	
	

	
	
			
			
		
		
	
	
