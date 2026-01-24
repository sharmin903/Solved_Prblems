#include<stdio.h>
int main(){
    int T;
    scanf("%d",&T);
    for(int t=0;t<T;t++){
    int N;
    scanf("%d",&N);
    int i;
    int A[100000];
    for(i=0;i<N;i++){
        scanf("%d",&A[i]);
    }
    int B[100000];
    for(i=0;i<N;i++){
        scanf("%d",&B[i]);
    }
    int count=0;
    for(i=0;i<N;i++){
        if(B[i]<=2*A[i] && A[i]<=2*B[i]){
            count++;
        }
    }

    printf("%d\n",count);

    }
    return 0;
}
