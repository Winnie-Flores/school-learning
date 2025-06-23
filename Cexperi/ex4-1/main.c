//
//  main.c
//  ex4-1
//
//  Created by mac on 2025/4/2.
//

#include <stdio.h>
int main() {
    // insert code here...
    int x,a,b,c,d,t;
    int rev,max,min;
    printf("input:\n");
    scanf("%d",&x);
    if(x>=10000 || x<=0){
        printf("the data is error!\n");
    }
    else{
    a=x/1000;
    b=x/100%10;
    c=x/10%10;
    d=x%10;
    rev=d*1000+c*100+b*10+a;
    printf("the reversed is %d",rev);
    
    if(a>b){
        t=a;
        a=b;
        b=t;
    }
    if (a>c) {
        t=a;
        a=c;
        c=t;
    }
    if(a>d){
        t=a;
        a=d;
        d=t;
    }
    if(b>c){
        t=b;
        b=c;
        c=t;
    }
    if(b>d){
        t=b;
        b=d;
        d=t;
    }
    if(c>d){
        t=c;
        c=d;
        d=t;
    }
    max=d*1000+c*100+b*10+a;
    min=a*1000+b*100+c*10+d;
    printf("max=%d\n min=%d\n",max,min);
        return 0;
        
    }
}
