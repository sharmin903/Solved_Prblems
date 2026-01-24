#include<stdio.h>
int main(){
    int T;
    scanf("%d",&T);
    for(int t=0;t<T;t++){
        int N,X;
        scanf("%d %d",&N,&X);
        int i;
        int A[100000];
        for(i=0;i<N;i++){
            scanf("%d",&A[i]);
        }
        int B[10000];
        for(i=0;i<N;i++){
            scanf("%d",&B[i]);
        }
        int total_cost=0;
        for(i=0;i<N;i++){
            if(A[i]>=X){
                total_cost +=B[i];
            }
        }
        printf("%d\n",total_cost);
    }
    return 0;
}
