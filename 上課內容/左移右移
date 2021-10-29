#include<stdio.h>
#include<stdlib.h>
 //ASCII 
 //使用位元運算可做出mask(遮罩) 
 //硬體居多 

int main() {

    int x=20 , y=100 , tem;
    
    tem = y;
    y=x;//y=x=y
    x=tem;//x=y
    
    printf("%d,%d\n",x,y);

    x=x^y; (?)
    y=x^y; (?)
    x=x^y; (?)
  
    printf("%d,%d\n",x,y);
 
    printf("%d左移2個位元=%d\n",x,x<<2) ;//左移:20=00010100=>01010000 64+16=80
    printf("%d右移2個位元=%d\n",x,x>>2) ;//右移:20=00010100=>00000101 1+4=5
    
	system("pause");
	
	return 0 ;
}
