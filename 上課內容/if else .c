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
========================================================  
#include<stdio.h>
#include<stdlib.h>

int main(){
int num;
//輸入1~100
printf("請輸入1~100之值\n");
scanf("%d",&num);
//如果使用者輸入的資料在1~100，顯示正確的輸入資料
//否則顯示錯誤的輸入資料

if(1<=num<=100){  //由左看到右 
	printf("正確資料\n");
} else{
		printf("錯誤資料\n");

}
system("PAUSE");
return 0 ;
}
	
	
	
	
	
