#include<stdio.h>
int main(){
    int T;
    scanf("%d",&T);
    for(int t=0; t<T;t++){
     int A,B,C;
    scanf("%d %d %d",&A, &B, &C);
    float avg;
    avg = (A+B)/2.0;
    if (avg>C){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    }
    return 0;
}
