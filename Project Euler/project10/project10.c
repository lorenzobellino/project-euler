#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define R 1000
#define C 120

int isprime(int n){
int j;
for(j=2;j<n/2;j++){
if(n%j==0) return 0;
}
return 1;
}


int main(){

long long int i;
unsigned long long int TOT=0;

for(i=2000000;i>1;i--){
//printf("%d --> ",i);
if(isprime(i)){
//printf("SI'\n");
//printf("%d\n",i);
TOT += i;
if(TOT<0){printf("TOT %d \n",TOT); return 0;}
}
//else printf("NO\n");
}
printf("TOT --> %d\n",TOT);
return 0;
}

/*
def sumPrimes(n):
    sum, sieve = 0, [True] * n
    for p in range(2, n):
        if sieve[p]:
            sum += p
            for i in range(p*p, n, p):
                sieve[i] = False
    return sum

print sumPrimes(2000000)
*/