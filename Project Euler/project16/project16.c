#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define DIME 100000
int main(){
int vet[DIME];
int i,s=0,k=0,z,riporto=0, prod,resto,dim=1;
for(i=0;i<DIME;i++){ vet[i]=0;}
vet[0]=1;
for(i=0;i<DIME;i++){

//for(z=k;z>=0;z--){printf("%d ",vet[z]);}
//printf("\n");
k=0;
riporto = resto=0;
while(k<dim){
prod=riporto+(vet[k]*2);
resto=prod%10;
riporto=prod/10;
vet[k]=resto;
k++;
}
if(riporto>0) {dim++;}
vet[k]=riporto;

}
//vet[k]=riporto;
for(z=dim;z>=0;z--){printf("%d ",vet[z]);}
for(z=dim;z>=0;z--){s+=vet[z];}
printf("\nsomma-->%d\n",s);
return 0;
}