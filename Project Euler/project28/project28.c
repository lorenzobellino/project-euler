#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define R 1001
#define C 1001

int main(){

    int i;
    long long int k=R*C;
    int z=R-1;
    long long int sum=k;

    while(k>1){
        for(i=0;i<4;i++){
            k-=z;
            sum+=k;
        }
        z-=2;
    }
    printf("%lld",sum);
    return 0;
}