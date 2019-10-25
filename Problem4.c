int main(){
	int x = 7;
	int y = 100;
	int z;
	for(z = 0; z < y; z++){
		//initialize the values of the int array
	}
	int a = x;
	int b = y;
	int *c = 20;
	printf("%d",proc1(c, y, x));
	
	
}

//For the most part I have no clue what lea does/how it works
		//arg 0 arg 4 arg 8
		
		//This is some kind of array traversal where z is the first index and d is the second index
		// and b to c is the segment for the traversal
int proc1(int *a, int b, int c){
	int x = 0; //Var C
	int y = 0; //Var 10
	int z = 0; //Var 4
	while(z < b){
		int d = 1;
		while(d < c){
			if(a + (x * 4)  ==  0){
				x = (x + 1) % b;				
				}
			else{
				d++;
				x = (x + 1) % b;
			}
		}
		if(a + (x * 4) == 0){
			//left path
			x = (x + 1) % b;
		}
		else{
			y = &a
			//right path
			//lea still make no sense and pointers aren't helping
		}
		
		
		
	}
	return 
}
