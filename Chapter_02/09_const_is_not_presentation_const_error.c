#include <stdio.h>

int main(){
	const int two = 2;
	
	int i = 1;

	switch(i){
		case 1:printf("case 1\n");
		case two:printf("case 2\n");
		//compling error:
		//rror: case label does not reduce to an integer constant

		case 3:printf("case 3\n");
		default: ;
	}
	return 0;
}
