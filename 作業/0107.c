#include<stdio.h> 
#include <stdlib.h>
#include "abz.h"

   int a ;
   int u ;
   
    char e[10]="店" ; // 餐廳    
     char z = 'A'  ; //口味  字元 
     float b=100; //價格 
     int c=50;//停車費 
     int d=000000000;//電話 
   int keyin ;
//----------------------------------------------
int main(){	
open();

   
	do{
		do{
			fflush(stdin);//清暫存 , 可能使scanf掃描之表格直接砍半 
			op_interface();		
		}while(scanf("%d",&a)!=1);  //!=1 => 0 or 1  //第一層判斷是否為整數格式 
		//先清除暫存,在讀資料
		    choose(a);
	//	    show();
      //      input();
	}while(a!=5);//繼續條件 
	
	return 0 ;
	
}  
//----------------------------------------------
void open(void){  //開啟介面 
	printf("\n\n");
	printf("\t*****************************\n");
	printf("\t*****************************\n");
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   操作介面\t*****\n");//topic 
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   *李明駿*\t*****\n");//name 
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   4100E113\t*****\n");//id 
	printf("\t*****\t\t\t*****\n");
	printf("\t*****************************\n");
   	printf("\t*****************************\n");
    printf("\n\n");
    system("pause");
	     system("cls");

}
//----------------------------------------------
void op_interface(void){


/* 
		printf("---------------------\n"); 
	printf("\t*****************************\n");
	printf("\t*****************************\n");
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   重點  \t*****\n");
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   1.口味	*****\n");
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   2.店名       *****\n");
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   3.價格  \t*****\n");
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   4.停車費\t*****\n");
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   5.電話\t*****\n");
	printf("\t*****\t\t\t*****\n");
	printf("\t*****************************\n");
 	printf("\t*****************************\n");
 	    system("pause");
		     system("cls");
 
 */
 	 printf("---------------------\n"); 
	
	printf("\n\n");
	printf("\t*****************************\n");
	printf("\t*****************************\n");
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   操作介面\t*****\n");
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   (1)新增\t*****\n");
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   (2)查詢\t*****\n");
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   (3)刪除\t*****\n");
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   (4)修改\t*****\n");
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   (5)離開\t*****\n");
	printf("\t*****\t\t\t*****\n");
	printf("\t*****************************\n");
  	printf("\t*****************************\n");
	
}
//----------------------------------------------
void show(void){
		     system("cls");
	 //keyin= getche();

 /*	switch(keyin){
	 case'1':
	 printf("---------------------\n"); 
	 printf("新增的東西為:\n\n");

	 printf("\n\n");
	printf("\t*****************************\n");
	printf("\t*****************************\n");
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   操作介面\t*****\n");
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   1.口味	*****\n");
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   2.店名       *****\n");
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   3.價格  \t*****\n");
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   4.停車費\t*****\n");
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   5.電話\t*****\n");
	printf("\t*****\t\t\t*****\n");
	printf("\t*****************************\n");
 	printf("\t*****************************\n");
    break;
    
  
	 
	 case'2':
	 printf("---------------------\n"); 
	 printf("查詢的結果為:\n\n");
	 printf("\n\n");
	printf("\t*****************************\n");
	printf("\t*****************************\n");
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   操作介面\t*****\n");
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   1.口味	*****\n");
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   2.店名       *****\n");
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   3.價格  \t*****\n");
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   4.停車費\t*****\n");
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   5.電話\t*****\n");
	printf("\t*****\t\t\t*****\n");
	printf("\t*****************************\n");
 	printf("\t*****************************\n");
	 break; 
	 
	case'3':
	 printf("---------------------\n"); 
	 printf("刪除的結果為:\n\n");
	 printf("\n\n");
	printf("\t*****************************\n");
	printf("\t*****************************\n");
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   操作介面\t*****\n");
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   1.口味	*****\n");
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   2.店名       *****\n");
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   3.價格  \t*****\n");
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   4.停車費\t*****\n");
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   5.電話\t*****\n");
	printf("\t*****\t\t\t*****\n");
	printf("\t*****************************\n");
 	printf("\t*****************************\n");
	 break; 
	 
    case'4':
	 printf("---------------------\n"); 
	 printf("修改的結果為:\n\n");
	 printf("\n\n");
	printf("\t*****************************\n");
	printf("\t*****************************\n");
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   操作介面\t*****\n");
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   1.口味	*****\n");
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   2.店名       *****\n");
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   3.價格  \t*****\n");
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   4.停車費\t*****\n");
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   5.電話\t*****\n");
	printf("\t*****\t\t\t*****\n");
	printf("\t*****************************\n");
 	printf("\t*****************************\n");
	 break; 
	 
	 	printf("---------------------\n"); 
	
	

}
*/ 
}
//----------------------------------------------	
void input(void) {
/*	
	 keyin= getche();
	switch(keyin){
	 case'1':
 printf("新增的東西為:\n\n");
	 	scanf("%c",&z);
		  scanf("%s",e);
			scanf("%f",&b);
				scanf("%d",&c);
					scanf("%d",&d);
	printf("\t*****************************\n");
	printf("\t*****************************\n");
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   重點  \t*****\n");
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   1.口味%c	*****\n",&z);
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   2.店名%s       *****\n",e);
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   3.價格%f  \t*****\n",&b);
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   4.停車費%d\t*****\n",&c);
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   5.電話%d\t*****\n",&d);
	printf("\t*****\t\t\t*****\n");
	printf("\t*****************************\n");
 	printf("\t*****************************\n");
    printf("---------------------\n"); 
	system("pause"); 
     break;
	 
	 break;
	 case'2':
	 printf("查詢的結果為:\n");
	 break; 
*/ 
}
//----------------------------------------------
 void choose(int a){
 	
 	switch(a){

 	case 1:
 		insert();
 		break;
 	case 2:
	    select();
		break;
	case 3:
	    delete();
		break;
	case 4: 
	    update();
		break;
		
		}
	 }
	 
//----------------------------------------------	 
void insert(void){//新增
 system("cls");
 printf("資料建構中");
 system("pause");
 } 
//----------------------------------------------
 void select(void){//查詢 
 system("cls");
 printf("資料建構中");
 system("pause");
 }
//----------------------------------------------
 void delete(void){//刪除 
 system("cls");
 printf("資料建構中");
 system("pause");
 }
//---------------------------------------------- 
 void update(void){//修改 
 system("cls");
 printf("資料建構中");
 system("pause");
 }
//----------------------------------------------

 
 
