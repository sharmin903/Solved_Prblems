#include<stdio.h>
int total(int n, int i,int sum){
    if(i>n)return sum;
    sum+=i;
    return total(n,i+1,sum);
}
int main(){
    int n;
    scanf("%d",&n);
    int i=1;
    int sum=0;
    printf("%d", total(n,i,sum));
    return 0;
}
