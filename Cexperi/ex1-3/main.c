//
//  main.c
//  ex1-3
//
//  Created by mac on 2025/3/18.
//

#include <stdio.h>

int main() {
    // insert code here...
    long int a;
    int highest,high,low,lowest;
    long int newa;
    printf("input:\n");
    scanf("%ld",&a);
    highest=(a>>24)&0xff;
    high=(a>>16)&0xff;
    lowest=a&0xff;
    low=(a>>8)&0xff;
    newa=(lowest<<24)|(low<<16)|(high<<8)|highest;
    printf("the origin is %x,\nthe result is %x\n",a,newa);
    return 0;
}
