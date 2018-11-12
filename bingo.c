// 함수를 만들어서 호출하는식으로
/* 1.빙고판(랜덤함수로)을 만들어서 내꺼, 컴퓨터꺼 호출하는 식으로.
   2.컴퓨터의 빙고판은 매turn 마다 갱신되어야함. 내가 알 필요는 없음. 
    내 빙고판도 내가 선택한 숫자, 컴퓨터가 선택한 숫자를 -1로 채우고 갱신되어야함.
   3.빙고 개수세는 함수를 만들어함. 
   4.turn수 세는 함수도 만들어야함.
   5.기호함수 m 설정해야함. 
   */
   #include <stdlib.h>
   
   #define N 5
   
   void initiate_bingo(){
   {
   	int bingo[N][N];
   	
   	srand( (unsigned)time(NULL) );
    
    int rand;
	//(rand() % n)+1
    int i,j;
    int baeyeol[100];


    for (i=0;i<N;i++){
		
		for(j=0;j<N;j++)
		
		bingo[i][j]=0;
		}
		
		
	for (i=0;i<N;i++){
		
		for(j=0;j<N;j++)
		
		printf("%d",bingo[i][j]);
		}
		
		
		for (i=0;i<N;i++){
		
		for(j=0;j<N;j++)
		
		printf("%d\n",bingo[i][j]);
		}
		
		
	}
      printf("\n");
   }
   
