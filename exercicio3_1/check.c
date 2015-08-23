#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CMD_SIZE 100

void compile(const char *filename)
{
	if (filename == NULL) {
		fprintf(stderr, "error: null pointer.\n");
		exit(1);
	}

	char *cmd_gcc = NULL;
	cmd_gcc = (char *) malloc(CMD_SIZE * sizeof(char));

	strcat(cmd_gcc, "gcc ");
	strcat(cmd_gcc, filename);
	strcat(cmd_gcc, " -o prog -Wall");
	system(cmd_gcc);
}

void test()
{
	system("./prog < test1.in");
	printf("\n");
	system("./prog < test2.in");
	printf("\n");
	system("./prog < test3.in");
	printf("\n");
	system("./prog < test4.in");
	printf("\n");
	system("./prog < test5.in");
	printf("\n");
	system("./prog < test6.in");
	printf("\n");
	system("rm ./prog");
}

int main(int argc, char *argv[])
{
	if (argc != 3) {
		fprintf(stderr, "ERROR: usage error\n");
		exit(1);
	}

	rename(argv[1], argv[2]);
	compile(argv[2]);
	test();	
	return 0;	
}
