//
//  main.c
//  ex5-1
//
//  Created by mac on 2025/4/1.
//

#include <stdio.h>

int main() {
    int m,sum,mmm;
    int i,j,k;
    printf("please input:\n");
    if(scanf("%d",&m)!=1){
        printf("the input is error\n");
        return 0;
    }
   
    for(i=1;i<=m;i++){
        mmm=i*i*i;
        for (j=1; j<=mmm; j+=2) {
            sum=0;
            for(k=j;k<=j+2*i-2;k+=2){
                sum+=k;
            }
            if(sum==mmm){
                printf("%d^3=%d",i,j);
                for(k=j+2;k<=j+2*i-2;k+=2)
                    printf("+%d",k);
                printf("\n");
                break;
            }
        }
    }

    return 0;
}
