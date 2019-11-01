#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int i5;
    int a[5]={1, 2, 3, 4, 5};
    int b[5]={1, 2, 3, 4, 5};
    
    for(i5=0; i5<5; i5++) {
    	 if (a[i5] !=b[i5]){
    	 	printf("%i is different\n", i5);
    	      }
		 }
	return 0;
}
