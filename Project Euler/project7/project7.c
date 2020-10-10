#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define R 1000
#define C 120



int main(){
//int mat[R][C];

int vet[R*C];
int i,j,k=3,x,y, num,count=1;

for(i=0;i<R*C;i++){
vet[i]=i;
}
vet[1]=0;

for(i=0;i<(R*C)/2;i++){

if(vet[i]!=0){
num=vet[i];;
j=vet[i]+vet[i];
while(j<R*C){
vet[j] = 0;
j+=num;
}
}
}

/*
for(i=0;i<R;i++){
for(j=0;j<C;j++){
mat[i][j] = k;
k+=2;
}
}
*/
/*

i=j=0;
while(i<R/2 && j<C/2){
if(mat[i][j]!=0){
x=i;
y=j;
while(x<R && y<C){
num=mat[x][y];
mat[x][y]=0;
y= y+ num%C;
x = x + num%R;
}
}
j++;
if(j>=C){
j=0;
i++;
}
}
*/


for(i=0;i<R*C;i++){
if(vet[i]){ printf("%d --> %d\n",count,vet[i]); count++;}
}

return 0;
}
