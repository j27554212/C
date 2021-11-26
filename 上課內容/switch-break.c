
//21~36 <=> 38~48
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
		   printf("score 80 to  89. \n");
		   break; 
  	   	case 'c' :
		   printf("score 70 to  79. \n");
		   break; 
	   	case 'd' :
		   printf("score 60 to  69. \n");
		   break; 
	   	case 'e' :
		   printf("score 0 to  59. \n");
		   break; 
		default:printf("wrong grade ! \n");
	   } 
	   
	/*         if(grade == 'a'){
	   	   printf("score 90 to  100. \n");
	   	}else if (grade ==  'b'){
	   	   printf("score 80 to  89. \n");
	  	}else if (grade ==  'c'){
	  	   printf("score 70 to  79. \n");
                }else if (grade ==  'd'){ 
		   printf("score 60 to  69. \n");
		}else if (grade ==  'e'){
		   printf("score 0 to  59. \n");

		   }
	*/
	
	
	system("pause");
	return 0 ;
	
} 
