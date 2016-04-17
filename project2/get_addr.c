#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv) {
	char *shell = getenv("_SHELL");

	if (shell) {
		fprintf(stdout, "%x\n", (unsigned int)shell);
	}

	return EXIT_SUCCESS;
}
