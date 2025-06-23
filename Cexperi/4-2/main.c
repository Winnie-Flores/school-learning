//
//  main.c
//  4-2
//
//  Created by mac on 2025/6/9.
//编写函数void fun(int x, int *p, int *n)，它的功能是：求出x的偶数因子，并按从小到大的顺序放在p所指向的数组中，这些因子的个数通过形参n返回（假设p指向足够大的空间）

#include <stdio.h>
#include <stdlib.h>
void fun(int x,int *p,int *n){
    int i=2,j=0;
    
    for(;i<x;i+=2){
        if(x%i==0){
            p[j++]=i;
        }
    }
    *n=j;
}
int main(int argc, const char * argv[]) {
    int x;
    int i;
    int n;
    int *p;
    printf("input num:\n");
    scanf("%d",&x);
    p=(int*)malloc(x*sizeof(int));

    fun(x, p, &n);
    for(i=0;i<n;i++){
        printf("%d\n",p[i]);
    }
    printf("count=%d",n);
    
    return 0;
}
