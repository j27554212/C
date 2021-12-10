#include <stdio.h>
#include <stdlib.h>
 
int main() {
	char i , j ;
	for(i='A';i<='G';i++){
		for(j=i;j<='G';j++){
			printf("%c ",j) ;
		}
		
printf("\n");
	}
	
 //****************************
 
    for(i='A';i<='G';i++){
    	j='A';
     while(j<=i){
    printf("%c ",j) ;

      j++;    	
	 }
	 printf("\n");
}
     
 

	
	system("pause");
	return 0 ;
}
