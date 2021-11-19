# include <stdio.h>
# include <stdlib.h> 

int main() {
	
	
int x , y ;
int abs , max ;  // abs => r絕對值
int year ; 

printf("\nInput x :");
scanf("%d",&x) ;

if(x>=0){
	abs=x ;
}else{
	abs=-x;
}

printf("|x|=%d\n",abs);
printf("\nInput y :");

scanf("%d",&y);
abs=(y>=0) ? y : -y ;  //(?:)為一個運算子     //三元運算子(=,>=,?:)      //可與14行~18行調換 
printf("|y|=%d\n",abs);

system("pause");
return 0 ;
}
