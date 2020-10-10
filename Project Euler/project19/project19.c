#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    int months[12] = { 31 , 28 , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 31 };
    int year=1901;
    int dayoftheweek=2;  
    int sunday=0;
    int firstsundays=0;

    while(year<=2000){
        if(year%4==0)    
            months[1]=29;

        for (int i = 0; i < 12; ++i) {
            for (int d = 1; d <= months[i]; d++){
                if(dayoftheweek==7) 
                    dayoftheweek=0;

                if(dayoftheweek==sunday && d==1)
                    firstsundays++;

                dayoftheweek++;
            }
        }

        months[1]=28;
        year++;
    }

    printf("%d\n", firstsundays);

    return 0;
}