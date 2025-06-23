//
//  main.c
//  7-2
//
//  Created by mac on 2025/4/8.
//

#include <stdio.h>
#include <ctype.h>
int main() {
    char str1[100],str2[100];
    int i,j,k,flag;
    printf("input str1:\n");
    gets(str1);
    k=0;
    i=0;
    while(i<100) {
        if (isdigit(str1[i])) {
            flag=1;
            str2[k++]=str1[i];
            i+=1;
        }
        else{
            for (j=i+1; j<100; j++) {
                if(isdigit(str1[j])) break;
            }
            str2[k++]='*';
            i=j;
        }
    }
    str2[k-1]='\0';
    printf("str2=%s\n",str2);
    return 0;
}
