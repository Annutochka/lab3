#include "board_print_plain.h"
#include "board.h"


int main(){
	char deck[9][9];
	board_start(deck);
	board_print(deck);
	start_game(deck); 
	return 0;
}
