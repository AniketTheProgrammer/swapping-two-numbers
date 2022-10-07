#include<stdio.h>

void swap(int *p , int *q){
    int temp;
    temp = *q;
    *q = *p;
    *p = temp;
}

int main(){
    printf("Swapping of two numbers\n");
    int a = 10;
    int b = 20;
    printf("Before swap\n");
    printf("a = %d    b = %d\n" , a,b);
    swap(&a , &b);
    printf("After swap\n");
    printf("a = %d    b = %d" , a,b);

}