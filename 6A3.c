#include<stdio.h>
void main(){
char temp;
printf("Enter:");
scanf("%c",&temp);
if(temp>='A' && temp<='Z')
{
    printf("The char is upper case ") ;
}
else if(temp>='a' && temp<='z');
{
    printf("The char is lower case");
}
 if(temp>=48 && temp<=57)
{
    printf("The char is digit");
} else {
    printf("The char is special char");
}
}