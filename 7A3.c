#include<stdio.h>
void main(){
char n;
int a,b;
float ans;
printf("Enter ur choice:");
scanf("%c",&n);
printf("enter number:");
scanf("%d %d",&a,&b);
switch(n)
{
case '+' : ans=a+b;
printf("The sum is:%f",ans);
break;
case '-': ans=a-b;
printf("The sub is:%f",ans);
break;
case '*' : ans=a*b;
printf("The multiplication is:%f",ans);
break;
case '/' : ans=a/b;
printf("The division is:%f",ans);
break;
default: printf("invalid input");
}
}