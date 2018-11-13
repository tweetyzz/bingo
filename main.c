#include "bingo.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	

	int bingo[N][N];
	
	
	initiate_bingo();
	print_bingo(bingo);
	
	return 0;
}
