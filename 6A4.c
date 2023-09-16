#include<stdio.h>
void main(){
int a,b;

printf("Enter a:");
scanf("%d",&a);
b=a%10;
if(b%2==0){
    printf("The last digit is even");
}
else{
    printf("The last digit is odd");
}
}