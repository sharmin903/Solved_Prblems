#include<stdio.h>
int main(){
    int T;
    scanf("%d",&T);
    for(int t=0; t<T;t++){
            int N;
    scanf("%d",&N);
    int i;
    int A[100000];

    for(i=0;i<N;i++){
        scanf("%d",&A[i]);
    }
    for(i=0;i<N-1;i++){
        for(int j=0;j<N-i-1;j++){
            if(A[j]>A[j+1]){
                int temp= A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
    int first_max=A[N-1];
    int second_max;
    for(i=N-2;i>=0;i++){
        if(A[i]!=first_max){
            second_max=A[N-2];
            break;
        }
    }
    int max_sum;
    max_sum=first_max+second_max;
    printf("%d\n",max_sum);

    }
    return 0;
}
