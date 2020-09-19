#include <stdio.h>

int main(){
	int db;
	scanf("%d",&db);
	db = db > 100 ? 100 : db;
	
	int i;
	for(i = 1; i<= db; i++)
		printf("#");

	scanf("");
	return 0;
}