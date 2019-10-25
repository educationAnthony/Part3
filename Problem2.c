#include <stdio.h>

int main(){
	int array[] = {12,15,221,3,416, 54, 16, 67};
	int max;
	int i;
	for(i = 0; i < 7; i++){
		if(array[i] > max)
			max = array[i];
	}
	
	printf("%d", max);
	return 0;
}
