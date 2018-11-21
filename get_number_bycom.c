#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 3
#include "bingo.h"

int get_number_bycom(int Bingo[N][N])
{
	int i,j;
	int temp[N*N];
	int tem;
    //int k;
	//srand( (unsigned)time(NULL) );
	
  
			while(1)
				{
					tem = rand()%(N*N)+1; //난수발생  
				
				if(tem>0 && tem<=N*N)
				{
					 for (i=0;i<N;i++)
	                {
		                for(j=0;j<N;j++)
		                {   
		                    if(Bingo[i][j]==tem)
		                    {
		                    	return tem;
							} // 발생된 난수가 1~N*N 사이의 수일 경우 빙고판에 있는 같은 수를  tem으로 반환  
							
						    else if(Bingo[i][j]==0)
						     
						    break; 
						    //이미 0으로 바뀐 수 일경우 tem으로 받지 않음  
							
		                
					    }
					}
			    }

			    }
			   
				
				
					
				 
				
}
 

