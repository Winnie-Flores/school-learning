//
//  main.c
//  5-1
//
//  Created by mac on 2025/6/9.
//1.编写一字符串移动函数char *shift(char *pstr, int n, char mode)，该函数的功能是：
//（1）当mode = ‘R’时，将字符串pstr循环右移n位；
//（2）当mode = ‘L’时，将字符串pstr循环左移n位；返回值为移位后的字符串的首地址。

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *shift(char *pstr,int n,char mode){
    int i;
    int len=strlen(pstr);
    char *result=(char*)malloc((len+1)*sizeof(char));
    
    if(mode=='R'){
        for(i=0;i<len;i++){
            result[(i+n)%len]=pstr[i];
        }
    }
    else if(mode=='L'){
        for(i=0;i<len;i++){
        result[(len-n+i)%len]=pstr[i];
        }
    }
    else{
        printf("input error!\n");
    }
    result[len]='\0';
    return result;
}
int main(int argc, const char * argv[]) {
    int n;
    char mode;
    char pstr[100];
    char *result=(char*)malloc(sizeof(pstr));
    printf("请输入字符串(最多99个字符):\n");
      if (fgets(pstr, sizeof(pstr), stdin) != NULL) {
          // 移除fgets读取的换行符
          pstr[strcspn(pstr, "\n")] = '\0';
      } else {
          printf("输入字符串失败\n");
          return 1;
      }
    
    printf("input mode:(R/L)\n");
    scanf("%c",&mode);
    printf("input n:\n");
    scanf("%d",&n);
    result=shift(pstr, n, mode);
    printf("result: %s\n",result);
    free(result);
    return 0;
}
