#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int pot(long int a, long int b){
    //printf("a : %d\tb : %d\n",a,b);
    int i,po=a;
    for(i=0;i<b-1;i++){
        a=a*po;
    }
    //printf("potenza = %d\t dovrebbe essere : %d\n",a,a*a*a*a*a);
    return a;
}

int main(){

    int i,j,k,count =0;
    long int sum=0,tots=0;
    char buf[10];
    for(i=1000;i<10000000;i++){
       itoa(i,buf,10);
        //printf("[%s]:\n",buf);
        for(j=0;j<strlen(buf);j++){
            sum += pot(buf[j]-'0',5);
            //printf("%d\n",sum);
        }
        if(sum == i){ count++; printf("i --> %d\n",i);tots+=i;}
        sum=0;
    }
    printf("count --> %d\ntots --> %d\n",count,tots);
    return 0;
}


