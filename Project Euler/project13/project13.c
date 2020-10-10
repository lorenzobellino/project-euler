#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>




int main(){
char str[100][55];
char buf[55];
int vet[100];
int i,j,k=0;;
int sum=0, resto=0, riporto =0;
FILE *f = fopen("num.txt","r");

for(i=0;i<100;i++){
fscanf(f,"%s",str[i]);

}
fclose(f);
for(i=1;i<=50;i++){
sum=riporto;
for(j=0;j<100;j++){
sum += (str[j][50-i] -'0');
}

resto = sum%10;
riporto = (sum -resto)/10;
printf("sum-->%d\tresto-->%d\triporto-->%d\n",sum,resto,riporto);
vet[k] = resto;
k++;
}

vet[k]=riporto;

for(i=k;i>=0;i--){
printf("%d",vet[i]);
}


return 0;
}