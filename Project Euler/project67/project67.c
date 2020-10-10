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
    for(i=0;i<100;i++){
        for(j=0;j<=i;j++){
            printf("%d ",pq[c++]);
        }
        printf("\n");
    }
}

int main(){
   int pq[5050];
   FILE *f = fopen("p067_triangle.txt","r");
   int i,m=5050,k=0;

    while(!feof(f)){
        fscanf(f,"%d",&pq[k++]);
    }
    stampa(pq);
    for(k=100;k>0;k--){
        for(i=m-1;i>m-k;i--){
            pq[i-k] += mas(pq[i],pq[i-1]);
        }
        //stampa(pq);
        m=i;
    }

    printf("%d",pq[0]);
    return 0;
}


