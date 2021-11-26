#include <stdio.h>
#include <stdlib.h>


int main(){
	
	char grade ; 
	
	printf("enter your grade \n");
	scanf("%c",&grade);

	
	if((grade >= 'A')&&(grade<='Z')){ 
	
	   grade = 'a' +(grade - 'A');  //大小寫轉換 
	   } 
	   switch (grade) {
	   	
	   	case 'a' :
		   printf("score 90 to  100. \n");
		   break; 
		   	   	case 'b' :
		   printf("score 80 to  90. \n");
		   break; 
		   	   	case 'c' :
		   printf("score 70 to  80. \n");
		   break; 
		   	   	case 'd' :
		   printf("score 60 to  70. \n");
		   break; 
		   	   	case 'e' :
		   printf("score 0 to  59. \n");
		   break; 
	   } 
	
	
	
	
	system("pause");
	return 0 ;
	
} 
