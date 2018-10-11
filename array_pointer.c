#include<stdio.h>

int main(void){
	
	//	int array[10] = {1, 2, 3, 4, 5}, i;
	int array[10], i;
	
	printf("Enter 10 elements :: ");
	
	//general way of scaning the array
	//	for (i = 0; i < 10; i++ ){
	//		scanf("%d", &array[i]);
	//	}
	
	//scan array using pointer
	for(i = 0; i < 10; i++){
		scanf("%d", array + i);
	}
	
	//	general way of printing the array
	//	for (i = 0; i < 10; i++){
	//		printf("%d\t", array[i]);
	//	}
	
	for(i = 0; i < 10; i++ ){
		printf("%d\t", *(array + i));
	}
	
	return 0;
}
