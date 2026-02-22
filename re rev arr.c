#include<stdio.h>
void fun(int n,int i,int arr[100]){
    if (i>=n)return;
    arr[i];
    fun(n,i+1,arr);
    printf("%d",arr[i]);
}
int main(){
    int i=0;
    int n;
    int arr[100];
    scanf("%d",&n);
    for(i;i<n;i++){
        scanf("%d",& arr[i]);
    }
    fun(n,0,arr);
    return 0;
}
