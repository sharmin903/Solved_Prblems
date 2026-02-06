#include<stdio.h>
int main(){
    int T;
    scanf("%d",&T);
    for(int t=0;t<T;t++){
        int N;
        scanf("%d",&N);
        int group;
        group= (N+(6-1))/6;
        int X;
        scanf("%d",&X);
        int subscription;
        subscription=group*X;
        printf("%d\n",subscription);
    }
    return 0;
}
