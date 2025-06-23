//
//  main.c
//  ex1-2
//
//  Created by mac on 2025/3/18.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    long int a;
    int high,low;
    long int newa;
    printf("please input:\n");
    scanf("%ld",&a);
    high=(a>>16)&0xffff;
    low=a&0xffff;
    newa=(low<<16)|high;
    printf("the num is %lx\n",a);
    printf("the result is %x\n",newa);
    return 0;
}
