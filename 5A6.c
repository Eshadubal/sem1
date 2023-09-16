#include<stdio.h>
void main(){
char m;
printf("Enter alphabet:");
scanf("%c",&m);
if(m=='a'||m=='e'||m=='i'||m=='o'||m=='u'){
    printf("The alphabet is vowel");
}
else{
    printf("The alphabet is consonent");
}
}