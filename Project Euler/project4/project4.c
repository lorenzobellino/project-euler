#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

/*
A palindromic number reads the same both ways. The largest palindrome made from
the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/
#define max 899

int main(){
int NUM=1;
int val[10] = {20,19,18,17,16,15,14,13,12,11};
int i,j,k,find=0;
while(!find){
	for(i=0;i<10;i++){
	if(NUM%val[i]!=0) break;
}
if(i==10){ find=1; printf("%d\n",NUM);}
NUM++;
}
return 0;
}
/*
20 -> 10 ,2 , 5, 4,
19
18 -> 9, 6, 2,
17
16 -> 8, 4,
15 -> 5, 3,
14 -> 7,
13
12 -> 6 4 3
11
*/
