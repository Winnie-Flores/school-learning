//
//  main.c
//  4-3
//
//  Created by mac on 2025/6/9.
//3.编写一递归程序求出所有用7,8,9组成，且各位数字互不相同的3位数。

#include <stdio.h>
void generateNum(int index,int *result,int *used,int *count){
    int i;
    if(index==3){
        (*count)++;
        printf("%d%d%d\n",result[0],result[1],result[2]);
        return;;
    }
    for(i=0;i<3;i++){
        int num=i+7;
        
        if(used[i]==0){
            used[i]=1;
            result[index]=num;
            generateNum(index+1, result, used, count);
            used[i]=0;
        }
    }
}
int main(int argc, const char * argv[]) {
    int result[3];
    int used[3]={0};
    int count=0;
    printf("num:\n");
    generateNum(0, result, used, &count);
    printf("count=%d",count);
    return 0;
}
