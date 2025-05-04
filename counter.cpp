#include <stdio.h>

int main(){
	for(int i=1;i<6;i++){
		if(i == 5) printf("%d\n", i);
		else printf("%d ", i);
	}
	printf("Not nice!\n");
	
	return 0;
}
