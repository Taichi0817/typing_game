
#include <time.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include "getputch.h"

int main(void)
{
	int 	i;
	char	*str = "How do you do?";
	int 	len = strlen(str);	
	clock_t start, end;		

	init_getputch();

	printf("真真真真真真真�\n");
	printf("%s\n", str);
	fflush(stdout);

	start = clock();

	for (i = 0; i < len; i++) {
		int ch;

		do {
			ch = getch();
			if (isprint(ch)) {
				putch(ch);
				if (ch != str[i])	
					putch('\b');
			}
		} while (ch != str[i]);
	}

	end = clock();			

	printf("\n%.1f真真�\n", (double)(end - start) / CLOCKS_PER_SEC);

	term_getputch();

	return 0;
}
