#include <stdio.h>
#include <setjmp.h>
jmp_buf buf;

#include <setjmp.h>

void banana(){
	printf("in banana() \n");
	longjmp(buf,1);

	/* NOTREACHED */
	printf("you'll never see this,because I longjmp'd");
}

int main(){
	if(setjmp(buf))
		printf("back in main\n");
	else{
		printf("first time through\n");
		banana();
	}
}


