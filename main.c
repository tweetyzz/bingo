#include "bingo.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	

	int mybingo[N][N];
	int combingo[N][N];
	
	initiate_bingo(mybingo);
	print_bingo(mybingo);
	
	return 0;
}
