//
//  main.c
//  ex3-2
//
//  Created by mac on 2025/3/18.
//

#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    char a[6];
    int flag=1;
    int i,len;
    printf("input:\n");
    scanf("%5s",&a);
    for (i=0;i<5;i++){
        if(!isdigit(a[i])){
            if((a[i]<='f' && a[i]>='a') || (a[i]<='F' && a[i]>='A')){
                flag=1;
            }
            else {
                printf("the data is error!");
            }
        }
    }
    len = strlen(a);
    if (len!=5){
        printf("the data id error!");
        return 0;
    }
    for (i=0;i<3;i++){
        if(a[i]!=a[len-1-i]){
            flag=0;
            break;
        }
    }
    printf("%s",flag==1?"YES":"NO");
    return 0;
}

