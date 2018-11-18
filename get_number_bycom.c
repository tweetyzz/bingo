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
					tem = rand()%(N*N)+1;
				
				if(tem>0 && tem<=N*N)
				{
					 for (i=0;i<N;i++)
	                {
		                for(j=0;j<N;j++)
		                {   
		                    if (Bingo[i][j]==tem)
		                    {
		                    	return tem;
							}
		                
					    }
					}
			    }

			    }
			    printf("컴퓨터가 입력한 숫자 :%d\n",tem);
	            printf("\n");
	    
			/*while(1)
			
				{
					tem = rand()%(N*N)+1;
					 
					if(temp[tem-1]== 0)
					{
					  Bingo[i][j]= tem;
					  temp[tem-1]= 1;
					}
					else if(temp[tem]== 0)
					{
					  Bingo[i][j]= tem;
					  temp[tem]= 1;
					}*/
					
				
				
					
				//컴퓨터로부터 랜덤숫자를 받음 
	    //return tem;
	 
	 
				
}
 

