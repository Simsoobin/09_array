#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int i4;
    int grade2[5];
    int score[5];
    
    for(i4=0; i4<5; i4++) {
    	grade2[i4]=rand() %100;
	}
	
    for(i4=0; i4<5; i4++) {
    	score[i4]=grade2[i4];
	}
	
	for(i4=0; i4<5; i4++){
    	printf("score[%d]=%d\n", i4,score[i4]);
	}
	
	printf("\n");
	return 0;
}
