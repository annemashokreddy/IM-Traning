#include<stdio.h>  
int main(){    
int number=0;     
printf("enter a number:");    
scanf("%d",&number);    
switch(number){    
case 10:    
printf("number is equals to 10");    
break;    
case 50:    
printf("number is equal to 25");    
break;    
case 100:    
printf("number is equal to 10");    
break;    
default:    
printf("number is not equal to 10, 25 or 10");    
}    
return 0;  
}    
