# include <stdio.h>
# include <stdlib.h> 

int main() {
	
	
int num ;

printf("input a number");
scanf("%d",&num);

if((num!=0)&&!(24%num))
printf("Number %d is a factor of 24.\n",num);

else
printf("Number %d is not a factor of 24.\n",num);


system("pause");
return 0 ;
}
