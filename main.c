#include "bingo.h"
#include "print bingo.h"
#define N 5
#define M 3
#include "get_number_byme.h"
#include "process_bingo.h"
#include "count_bingo.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	printf("���� ���� ����!\n");
	printf("\n");

	int mybingo[N][N];
	int combingo[N][N];
	
	int count = 0;
    int num;
    int tem;
	int number;
	
	int Iwin,comwin;
	
	
	
    srand( (unsigned)time(NULL) );
	
	initiate_bingo(mybingo);
	initiate_bingo(combingo);
	
	
	do
	{
		Iwin=0;
	    comwin=0;
	
	print_bingo(mybingo);
	print_bingo(combingo);
	
    
    number=get_number_byme(mybingo);
    process_bingo(mybingo,number);
    process_bingo(combingo,number);
    
    
    
    number=get_number_bycom(combingo);
    process_bingo(combingo,number);
    process_bingo(mybingo,number);
    
    Iwin=count_bingo(mybingo);
    comwin=count_bingo(combingo);
    
   
		
	}while((Iwin<M)&&(comwin<M));
	

    

   /* 
   
   �ߺ����� Ȯ���ϴ� �Լ�, �Է¹��� ���� �迭�� �ְ� �ʱ�ȭ �ϰ� 0 1�� Ȯ��
   	int i,j;
    int temp[N*N];
	int tem;
   
   
   
   do while �̿��ؼ� ������ �� �� ���� ����ϴ°� ��������. 
   
   
   
   
   {for (i=0;i<N;i++){
		
		for(j=0;j<N;j++)
		{   
			while(1)
				{ 
				if(temp[tem-1]== 0)
					{
					  Bingo[i][j]= tem;
					  temp[tem-1]= 1;
					  break;
					}
	
   
   
   
   */
    
    
    
	return 0;
}




