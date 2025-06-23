//
//  main.c
//  ex6-1
//
//  Created by mac on 2025/4/2.
//

#include <stdio.h>

int main() {
    // insert code here...
    int arr1[10],arr2[10],arr3[20];
    int i,j,k;
    int flag,t;
    
    printf("input arr1:\n");
    for(i=0;i<10;i++){
        scanf("%d",&arr1[i]);
    }
    
    printf("input arr2:\n");
    for(i=0;i<10;i++){
        scanf("%d",&arr2[i]);
    }
    
    for(i=1;i<10;i++){
        flag=0;
        for(j=0;j<10-i;j++){
            if(arr1[j]<arr1[j+1]){
                t=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=t;
                flag=1;
            }
        }
            if(flag==0){
                break;
            }
    }
    
    printf("arr1:\n");
    for (i=0; i<10; i++) {
        printf("%d ",arr1[i]);
    }
    printf("\n");
    
    for(i=0;i<9;i++){
        k=i;
        for(j=i+1;j<10;j++){
            if (arr2[k]<arr2[j]) k=j;
            }
        if(k!=i){
            t=arr2[k];
            arr2[k]=arr2[i];
            arr2[i]=t;
        }
    }
    
    printf("arr2:\n");
    for (i=0; i<10; i++) {
        printf("%d ",arr2[i]);
    }
    printf("\n");
    
    for(i=0;i<20;i++){
        if(i<10) arr3[i]=arr1[i];
        if (i>=10) arr3[i]=arr2[i-10];
    }
    for(i=0;i<19;i++){
        k=i;
        for(j=i+1;j<20;j++){
            if (arr3[k]<arr3[j]) k=j;
            }
        if(k!=i){
            t=arr3[k];
            arr3[k]=arr3[i];
            arr3[i]=t;
        }
    }
    
    printf("combined array:\n");
    for (i=0; i<20; i++) {
        printf("%d ",arr3[i]);
    }
    printf("\n");
    printf("Hello, World!\n");
    return 0;
}
