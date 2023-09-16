#include<stdio.h>
void main(){
int a,b,temp;
printf("Enter a:");
scanf("%d",&a);
printf("Enter :b");
scanf("%d",&b);
temp=a;
a=b;
b=temp;
printf("the value of a:%d",a);
printf("The value of b :%d",b);
}