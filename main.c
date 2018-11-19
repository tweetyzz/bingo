#include "bingo.h"
#include "print bingo.h"
#define N 5
#define M 3
#include "get_number_byme.h"
#include "process_bingo.h"
#include "count_bingo.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	printf("빙고 게임 시작!\n");
	printf("\n");

	int mybingo[N][N];
	int combingo[N][N];
	
	int count = 0;
    int num;
    int tem;
	int number;
	int turn = 1;
	
	int Iwin,comwin;
	
	
	
    srand( (unsigned)time(NULL) );
	
	initiate_bingo(mybingo);
	initiate_bingo(combingo);
	
	
	while(1)
	{
		Iwin=0;
	    comwin=0;
	
	print_bingo(mybingo);
	print_bingo(combingo);
	
    
    number=get_number_byme(mybingo);
    process_bingo(mybingo,number);
    process_bingo(combingo,number);
    
    
    
    number=get_number_bycom(combingo);
    process_bingo(combingo,number);
    process_bingo(mybingo,number);
    
    
    Iwin=count_bingo(mybingo);
    
    printf("나의 빙고 줄 수는 %d 입니다. \n",Iwin);
    
    
    comwin=count_bingo(combingo);
    
	printf("상대방의 빙고 줄 수는 %d 입니다. \n",comwin);
	printf("\n");
	
	   
	if(Iwin == M){
		printf("승리하셨습니다!(시도횟수 : %d회) \n",turn);	
		break;
		}
	else if (comwin == M){
		printf("패배하셨습니다!(시도횟수 : %d회) \n",turn);
		break;
		}	
	}
	

    

   /* 
   
   중복인지 확인하는 함수, 입력받은 수는 배열에 넣고 초기화 하고 0 1로 확인
   	int i,j;
    int temp[N*N];
	int tem;
   
   
   
   do while 이용해서 빙고판 매 턴 마다 출력하는거 만들어야함. 
   
   
   
   
   {for (i=0;i<N;i++){
		
		for(j=0;j<N;j++)
		{   
			while(1)
				{ 
				if(temp[tem-1]== 0)
					{
					  Bingo[i][j]= tem;
					  temp[tem-1]= 1;
					  break;
					}
	
   
   
   
   */
    
    
    
	return 0;
}




