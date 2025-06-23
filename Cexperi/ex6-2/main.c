//
//  main.c
//  ex6-2
//
//  Created by mac on 2025/4/2.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int arr1[10],arr2[10],arr3[20];
    int i,j,k;
    int flag,t,temp;
    
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
    
    t=1;
    for (j=1; j<20; j++) {
        arr3[0]=arr1[0];
  
        flag=0;
        if(j<10){
            flag=0;
            for(k=0;k<t;k++){
                if(arr1[j]==arr3[k]) flag=1;
            }
            if(!flag){
                arr3[t]=arr1[j];
                t+=1;
            }
        }
        if(j>=10){
            flag=0;
            for(k=0;k<t;k++){
                if(arr2[j-10]==arr3[k]) flag=1;
                }
            if(!flag){
                arr3[t]=arr2[j-10];
                t+=1;
            }
        }
    }
    for(i=0;i<t-1;i++){
        k=i;
        for(j=i+1;j<t;j++){
            if(arr3[k]<arr3[j]) k=j;
        }
        if(k!=i){
            temp=arr3[i];
            arr3[i]=arr3[k];
            arr3[k]=temp;
        }
    }
    
    printf("combined array:\n");
    for(i=0;i<t;i++){
        printf("%d ",arr3[i]);
    }
    printf("\n");
    return 0;
}
