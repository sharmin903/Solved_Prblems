#include<stdio.h>
#include <stdlib.h>
int Imp(int N){
    int By2 = (N%2==0);
    int By5 =(N%5==0);
    return (By2 || By5) && !(By2 && By5);
}
int main()
{
    int T;
    scanf("%d",&T);

    while(T--){
        int N;
        scanf("%d",&N);

        if(Imp(N)){
            printf("0\n");
            continue;
        }
        int ans=0;
        for(int d=1;d<=200;d++){
                if(Imp(N-d)|| Imp(N+d)){
            ans = d;
            break;
            }
        }
        printf("%d \n",ans);
    }
    return 0;

}
