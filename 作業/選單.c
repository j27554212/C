#include <stdio.h>
#include <stdlib.h>

int a ; //輸入編號的變數 


int main(){
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
    
	 do {         
	 	do{	
		 }while(scanf("%d",&a)==0);
	 }while(a!=5);
	
	
	do{
		do{
			fflush(stdin);
			system("cls");
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
		}while(scanf("%d",&a)!=1);
	}while(a!=5);
	return 0 ;
	

	
} 
