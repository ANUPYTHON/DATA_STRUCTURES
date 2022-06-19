#include<stdio.h>
#include<string.h>
void main(void){
for(int i=0; i<strlen(main_string)-strlen(pattern_string)+1;i++){
    int flag = 1;
    for(int j=0; j <strlen(pattern_string)&&flag ==1;j++){
      if(pattern_string[j] != main_string[i+j]){
        flag = 0;
      }else{
        printf("%d",i);
      }
    }
  }
}
