#include <stdio.h>
#include <string.h>

#define maxval 10000

int ispentag(int n, int p[], int left, int right){
    if(left>=right) return 0;
    int mid;
    mid=(left+right)/2;
    if(n==p[mid]) return 1;
    if(n<p[mid]){return ispentag(n,p,left,mid);}
    else return ispentag(n,p,mid+1,right);
}

int main(void){
    int pentag[maxval];
    int i,j,k,sum,sub,mid=maxval/2;
    for(i=0;i<maxval;i++){
        pentag[i]= (i*((3*i)-1))/2;
    }

    for(i=1;i<maxval-1;i++){
        for(j=i+1;j<maxval;j++){
            sum=pentag[i]+pentag[j];
            if(ispentag(sum,pentag,0,maxval)){
                sub=pentag[j]-pentag[i];
                if(ispentag(sub,pentag,0,maxval)){
                    printf("%d - %d = %d\n",pentag[i],pentag[j], pentag[j]-pentag[i]);
                }
            }

        }
    }
    return 0;
}