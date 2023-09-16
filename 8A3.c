#include<stdio.h>
void main(){
int a,b,i;
printf("Enter number");
scanf("%d %d",&a,&b);
if(a>b){
    i=b;
}
if(b>a){
    i=a;
}
  while((i>=a && i<=b) ||(i>=b && i<=a)){
    if(i%2==0){
        printf("%d\n",i);
    }
    i=i+1;
}
}