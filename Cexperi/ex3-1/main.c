//
//  main.c
//  ex3-1
//
//  Created by mac on 2025/3/18.
//
#include "ctype.h"
#include "stdio.h"
int main(){
    int a;
    int n1,n2,n3,n4,n5;
    int flag=0;
    printf("input:");
    scanf("%d",&a);
    if(-99999>=a || 99999<=a){
        printf("the data is error!\n");
        return 0;
    }
    else{
        n1=a/10000;
        n2=a/1000%10;
        n3=a/100%10;
        n4=a/10%10;
        n5=a%10;
        if(n1==n5 && n2==n4){
            flag=1;
        }
        else flag=0;
        printf("%s\n",flag?"YES":"NO");
        
    }
    return 0;
}
