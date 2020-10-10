#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define max 10001

int divisors(int i);

int main(){

    int amic[max];
    int i,tot=0,k;
    for(i=1;i<max;i++){

        amic[i]= divisors(i);
    }
    amic[0]=-1;

    for(i=1;i<max;i++){
        if(amic[i]<max){
            if(i==amic[amic[i]]){
                if(i!=amic[i]){
                    tot+=i;
                }
            }
        }

    }
    printf("tot %d\n",tot);
    return 0;
}

int divisors(int n){
    int i,sum=0;
    for(i=1;i<=n/2;i++){
        if(n%i == 0) sum+=i;
    }
    return sum;
}