#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int X;
    scanf("%d",&X);
    int Y;
    scanf("%d",&Y);
    if(N>=2*X && N>=2*Y){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
