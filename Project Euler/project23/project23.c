#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define max 30000

int divisors(int i);
void stamp(int v[], int n);


int main(){

    int amic[max];
    int abundant[max];
    int res[max];
    int i,j,z,k=0;
    long long int tot=0;
    FILE *g=fopen("cazzo.txt","w+");
    for(i=1;i<max;i++){
        res[i]=0;
        amic[i]= divisors(i);
    }
    amic[0]=-1;
    res[0]=0;
    //printf("amic\n");
    //stamp(amic,max);
    //printf("res\n");
    //stamp(res,max);

    for(i=0;i<max;i++){
        if(amic[i]>i){
            abundant[k++]=i;
        }
    }
    //printf("abundant\n");
    //stamp(abundant,k);
    for(i=0;i<k;i++){
        fprintf(g,"%d\n",abundant[i]);
    }
    fclose(g);
    for(i=0;i<k;i++){
        for(j=i;j<k;j++){
            //printf("%d+%d = %d\n",abundant[i],abundant[j],abundant[i]+abundant[j]);
            z= abundant[i]+abundant[j];
            if(z<max){
                res[z]=1;
            }
            //stamp(abundant,k);
        }
    }
    /*printf("\nrisultati:\n");
    for(i=0;i<max;i++){
        printf("%d-->%d\n",i,res[i]);
    }*/
    for(i=0;i<max;i++){
        if(res[i]==0) tot+=i;
    }
    printf("%lld",tot);
    return 0;
}

int divisors(int n){
    int i,sum=0;
    for(i=1;i<=n/2;i++){
        if(n%i == 0) sum+=i;
    }
    return sum;
}

void stamp(int v[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",v[i]);
    }
    printf("\n");
}
