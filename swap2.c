#include<stdio.h>
void main(){
int a,b;
printf("Enter a:");
scanf("%d",&a);
printf("Enter b:");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("The value of a is:%d",a);
printf("The value of b is:%d",b);
}
