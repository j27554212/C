#include<stdio.h>
#include<stdlib.h>


int main(){

printf("請輸入1~100的整數\n");//顯示對話框

int num ; //宣告任意值 

scanf("%d",&num);  // 輸入任意值  

if(num<50){               // 如果輸入值(num)<50，對話框顯示輸入資料小於50

     printf("輸入資料小於50\n\n");

}

if(num==50){               // 如果 輸入值(num)=50，對話框顯示輸入資料等於50 
 
     printf("輸入資料等於50\n\n");

}

if(num>50){                 // 如果 輸入值(num)>50，對話框顯示輸入資料大於50 

     printf("輸入資料大於50\n\n");

} 


system("pause");
return 0 ;

}
