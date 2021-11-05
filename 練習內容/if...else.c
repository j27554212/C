#include<stdio.h>
#include<stdlib.h>
#include<string.h> 

int main(){
  char pw[8];
  printf("請輸入密碼");
  scanf("%s\n",pw);
  printf("輸入的密碼為%s\n",pw);
  if(strcmp(pw,"5875487")==0)
  	printf("\n輸入正確\n\n");
	  else
	  printf("\n輸入失敗\n\n");
	  
	   
   
system("PAUSE");
return 0 ;	
	
	
	
} 
