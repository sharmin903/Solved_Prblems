#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i;
    int arr[n+1];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int element,pos;

    scanf("%d %d",&element,&pos);
    if(pos<1||pos>n+1){
        printf("Position Invalid! position should be between 1 and %d\n", n+1);
        return 0;
    }
    for(i=n;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=element;
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

