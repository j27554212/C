#include<stdio.h> 
#include <stdlib.h>
//--------------標頭檔.h--------------
struct restaurant{   //定義結構 // 以下為全域變數 
  int a ;
  char e[10];//="店" ; // 餐廳    
  char z; //= 'A'  ; //口味  字元 
  float b; //價格 
  int c;//停車費 
  int d;//電話 
  int keyin ;
}; 

  
  
//---------------------------------------- 
  
  //函式架構 
  void open(void); //開機畫面 
  void op_interface(void);//操作介面 
  void choose(int);//選擇資料 
  void show(void);//顯示資料 
  void input(void);//輸入資料 
  
  
  void insert(void);//新增 
  void select(void);//查詢 
  void delete(void);//刪除 
  void update(void);//修改 
//---------------------------------------- 
