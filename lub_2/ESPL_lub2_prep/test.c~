#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
	FILE *foo = fopen(argv[1], "r");
	char buf[80];

	while(!feof(foo)) {
		fgets(buf, 80, foo);
		printf("len of buf=%d, buf=%s", strlen(buf), buf);
	}

	return 0;

}
		
