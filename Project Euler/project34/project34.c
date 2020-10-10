#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define mpot 7

int fatt(int a){
    if(a <=1) return 1;
    return a * fatt(a-1);
}

int pot(int a, int b){
    int k=1,i;
    for(i=0;i<b;i++){
        k*=a;
    }
    return k;
}


int main(){

   int n,j,k=0,tmp=10,fact[mpot],sum=0,tot=0;
   long int i;
   char buff[mpot];
   int fattoriali[10];
   for(i=0;i<10;i++){
       fattoriali[i]=fatt(i);
   }

   for(k=2;k<=mpot;k++){
       for(i=tmp;i<pot(10,k);i++){
            itoa(i,buff,10);
            //printf("%s\n",buff);
            for(j=0;j<k;j++){
                fact[j]=fattoriali[buff[j]-'0'];
                sum+=fact[j];
            }
            if(sum==i){for(n=0;n<k;n++){printf("%d ",fact[n]);}printf("-->%d\n",i);tot+=sum;}
            sum=0;

       }
       tmp=i;
   }

   printf("sum --> %d\n",tot);
    return 0;
}


