#include <stdio.h>
#include <stdlib.h>

    int a ; //輸入編號的變數 
 	int op;
	char type[10]="國道" ;
	int number = 1;
	float length = 374.3;
	char start[20]="基隆";
	char end[20]="高雄";
void open(void){ //開始畫面 
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
}
void op_interface(void){//操作畫面 

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
	
}
void show(void){//顯示單筆資料 
system("cls");
	printf("\n\n");
	printf("\t*****************************\n");
	printf("\t*****************************\n");
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   操作介面\t*****\n");
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   國道:%c\t*****\n",type[10]);
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   號碼:%d*****\n",number);
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   總長:%f\t*****\n",length);
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   起點:%c\t*****\n",start[20]);
	printf("\t*****\t\t\t*****\n");
	printf("\t*****\t   終點:%c\t*****\n",end[20]);
	printf("\t*****\t\t\t*****\n");
	printf("\t*****************************\n");
 	printf("\t*****************************\n");
}
void input(void) { //輸入資料 
            printf("輸入起點\n");
            scanf("%c",start[20]);
            printf("起點為%c",start[20]);
            printf("輸入終點\n");
            scanf("%c",end[20]);
            printf("終點為%c",end[20]); 
            
}
int main(){	
open();

	do{
		do{
			fflush(stdin);
			op_interface();		
		}while(scanf("%d",&a)!=1);
		
		    show();
            input();
	}while(a!=5);


		
	return 0 ;
	
}
