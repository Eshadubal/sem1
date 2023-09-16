#include<stdio.h>
void main (){
int a;
char c;
printf("Enter c");
scanf("%c",&c);
printf("Enter a");
scanf("%d",&a);
if (c=='*'){
    printf("Ans is:%d",a<<1);
}
else if(c=='/'){
      printf("Ans is:%d",a>>1);
}











}