#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void bubble(int number[], int count);

int main(int argc, char *argv[]) {
	int i, count, temp, number[10];
	
	printf("Enter how many values in the array?: ");
	scanf("%d",&count);
	printf("Enter numbers: ", count);
	   
	for(i=0;i<count;i++)
    	scanf("%d",&number[i]);	
    	
    bubble(number, count);
    
    for(i=0;i<count;i++)
    	printf("%d ",number[i]);
	return 0;
}

void bubble(int number[], int count) { 
    int i, temp;
    bool isSorted = false;
    
	while (!isSorted) {
    	isSorted = true;						//Assume the array is sorted
		for (i = 0; i < count - 1; i++) {
			if (number[i] > number[i + 1]) {
				temp = number[i];				//swap 2 numbers
            	number[i] = number[i + 1];
            	number[i + 1] = temp;    	
            	isSorted = false;				//Because we still have to do the swap so the array is not sorted
            }									//When we exit the loop, the array will be sorted 
        }
    }
}  








