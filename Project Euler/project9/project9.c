#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define R 1000
#define C 120



int main(){

int i,j,k;

for(i=1;i<997;i++){
for(j=1;j<997;j++){
for(k=1;k<997;k++){
if(i!=j && j!=k){
if(((i*i)+(j*j)==(k*k)) || ((i*i)+(k*k)==(j*j)) || ((j*j)+(k*k)==(i*i))){
if(i+j+k == 1000) printf("i --> %d\nj --> %d\nk --> %d\nprod --> %d\n",i,j,k,(i*j*k));
}
}
}
}
}

return 0;
}
