----------------for---------------------
#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int i , j ;
	
	
	for(i=1;i<=9;i++){
		for(j=1;j<=9;j++){
			printf("%d*%d=%2d\t",i,j,(i*j));
		}
		printf("\n");
	}
	system("pause");
	return 0 ;
}


----------------while包for---------------------
#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int i , j ;
	 i = 1 ;
	while(i<=9){
	//for(i=1;i<=9;i++){
		for(j=1;j<=9;j++){
			printf("%d*%d=%2d\t",i,j,(i*j));
		}
		printf("\n");
		i++;
	}	

	system("pause");
	return 0 ;
}
