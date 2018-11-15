#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#include "bingo.h"

int get_number_byme(int get)
{
	
	int num;
	int re=0;
	
	
	do
	{   
		re=0;
		if(get==0)
		{
			printf("숫자를 입력하세요 : \n");
		    scanf("%d",&num);
		
			if(num<1 || num>N*N)
			{
				re=1;
				printf("오류입니다. 숫자를 다시 입력하세요 : \n");
			    scanf("%d",&num);
				
			}
		
		}
		
	}/*이부분 숫자를 30을 입력하면 
	   오류입니다. 숫자를 다시 입력하세요 : 라고 하고
	   다시 30을 입력하면 또 오류 메세지가 나와야 하는데
	   다시 숫자를 입력하세요로 돌아감. 수정해야함*/ 

    while(re==1);
  
	
}
