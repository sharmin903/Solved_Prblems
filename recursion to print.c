#include<stdio.h>
void fun(int n, int i){
    if(i>n) return ;
        printf("%d",i);
        fun(n,i+1);
}
int main(){
    int i=1;
    int n;
    printf("Enter the number till it will print:");
    scanf("%d",&n);
    fun(n,i);
    return 0;
}
