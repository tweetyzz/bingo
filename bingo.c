
   #include "bingo.h" 
   #define N 4
   
   

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
			
	} //������ �ʱ�ȭ   
	
	
	
		
	for(i=0;i<N*N;i++){
		temp[i]=0;
	}// 0���� �ʱ�ȭ  
		
	
	
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
	}//���� �߻��� �ڸ� 1�� ä�� 

	
	
	
 
	return 	Bingo[N][N];
}
 // ���� �޴� �Լ�, ���� ���� ���� �Լ�,  
	




   
