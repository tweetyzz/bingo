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
					tem = rand()%(N*N)+1; //�����߻�  
				
				if(tem>0 && tem<=N*N)
				{
					 for (i=0;i<N;i++)
	                {
		                for(j=0;j<N;j++)
		                {   
		                    if(Bingo[i][j]==tem)
		                    {
		                    	return tem;
							} // �߻��� ������ 1~N*N ������ ���� ��� �����ǿ� �ִ� ���� ����  tem���� ��ȯ  
							
						    else if(Bingo[i][j]==0)
						     
						    break; 
						    //�̹� 0���� �ٲ� �� �ϰ�� tem���� ���� ����  
							
		                
					    }
					}
			    }

			    }
			   
				
				
					
				 
				
}
 

