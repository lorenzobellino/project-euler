#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define lunghezza_num 1000
#define n_fatt 2

void stamp(FILE *g, int n, int v[]){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=lunghezza_num;j>0;j--){
            fprintf(g,"%d",v[j-1]);
            //printf("%d",v[j]);
        }
        fprintf(g,"\n");
        //printf("\n");
    }
}


int main(){
    char str[n_fatt][lunghezza_num];
    int vet[lunghezza_num];
    char buf[lunghezza_num];
    int i,j,k=0,z,counter=2;
    int sum=0, resto=0, riporto =0;

    FILE *g = fopen("cazzo.txt","w+");

    for(z=0;z<lunghezza_num;z++){vet[z]=0;}
    vet[0]=1;
    stamp(g,2,vet);
    stamp(g,2,vet);

    while(vet[lunghezza_num-1]==0){

        counter++;
        fclose(g);
        g=fopen("cazzo.txt","r");

        sum=resto=riporto=k=0;

        for(i=0;i<2;i++){
            fscanf(g,"%s",str[i]);
            //printf("%s\n",str[i]);
        }
        for(i=1;i<=lunghezza_num;i++){
            sum=riporto;
            for(j=0;j<2;j++){
                sum += (str[j][lunghezza_num-i] -'0');
            }

            resto = sum%10;
            riporto = (sum -resto)/10;
            //printf("sum-->%d\tresto-->%d\triporto-->%d\n",sum,resto,riporto);
            vet[k] = resto;
            k++;
        }

        vet[k]=riporto;
        fclose(g);
        g=fopen("cazzo.txt","w+");
        fprintf(g,"%s\n",str[1]);
        stamp(g,2,vet);
    }

    //for(i=lunghezza_num;i>=0;i--){
      //  printf("%d",vet[i]);
    //}
printf("%d",counter);
    fclose(g);

    return 0;
}