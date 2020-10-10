#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

static int tot;

int conta(int s, int p, int v[], int k){
    int i;
    if(s>200) return p;
    if(s==200){
        tot++;
        return p+1;
    }
    for(i=k;i<8;i++){
        p = conta(s+v[i], p, v, i);
    }
    return p;
}


int main(){

   int v[8] = {1,2,5,10,20,50,100,200};
   int numero=0;
   int s=0;

   numero = conta(s,0,v,0);

   printf("num --> %d tot --> %d\n",numero, tot);
    return 0;
}


