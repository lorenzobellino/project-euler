#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

static int len;

int collaz(long long int n){

if(n==1) return len+1;
if(n%2==0) len = collaz(n/2);
else len = collaz((3*n)+1);
return len+1;
}

int collaz2(long long int n){
printf("%d\n",n);
if(n==1) return len+1;
if(n%2==0) len = collaz2(n/2);
else len = collaz2((3*n)+1);
return len+1;
}

int main(){

int longestChain=0,l=0, startingNumber=0;
long long int i;
for(i=50;i<1000000;i++){
l=collaz(i);
len=0;
if(l>longestChain){ longestChain=l; startingNumber=i;}
}

printf("starding number --> %d\t lenght --> %d\n", startingNumber, longestChain);
len=0;
l = collaz2(startingNumber);
return 0;
}