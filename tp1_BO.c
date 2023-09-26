#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define password "SupD3V3nc|"
#define lame "password"

checkpw (){
char pw[600];
	printf("Please enter the password: ");
	gets (pw);
	if (strcmp(pw, lame) == 0)
		printf("Nop, pas possible, tu ne m'auras pas comme ça!\n");
	else if (strcmp(pw, password) == 0)
		granted();
	else
		printf("Access Denied!\n");
	
	return 0;
}

granted(){
	printf("Access Granted\n");
	return 0;
}

int main(int argc, char *argv[])
{
	setuid(0);

	if(argc >1){
		printf("Pas besoin de page d'aide.\n");
		exit(1);}
	checkpw();
	return 0;
}
