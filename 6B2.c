#include<stdio.h>
#include<math.h>
void main(){
int a,b,c,d;
printf("Enter:");
scanf("%d %d %d",&a,&b,&c);
d=b*b-4*a*c;
if(d>0){
    printf("root 1 is:%d",(-b+sqrt(d))/2*a);
    printf("root 2 is:%d",(-b-sqrt(d))/2*a);
}
else if(d==0){
    printf("The root is:%d",(-b/2*a));
}
else if(d<0){
    printf("Roots are imaginary");
}









}