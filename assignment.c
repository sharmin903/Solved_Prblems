#include<stdio.h>
int main(){
    int T;
    scanf("%d",&T);
    for(int t=0; t<T; t++){
        int X;
        scanf("%d",&X);
        if(X<1){
            printf("Time cant be negative\n");
            return 0;
        }
        int time ;
        time=10-X;
        if (time>=3){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
