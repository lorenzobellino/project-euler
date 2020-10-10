#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){

    FILE *f;
    FILE *g;
    int i,j;
    char str[5163][12];
    char buffer[12];
    int vet[5163];
    int k=0;
    long int sum =0,resto=0, riporto =0;
    int res=0,count=1;
    char buf[12];
/*
    f=fopen("nnn.txt","r");
    g=fopen("sorted.txt","w+");

    for(i=0;i<5163;i++){
        fscanf(f,"%s",str[i]);
    }
    fclose(f);
    for(i=0;i<5163;i++){
        for(j=0;j<5162;j++){
            if(strcmp(str[j],str[j+1])>0){
                strcpy(buffer,str[j]);
                strcpy(str[j],str[j+1]);
                strcpy(str[j+1],buffer);
            }
        }
    }
    for(i=0;i<5163;i++){
        fprintf(g,"%s\n",str[i]);
    }
    fclose(g);
    */


    f = fopen("res.txt","r");

    for(i=0;i<5163;i++){
        fscanf(f,"%s",str[i]);

    }
    fclose(f);

    for(i=2;i<=11;i++){
        sum=riporto;
        for(j=0;j<5163;j++){
            printf("%d-",str[j][11-i]-'0');
            sum += (str[j][11-i]-'0');
        }

        resto = sum%10;
        riporto = (sum -resto)/10;
        printf("\nsum-->%d\tresto-->%d\triporto-->%d\n",sum,resto,riporto);
        vet[k] = resto;
        k++;

    }

    vet[k]=riporto;

    for(i=k;i>=0;i--){
        printf("%d",vet[i]);
    }


    /* f=fopen("nomi.txt","r");
     g=fopen("nnn.txt","w+");
//devi cancellare l'ultimo carattere che stampi
     while(!feof(f)){
         l=fgetc(f);
         printf("%c  ",l);
         if(l!='"'){
             if(l==','){fprintf(g,"%c",'\n');}
             else fprintf(g,"%c",l);
         }

     }
     fclose(g);
     fclose(f);
     */
/*
    f = fopen("sorted.txt","r");
    g=fopen("res.txt","w+");
    while(fscanf(f,"%s\n",buf)!=EOF){
        for(i=0;i<strlen(buf);i++){
            sum+=(buf[i]-'@');
        }
        res=count*sum;
        fprintf(g,"%010d\n",res);
        count++;
        sum=0;
    }

    fclose(g);
    fclose(f);
*/
    /*
    f=fopen("res.txt","r");

    while(fscanf(f,"%d\n",&sum)!=EOF){
    printf("%d\n",sum);
        tot+=sum;
    }

printf("%f",tot);
 */

    return 0;
}


