#include<stdio.h>
void main(){
    int a,b,c;
printf("enter 3 numbers:");
scanf("%d %d %d",&a,&b,&c);
if ((a>b && b>c) || (b>a && c>b) ){
    printf("b is second largest");
}
else if ((b>a && a>c) || (a>b && c>a)){
    printf("a is second largest");
}
else if((a>c && c>b) || (c>a && b>c)){
    printf("c is second largest");
}

}