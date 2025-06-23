//
//  main.c
//  4-1
//
//  Created by mac on 2025/6/9.
//有一个数组int a[n]，编写一个函数：void myfunc(int *p, int n);  将a中的0都移至数组末尾，将非0移至开始（保持原来的顺序不变）

#include <stdio.h>

void myfunc(int *p,int n){
    int i;
    int b[n];
    int k=0,e=n-1;
    for (i=0;i<n;i++){
        if(p[i]==0){
            b[e--]=0;
        }
        if(p[i]!=0){
            b[k++]=p[i];
        }
    }
    for(i=0;i<n;i++){
        p[i]=b[i];
    }
}
int main(int argc, const char * argv[]) {
    int n,i;
    printf("input n:\n");
    scanf("%d",&n);
    int a[n];
    printf("input array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    myfunc(a,n);
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
   
    return 0;
}
