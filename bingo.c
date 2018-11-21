
   #include "bingo.h" 
   #define N 5
   #define M 3
   

int initiate_bingo(int Bingo[N][N]){

   	int i,j;
    int temp[N*N];// 빙고배열의 크기와 같은 일차원 배열을 만듦 
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
	}//난수 발생된 자리 1로 채워서 똑같은 숫자 또 안나오게 함 , 새로운 숫자가 1~N*N사이에서 발생해서 빙고 판 채움  

	
	
	
 
	return 	Bingo[N][N]; // 빙고 판 반환해줌  
}
 // 숫자 받는 함수, 빙고 개수 세는 함수,  
	




   
