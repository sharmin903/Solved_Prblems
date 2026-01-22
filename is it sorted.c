#include<stdio.h>
int main (){
 int T;
 scanf("%d",&T);
 for(int t=0;t<T;t++){

 int n;
 scanf("%d",&n);
 int i;
 int arr[100];
 for(i=0;i<n;i++)
 {
     scanf("%d",&arr[i]);
 }
 for(i=0;i<n-1;i++){

        if(arr[i]>arr[i+1]){
            printf("No\n");
            goto next_test;

        }
 }
 printf("Yes\n");
 next_test:;

 }

 return 0;
}
