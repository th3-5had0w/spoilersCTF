#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void release_canary(){
	int passcode1;
	int passcode2;
	if (passcode1 == 0xd34db33f && passcode2 == 0xc4f3b4b3){
		printf("[SYSTEM] Experiment-1337 Released.\n");
		printf("The canary ran around you happily and give you something...\n");
		printf("spCTF{h0l_up_wh0_r3l3453d_th3_c4n4ry_3743840c51262b1c8fb7348e9dbef5b7}\n");
		printf("Oh, it's a flag\n");
	}
	else{
		printf("[SYSTEM] Wrong passcode, locking down lab.\n");
		printf("So you got caught...");
	}
}

int main(){
	char name[100];
	char cmd[100];
	setbuf(stdout, NULL);
	setbuf(stdin, NULL);
	setbuf(stderr, NULL);
	printf("[SYSTEM] Accessing to lab control panel...");
	printf(" Done\n");
	printf("Username: ");
	gets(name);
	printf("[SYSTEM] Logged in as ");
	printf(name);
	printf("\nCommand: ");
	gets(cmd);
}
