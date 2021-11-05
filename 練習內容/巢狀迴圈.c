#include<stdio.h>
#include<stdlib.h>

int main(){


	int a=34 , b=100 , c=-67 ;
	int max ;
	printf("三個整數為%d,%d,%d\n\n",a,b,c);
	
	if(a>b){
		if(a>c)
		  max = a ;
   else
		  
		  max = c ;		  
	}else{
		if (b>a)
		  if(b>c)
		   max = b ;
		   else 
		    max = c ;
	}

printf("最大值為%d\n\n",max);
 system("pause");
 return 0 ;   
	
} 
