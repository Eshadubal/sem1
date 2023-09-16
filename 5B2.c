#include<stdio.h>
void main(){
int a;
printf("Enter a");
scanf("%d,&a");
if(a&1==0){
    printf("The number is odd");
}
else{
printf("The number is even");
}
}