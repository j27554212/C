#include<stdio.h>
#include<stdlib.h>

 //ASCII 
 //使用位元運算可做出mask(遮罩) 
 //硬體居多 

int main() {

    char ch ='6';//00110110
    char mir=127;//01111111
    printf("%c: %c\n",ch,(~ch)&mir); //[~]為NOT閘 00110110 => (~ch)=11001001 [&]為AND閘  
                                     //(~ch)&mir=11001001 | 01111111 =>01001001


	system("pause");
	
	return 0 ;
}
