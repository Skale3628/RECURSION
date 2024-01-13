#include<stdio.h>

int x=5;
void fun(int x){
    printf("hello");
    if (x!=1){
        fun(--x);
        printf("bye");            //hellohellohellohellohellobyebyebyebye              
    }
   // printf("bye");                //hellohellohellohellohellobyebyebyebyebye
}
void main(){
    fun(5);
}