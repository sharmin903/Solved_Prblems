#include<stdio.h>
int main(){
    int T;
    scanf("%d",&T);
    for(int t=0; t<T;t++){
        int N;
        scanf("%d",&N);
        int i;
        int A[10000];
        for(i=0;i<N;i++){
            scanf("%d",&A[i]);
        }
        int max= A[0];
        int min;
        for(i=0;i<N;i++){
            if(max<A[i]){
                max=A[i];
            }
        }
        min=max;
        printf("%d",min);
    }

}
