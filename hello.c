#include<stdio.h>

int fact(){
if(i == 0 && i == 1){
return 1;\}
else{
return i * fact(i - 1);
}
}


int main(){
int i = 5;
int result = fact(i);
printf("The factorial of %d is: %d\n", i, result);
return 0;
}
