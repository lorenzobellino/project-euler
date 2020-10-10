#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define max 899
/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/
int ispal(char str[]){
int i;
for(i=0;i<strlen(str);i++){
if(str[i] != str[strlen(str)-1-i]) return 0;
}
return 1;
}

int main(){

int N1=999, N2=999, PROD, PRODMAX=0;
int i,j,k;
char str[10];
for(i=0;i<max;i++){
for(j=0;j<max;j++){
PROD = (N1-i)*(N2-j);
if(ispal(itoa(PROD,str,10))){printf("%d X %d --> %d\n",N1-i,N2-j,PROD);if(PROD>PRODMAX)PRODMAX=PROD;}
}
}
printf("MAXPROD --> %d\n",PRODMAX);
return 0;
}
