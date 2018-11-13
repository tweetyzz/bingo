#include "bingo.h"
#include "print bingo.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	

	int mybingo[N][N];
	int combingo[N][N];
	
	initiate_bingo(mybingo);
	print_bingo(mybingo);
	initiate_bingo(combingo[N][N]);
	
	return 0;
}
