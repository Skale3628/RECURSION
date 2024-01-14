#include<stdio.h>

int fun(int n){
    printf("%d",n);
    if (n<=1){
        return 1;
    }
   
   /* int x=fun(n-1);
    int y=fun(n-2);
    printf("%d",x);
    printf("%d",y);
    */
   return fun(n-1)+fun(n-2);
}
void main(){
    int x,y;
    int ret=fun(3);
}

