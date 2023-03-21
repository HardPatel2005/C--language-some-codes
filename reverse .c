#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float L,C,R,reso,resistance,sum,sub;
    
printf("enter L=: enter C=: enter R=:",L,C,R);
scanf("%f%f%f",&L,&C,&R);
reso=L*C;
resistance=R*R;
sum=4*C*C;
sub=sqrt((1/reso)-(resistance/sum));

printf("\n freaquency of this function is =%f",sub);

    
return 0;


}