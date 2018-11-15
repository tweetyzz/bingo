// 함수를 만들어서 호출하는식으로
/* 1.빙고판(랜덤함수로)을 만들어서 내꺼, 컴퓨터꺼 호출하는 식으로.
   2.컴퓨터의 빙고판은 매turn 마다 갱신되어야함. 내가 알 필요는 없음. 
    내 빙고판도 내가 선택한 숫자, 컴퓨터가 선택한 숫자를 -1로 채우고 갱신되어야함.
   3.빙고 개수세는 함수를 만들어함. 
   4.turn수 세는 함수도 만들어야함.[N
   5.기호함수 m 설정해야함. 
   6.똑같은 숫자를 또 받을경우 오류의 메세지를 보이고 새로 받아야함.
   질문 함수가 더 필요하면 함수를 더 생성해도 되는지? 
   */
   #include "bingo.h" 
   #define N 5
   
   

int initiate_bingo(int Bingo[N][N]){

   	int i,j;
    int temp[N*N];
	int tem;
    
   	
   	//printf("time : %u\n", (unsigned)time(NULL));
   	//srand( (unsigned)time(NULL) );

	
    for (i=0;i<N;i++){
		
		for(j=0;j<N;j++)
		{
			Bingo[i][j]=0;
		}
			
	} //빙고판 초기화   
	
	
	
		
	for(i=0;i<N*N;i++){
		temp[i]=0;
	}// 0으로 초기화  
		
	
	
	for (i=0;i<N;i++){
		
		for(j=0;j<N;j++)
		{   
				while(1)
				{
					tem = rand()%(N*N)+1;
					 
					if(temp[tem-1]== 0)
					{
					  Bingo[i][j]= tem;
					  temp[tem-1]= 1;
					  break;
					}
	
				}
			
			
		}
	}//난수 발생된 자리 1로 채움 

	
	
	
 
	return 	Bingo[N][N];
}
 // 숫자 받는 함수, 빙고 개수 세는 함수,  
	




   
