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
			printf("���ڸ� �Է��ϼ��� : \n");
		    scanf("%d",&num);
		
			if(num<1 || num>N*N)
			{
				re=1;
				printf("�����Դϴ�. ���ڸ� �ٽ� �Է��ϼ��� : \n");
			    scanf("%d",&num);
				
			}
		
		}
		
	}/*�̺κ� ���ڸ� 30�� �Է��ϸ� 
	   �����Դϴ�. ���ڸ� �ٽ� �Է��ϼ��� : ��� �ϰ�
	   �ٽ� 30�� �Է��ϸ� �� ���� �޼����� ���;� �ϴµ�
	   �ٽ� ���ڸ� �Է��ϼ���� ���ư�. �����ؾ���*/ 

    while(re==1);
  
	
}
