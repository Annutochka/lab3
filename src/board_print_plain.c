#include "board_print_plain.h"
#include "board.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>



void board_start(char deck[8][8]) {
	char letters[]={'r','n', 'b', 'q', 'k', 'b', 'n', 'r'};
	for (int letter = 0; letter < 8; ++letter) {
		deck[0][letter] = letters[letter];
		deck[7][letter] = letters[letter]-32;
		deck[1][letter] = 'p';
		deck[6][letter] = 'p'-32;
		for (int i = 2; i < 6; ++i) {
			deck[i][letter] = ' ';
		}
	}
}

void board_print(char deck[8][8]) {
	system("CLS");
	printf("======== CHESS ========\n");
	for (int number = 0; number < 8; ++number) {
		printf("| %d | ", number+1);
		for (int letter = 0; letter < 8; ++letter) {
			printf("%c ",deck[number][letter]);
		}
		printf("|\n");
	}
	printf("|---------------------|\n");
	printf("|   | A B C D E F J H |\n");
	printf("-----------------------\n");
} 
