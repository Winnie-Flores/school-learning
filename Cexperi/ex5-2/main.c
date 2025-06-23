//
//  main.c
//  ex5-2
//
//  Created by mac on 2025/4/2.
//

#include <stdio.h>

int main() {
    int x,a,b,c,sum;
    int i;
    for(i=1;i<1000;i++){
        x=i;
        a=x/100;
        b=x/10%10;
        c=x%10;
        sum=a*a*a+b*b*b+c*c*c;
        if(sum==x){
            printf("%d\n",x);
        }
    }
    return 0;
}
