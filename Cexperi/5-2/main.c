//
//  main.c
//  5-2
//
//  Created by mac on 2025/6/9.
//动态建立一个m行n列的矩阵，求其转置矩阵并输出

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int m,n;
    printf("input m and n:\n");
    scanf("%d %d",&m,&n);
    int **a = (int **)malloc(m * sizeof(int *));
        if (a == NULL) {
            printf("内存分配失败\n");
            return 1;
        }
        for (int i = 0; i < m; i++) {
            a[i] = (int *)malloc(n * sizeof(int));
            if (a[i] == NULL) {
                printf("内存分配失败\n");
                // 释放已分配的内存
                for (int j = 0; j < i; j++) {
                    free(a[j]);
                }
                free(a);
                return 1;
            }
        }
    
    printf("input a:\n");
    for(int i=0;i<m;i++){
        for (int j=0; j<n; j++) {
            scanf("%d",&a[i][j]);
        }
    }
    int **b = (int **)malloc(n * sizeof(int *));
        if (b == NULL) {
            printf("内存分配失败\n");
            // 释放原始矩阵内存
            for (int i = 0; i < m; i++) {
                free(a[i]);
            }
            free(a);
            return 1;
        }
        // 为转置矩阵的每一行分配内存
        for (int i = 0; i < n; i++) {
            b[i] = (int *)malloc(m * sizeof(int));
            if (b[i] == NULL) {
                printf("内存分配失败\n");
                // 释放已分配的转置矩阵内存
                for (int j = 0; j < i; j++) {
                    free(b[j]);
                }
                free(b);
                // 释放原始矩阵内存
                for (int j = 0; j < m; j++) {
                    free(a[j]);
                }
                free(a);
                return 1;
            }
        }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            b[j][i]=a[i][j];
        }
    }
    printf("reverse:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
