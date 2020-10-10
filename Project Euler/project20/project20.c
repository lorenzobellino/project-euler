#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define lunghezza_num 300
#define n_fatt 100

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
    int i,j,k=0,z;
    int sum=0, resto=0, riporto =0;

    FILE *g = fopen("cazzo.txt","w+");

    for(z=0;z<lunghezza_num;z++){vet[z]=0;}
    vet[1]=1;

    for(z=n_fatt;z>1;z--){
        stamp(g,z,vet);

        fclose(g);
        g=fopen("cazzo.txt","r");

        sum=resto=riporto=k=0;

        for(i=0;i<z-1;i++){
            fscanf(g,"%s",str[i]);
            printf("%s\n",str[i]);
        }
        for(i=1;i<=lunghezza_num;i++){
            sum=riporto;
            for(j=0;j<z-1;j++){
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
    }

    for(i=k;i>=0;i--){
        fprintf(g,"%d",vet[i]);
    }

    fclose(g);
    g=fopen("cazzo.txt","r");
    fscanf(g,"%s",buf);
    sum=0;
    for(i=0;i<lunghezza_num;i++){
        sum+=(buf[i]-'0');
    }
    printf("\n\n\n sum --> %d\n",sum);
    return 0;
}