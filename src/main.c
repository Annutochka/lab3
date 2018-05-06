#include <iostream>
#include <iomanip>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "board_print_plain.h"
#include "board.h"

using namespace std;

int main(){
	char deck[8][8];
	board_start(deck);
	board_print(deck);
	start_game(deck); 
	return 0;
}
