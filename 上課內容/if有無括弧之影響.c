#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
 

int main(){
int flag = 0 ;
int num = 54 ;
  //結果一   
     if(num<50){    //{}括弧會影響結果
       flag++ ;     // flag =0  
       printf("Message1...\n");
   }
     if(num==50)
       flag++ ;     //flag = 1
       printf("Message2...\n");

   
    if(num>50)
       flag++ ;     //flag = 1
       printf("Message3...\n");

    
  //結果2
  /* if(num<50)
	 
       flag++ ;
       printf("Message1...\n");
   
     if(num==50)
	 
       flag++ ;
       printf("Message2...\n");
   
   
    if(num>50)
	 
       flag++ ;
       printf("Message3...\n");
    
*/
system("PAUSE");
return 0 ;
}
	
	
	
