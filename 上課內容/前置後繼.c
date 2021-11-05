#include<stdio.h>
#include<stdlib.h>

// ++x 前置  x++後繼  
int main(){
    
	int x=10 , y=10 ;
	int res1, res2 ;
	
	printf("%d,%d\n",x++,++x);
	x=10;
	res1=8-(x++);//運算式做完在+1 
	res2=8-(++y); //y先+1 在執行運算式 
	printf("%d,%d\n",res1,res2);	
	printf("%d,%d\n",x,y);

    system("pause");
    
    return 0 ;
	
	
} 
