#include<stdio.h>                         
#include<stdlib.h>
int main(void){
	for(int q=1;q<10;q++)                
		for(int w=1;w<10;w++){            
			printf("%2d*%1d=%2d",w,q,w*q);
			printf("   ");
			if(w==9){                      
				printf("\n");
			}
		}
}
