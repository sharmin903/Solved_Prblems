#include<stdio.h>
int fact(int n){
    if(n==0||n==1)
    return 1;
    int result= n*fact(n-1);
    return  result;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",fact(n));
    return 0;
}
