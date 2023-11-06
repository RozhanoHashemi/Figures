#include <stdio.h>
#include <stdlib.h>





int main (){
    int num,maxLen = 0,count;
    int temp , maxNumber ;

    scanf("%d",&count);

    for (int i = 0; i < count; i++)
    {
        scanf("%d",&num);
        temp = num;
        int len = 0;
        for(int j=0 ; num >= 10; j++){
            num = num / 10;
            len ++;
            if(num < 10) len++;
        }
        if(len > maxLen){
            maxLen = len;
            maxNumber = temp;
        }
    }
    printf("%d", maxNumber);







    return 0;
}
