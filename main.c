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

	int mybingo[N][N]; // 내 빙고판 선언 
	int combingo[N][N];// 컴퓨터 빙고판 선언 
	
	int count = 0; //빙고 줄 수 세는 것 
    int num; //내가 입력하는 숫자  
    int tem; //컴퓨터가 입력하는 숫자 
	int number; 
	int turn = 1; //시도 횟수  
	
	int Iwin,comwin; // 내가 빙고 줄 수  : Iwin, 컴퓨터빙고 줄수  :comwin 
	
	
	
    srand( (unsigned)time(NULL) ); //난수 발생 
	
	initiate_bingo(mybingo); //내 초기 빙고판  
	initiate_bingo(combingo);//컴퓨터 초기 빙고판  
	
	
	while(1)
	{
		Iwin=0; // 내 빙고 줄 수 초기화  
	    comwin=0;// 컴퓨터 빙고 줄 수 초기화  
	
	print_bingo(mybingo); // 내 빙고판 출력  
	//print_bingo(combingo);
	
    
    number=get_number_byme(mybingo); //내 숫자 받는 함수  
    process_bingo(mybingo,number); //나한테 받은 숫자를 0으로 바꾸는 함수, 내 빙고판에서  
    process_bingo(combingo,number);//컴퓨터한테 받은 숫자를 0으로 바꾸는 함수, 내 빙고판에서
    
    
    
    number=get_number_bycom(combingo); //컴퓨터 숫자 받는 함수  
    process_bingo(combingo,number);//나한테 받은 숫자를 0으로 바꾸는 함수, 컴퓨터  빙고판에서
    process_bingo(mybingo,number);//컴퓨터한테 받은 숫자를 0으로 바꾸는 함수, 컴퓨터 빙고판에서
    
    
    
    Iwin=count_bingo(mybingo);// 0 개수 줄 별로 세는 함수 , 내 빙고판에서  
    
    printf("나의 빙고 줄 수는 %d 입니다. \n",Iwin); //내 빙고 줄 수 출력  
    
    
    comwin=count_bingo(combingo);// 0개수 줄 별로 세는 함수 , 컴퓨터 빙고판에서  
    
	printf("상대방의 빙고 줄 수는 %d 입니다. \n",comwin); // 컴퓨터 줄 수 출력  
	printf("\n");
	
	turn++;// 판 수 세는거. 근데 초기 함수 출력도 같이 세서 아래에서 -1 해줌. 
	  
	if(Iwin == M){
		printf("승리하셨습니다!(시도횟수 : %d회) \n",turn-1);//M 과 내 빙고 줄 수가 같을 때 승리하셨습니다 출력. turn-1 한 이유는 위에 있음. 
		break;
		}
	else if (comwin == M){
		printf("패배하셨습니다!(시도횟수 : %d회) \n",turn-1);//M 과 컴퓨터  빙고 줄 수가 같을 때 패배하셨습니다 출력. turn-1 한 이유는 위에 있음.
		break;
		}	
	}
	 
	return 0;
}




