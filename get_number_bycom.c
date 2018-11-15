#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#include "bingo.h"

int get_number_bycom(int getcom)
{
	int number;
	int re;
	int a;
	int count=0;
	int checked[N*N];
	
	srand( (unsigned)time(NULL) );
	
	
	
	do
	{
		re=0;
		number = rand()%(N*N)+1;
		
		if(re==0)
		{    
			for(a=1;a<count;a++)
			{
				if(checked[a]==number)
				{
					re=1;
					break;
					printf("컴퓨터가 선택한 숫자 :%d",a);
				}
			}
		}
		
	}while(re==1);
	
	
 
}
