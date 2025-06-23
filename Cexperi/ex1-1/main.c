//
//  main.c
//  ex1-1
//
//  Created by mac on 2025/3/18.
//

#include <stdio.h>

int main() {
    long int a;
    int high,low;
    printf("1-1 input:\n");
    scanf("%ld",&a);
    high=(a>>16)&0xffff;
    low=a&0xffff;

    printf("the input num is %lx\n",a);
    printf("the high16 is %x,the low16 is %x\n",high,low);
    printf("the high16 is %s,the low16 is %s\n",high%2==0?"偶数":"奇数",low%2==0?"偶数":"奇数");
    
    return 0;
}
