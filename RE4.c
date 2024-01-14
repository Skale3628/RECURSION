//tail and non-tail recursion 

#include<stdio.h>

int tailDemo(int x){
    if (x==1){
        return 1;
    }
    //return tailDemo(--x);           //tail recursion
    return 3+tailDemo(--x);             //non-tail recursion
}
void main(){
    int ret=tailDemo(4);
    printf("The result is %d\n",ret);
}