#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int trova(int vet[], int dim, int *posizione){
    int i,j,p=0, bestp=0;
    for(i=0;i<=dim-4;i++){
        p= vet[i]*vet[i+1]*vet[i+2]*vet[i+3];
        if(p>bestp){ bestp = p; printf("%d %d %d %d\n",vet[i],vet[i+1],vet[i+2],vet[i+3]);}
    }
    return bestp;
}

int main(){

   FILE *f = fopen("nnn.txt","r");
   int mat[20][20];
   int vet[20];
   int dimvet=4,z=0,pos=0;
   int i,j,k,prod,maxprod=0;
   int vertprod, orizprod,diag1prod,diag2prod;
   for(i=0;i<20;i++){
       for(j=0;j<20;j++){
           fscanf(f,"%d",&mat[i][j]);
       }
   }
fclose(f);
   /* for(i=0;i<20;i++){
        for(j=0;j<20;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    */
   for(i=0;i<20;i++){
       for(j=0;j<16;j++){
           prod = mat[i][j]*mat[i][j+1]*mat[i][j+2]*mat[i][j+3];
           if(prod>maxprod) {maxprod=prod;printf("%d %d %d %d\n",mat[i][j],mat[i][j+1],mat[i][j+2],mat[i][j+3]);}
       }
   }
   orizprod=maxprod;
   printf("orizontal--> %d\n",orizprod);
    maxprod=0;
    for(j=0;j<20;j++){
        for(i=0;i<16;i++){
            prod = mat[i][j]*mat[i+1][j]*mat[i+2][j]*mat[i+3][j];
            if(prod>maxprod) {maxprod=prod; printf("%d %d %d %d\n",mat[i][j],mat[i+1][j],mat[i+2][j],mat[i+3][j]);}
        }
    }
    vertprod=maxprod;
    printf("vertical--> %d\n",vertprod);
    maxprod=0;
    for(i=3;i<20;i++){
        j=0;
        k=i;
        z=0;
        while(k>=0 && j<20){
            vet[z]=mat[k][j];
            k--;
            j++;
            z++;
        }
        prod = trova(vet,dimvet, &pos);
        if(prod>maxprod) {maxprod=prod;}
        dimvet++;
    }
    diag1prod = maxprod;
    maxprod=0;
    printf("v->%d o->%d d1->%d\n",orizprod,vertprod,diag1prod);
    //la sol migliore e questa diagonale
    return 0;
}


