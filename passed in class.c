#include<stdio.h>
int main (){
    int T;
    scanf("%d",&T);
    for(int t=0;t<T;t++){
        int X,Y,Z;
        scanf("%d %d %d",&X,&Y,&Z);
        int total;
        total = X*Y;
        float percentage ;
        percentage=((float)Z/total)*100;
        if (percentage>50){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}
