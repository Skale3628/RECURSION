#include <stdio.h>
int n;
int factorial(int n){
    if (n<=1){
        return 1;
    }
    return factorial(n-1)*n;
}
void main(){
     int ret=factorial(4);
    printf("The result is %d\n",ret);
}