#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>




int mas(int a, int b){
    if(a>b) return a;
    return b;
}

void stampa(int pq[]){
    int i,j,c=0;
    for(i=0;i<15;i++){
        for(j=0;j<=i;j++){
            printf("%d ",pq[c++]);
        }
        printf("\n");
    }
}

int main(){
   int pq[120];
   FILE *f = fopen("numb.txt","r");
   int i,m=120,k;
    while(!feof(f)){
        fscanf(f,"%d",&pq[k++]);
    }
    stampa(pq);
    for(k=15;k>0;k--){
        for(i=m-1;i>m-k;i--){
            pq[i-k] += mas(pq[i],pq[i-1]);
        }
        stampa(pq);
        m=i;
    }

    printf("%d",pq[0]);
    return 0;
}


