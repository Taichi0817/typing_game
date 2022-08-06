#include <time.h>
#include <stdio.h>
#include <string.h>
#include "getputch.h"

int main(void)
{
	int i;
	char *str = "Hello World. How is the weather.";
	int len = strlen(str);
	clock_t  start, end;

	init_getputch();
	printf("この通りにタイピングしてください。\n");

	start = clock();

	for (i = 0;i < len; i++) {
		printf("%s \r", &str[i]);
		fflush(stdout);
		while(getch() != str[i])
			;
	}
	end = clock();
	
	printf("\r%.1秒でした。\n", (double)(end - start) / CLOCKS_PER_SEC);

	term_getputch();
	return 0;
}
