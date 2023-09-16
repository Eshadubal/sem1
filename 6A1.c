#include<stdio.h>
void main(){
int a,b; char c;
printf("Enter c");
scanf("%c",&c);
printf("Enter a");
scanf("%d",&a);
printf("Enter b");
scanf("%d",&b);
if(c=='+'){
printf("the sum is:%d",a+b);
}else if(c=='-'){
    printf("the subtraction is:%d",a-b);
}else if("c==a*b"){
    printf("the multiplication is:%d",a*b);
}else if(c==a/b){
    printf("the division is:%d",a/b);
}



}