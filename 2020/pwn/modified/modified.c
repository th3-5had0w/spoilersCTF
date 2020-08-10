#include <stdio.h>
#include <stdlib.h>

int main(){
	int code1 = 0; 
	int code2 = 0; 
	char name[40]; 
	setbuf(stdout, NULL); 
	setbuf(stdin, NULL); 
	setbuf(stderr, NULL);
	printf("Welcome to Spoilers lab.\n");
       	printf("Please input password to continue: ");
       	gets(name);
       	if (code1 == 0xcafebabe && code2 == 0xdeadbeef){
		system("cat flag.txt");
	}
	else{
		printf("Wrong password!\n");
	}
}
