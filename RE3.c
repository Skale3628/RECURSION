#include<stdio.h>
int sum=0;
void sumN(int N){
    if(N>0){
        sum=sum+N;
        printf("%d",N);
        sumN(--N);

    }
    printf("%d\n",sum);
}
void main(){
    sumN(5);
}