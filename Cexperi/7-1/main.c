//
//  main.c
//  7-1
//
//  Created by mac on 2025/4/8.
//

#include <stdio.h>
#include <string.h>
int main() {
    char str[70],s[70],fliter[70];
    int i,j,k,flag;
    printf("input str:\n");
    gets(str);
    printf("input s:\n");
    gets(s);
    k=0;
    for (i=0; i<70; i++) {
        flag=1;
        for (j=0; j<70; j++) {
            if (str[i]==s[j]) {
                flag=0;
            }
        }
        if (flag) {
            fliter[k++]=str[i];
        }
    }
    fliter[k-1]='\0';
    printf("fliter=%s\n",fliter);

    return 0;
}
