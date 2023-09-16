#include<stdio.h>
void main(){
char c;
printf("Enter any alphabet:");
scanf("%c",&c);
(c=='a'|| c=='e' || c=='i' || c=='o' || c=='u')?(printf("The alphabet is vowel")):(printf("The alphabet is consonent"));
}