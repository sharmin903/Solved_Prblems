#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i;
    int arr[100];
    for(i=0;i<n;i++){
            scanf("%d",&arr[i]);


    }
    int j=0;
    int max;
    max=0;
    for(i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
            j=i;
        }
    }
    int max2;
    max2=0;
    for(i=0;i<n;i++){
        if(i==j){
            i++;
            i--;
        }
        else{
            if(max2<arr[i]){
                max2=arr[i];
            }
        }
    }
    printf("The Second largest element in the array is :  %d \n\n", max2);
    return 0;

}
