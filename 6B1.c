#include<stdio.h>
void main(){
float n,bill;
printf("Enter unit");
scanf("%f",&n);
if(n<=50){
    bill=n*0.50;
    printf("bill is:%f",&bill);
}
else if(n<=150){
    bill=50*0.50+(n-50)*0.75;
    printf("The bill is:%f",bill);
    }
else if(n<=250){
    bill=50*0.50+100*0.75+(n-150)*1.20;
    printf("The bill is:%f",bill);
}    
else if(n>250){
    bill=50*0.50+100*0.75*+100*1.20+(n-250)*1.50;
    printf("The bill is:%f",bill);
    }
    printf("The bill is:%f",bill+(20*bill/100));

}