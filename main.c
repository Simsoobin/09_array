#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i2;
	int grade[5];
	int sum, average;
	
	for(i2=0; i2<5; i2++){
		
		 grade[i2]= rand() %100;
	}
	printf("\n");
	
	for(i2=0; i2<5; i2++){
		printf("grade[%d] =%d\n", i2, grade[i2]);
	}
	return 0;
}
