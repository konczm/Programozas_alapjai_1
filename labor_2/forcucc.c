#include <stdio.h>

int main(){
	int db;
	scanf("%d",&db);
	db = db > 100 ? 100 : db;
	
	for(int i = 1; i<= db; i++)
		printf("A");

	return 0;
}