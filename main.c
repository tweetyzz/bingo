#include "bingo.h"
#include "print bingo.h"
#define N 5
#include "get_number_byme.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	printf("빙고 게임 시작!\n");
	printf("\n");

	int mybingo[N][N];
	int combingo[N][N];
	int checked[N*N];
	int count = 0;
	int check_bingo(int arr[N][N]);
	
    srand( (unsigned)time(NULL) );
	
	initiate_bingo(mybingo);
	print_bingo(mybingo);
	
	initiate_bingo(combingo);
	print_bingo(combingo);
	
    get_number_byme(0);
    get_number_bycom(0);
    
	return 0;
}
