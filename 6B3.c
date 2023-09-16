#include<stdio.h>
void main(){
int a,b,c;
printf("Enter 3 sides:");
scanf("%d %d %d",&a,&b,&c);
if (a==b && b==c && c==a){
    printf("The triangle is equilateral triangle");
}
else if(a==b && b==c && c==a){
    printf("The triangle is isoseceless triangle");
}
else if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b){
printf("The triangle is right angled triangle");
}
else if(a!=b && b!=c && c!=a){
    printf("The triangle is scalen triangle");
}
}
