#include<stdio.h>
void fun(int n, int i ,int arr[100]){
    if (i>=n)return;
    arr[i];
    printf("%d ",arr[i]);
    fun(n,i+1,arr);

}
int main(){
    int arr[100];
    int i=0;
    int n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    fun( n, 0 , arr);
    return 0;

}
