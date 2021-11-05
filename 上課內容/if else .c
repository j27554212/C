#include<stdio.h>
#include<stdlib.h>



int main(){
char ch;                            //宣告字元 
printf("是否喜歡這個程式(Y/N)\n");  //顯示"是否喜歡這個程式(Y/N)" 
scanf("%c",&ch);                    //輸入字元 
if(ch=='Y')                         //如果ch等於Y(使用者輸入) 
   printf("喜歡這個程式\n");        //顯示 "喜歡這個程式"
else                                //反之，如果ch不等於Y(使用者輸入)  
   printf("不喜歡這個程式\n") ;     //顯示"不喜歡這個程式"
 
system("PAUSE");
return 0 ;
}
	
	
