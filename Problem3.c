
int main(){
	int y = 100; //1Ch
	
	while(y < 999){
		int z = (y*1374389535)/32 - y //18h
		// really unsure what to do for the lea part z * -100
		
		int a = (((-100 * z) + y) * 1717986919)/4 - (-100 * z)/4294967296; //14h
		int b = y - 2 * (1717986919/4 ) * 4 // 10h
		if(y ==  a * a * a + b * b * b + z * z * z ){
			printf("%d", y)
		}
	}
	return 0;
}
