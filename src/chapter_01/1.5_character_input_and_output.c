/*
 *  Created on: 28 mar. 2020
 *      Author: Leo Bazan
 */
#include <stdio.h>

void ex_1_6() {
	// Verify that "getchar() != EOF" is 0 or 1.
	char c = getchar() != EOF;
	printf("%d", c);
}

void ex_1_7() {
	// Write a program to print the value of EOF.
	char c = EOF;
	printf("%d", c);
}

void ex_1_8() {
	// Count white spaces, tabs and new lines.
	char c, ws, t, nl;
	ws = 0;
	t = 0;
	nl = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ')
			++ws;
		if (c == '\t')
			++t;
		if (c == '\n') {
			++nl;
			printf("WS:%d T:%d NL:%d", ws, t, nl); //Show results when newline is entered
		}

	}
}

void ex_1_9() {
	//Copy input to output, replace multiple white spaces with a single one.
	int c;
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			putchar(c);
			while ((c == ' ') && (c != EOF))
				c = getchar();
		}
		putchar(c);
	}
}

void ex_1_10() {
	//Copy input to output, replace white space with 'ws' and tabs with '\t'.
	int c;
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			printf("ws");
		} else if (c == '\t') {
			printf("\\t");
		} else {
			putchar(c);
		}
	}
}

void ex_1_12() {
	// Write the input, one word per line.
	int c;
	while ((c = getchar()) != EOF) {
		if (c == ' ' | c == '\t')
			putchar('\n');
		else {
			putchar(c);
		}
	}
}
