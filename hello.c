#include<stdio.h>

int fact(int i){
if(i == 0 || i == 1){
return 1;
    }
else{
return (i * fact(i - 1));
    }
}
int main(){
int n = 5;
int result = fact(n);
printf("The factorial of %d is: %d\n", n, result);
return 0;
}
