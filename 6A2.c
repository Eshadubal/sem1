#include<stdio.h>
void main(){
int a;
printf("Enter a:");
scanf("%d",&a);
if(a>=10000 && a<20000 )
{
    printf("The gross salary is:%d",( a+((20*a)/100)+(80*a)/100));
}
else if(a>=20000 && a<30000)
{
    printf("The gross salary is:%d",(a+(25*a)/100)+(90*a)/100);
}
else if(a>=30000)
{
    printf("The gross salary is:%d",(a+(30*a)/100)+(95*a)/100);
}


}