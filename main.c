#include "bingo.h"
#include "print bingo.h"
#define N 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	

	int mybingo[N][N];
	int combingo[N][N];
	
	
    srand( (unsigned)time(NULL) );
	
	initiate_bingo(mybingo);
	print_bingo(mybingo);
	initiate_bingo(combingo);
	print_bingo(combingo);
	
	return 0;
}
