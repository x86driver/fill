#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	if (argc != 4) {
		printf("Usage: %s [file] [size] [pattern]\n", argv[0]);
		exit(1);
	}

	unsigned int size = atoi(argv[2]);
	unsigned char *buf = (unsigned char*)malloc(size);
	FILE *fp = fopen(argv[1], "wb");
	if (!fp) {
		perror("fopen");
		exit(1);
	}

	unsigned int pattern = atoi(argv[3]);
	memset(buf, pattern, size);
	fwrite(buf, size, 1, fp);
	fclose(fp);
	return 0;
}
