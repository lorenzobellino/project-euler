#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define max 899



int main(){
int SUMSQUARE=0, SQUARESUM=0;
int i,j,k;

for(i=1;i<=100;i++){
SUMSQUARE += (i*i);
}
for(i=1;i<=100;i++){
SQUARESUM +=i;
}
SQUARESUM = SQUARESUM * SQUARESUM;

printf("%d -- %d --> %d",SQUARESUM, SUMSQUARE, SQUARESUM-SUMSQUARE);

return 0;
}
