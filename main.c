#include "bingo.h"
#include "print bingo.h"
#define N 4
#include "get_number_byme.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	printf("���� ���� ����!\n");
	printf("\n");

	int mybingo[N][N];
	int combingo[N][N];
	
	int checked[N*N];
	int count = 0;
	int check_bingo(int arr[N][N]);
	int number;
	int process_bingo(int arr[N][N], int number);
	int Iwin,comwin;
	
    srand( (unsigned)time(NULL) );
	
	initiate_bingo(mybingo);
	print_bingo(mybingo);
	
	initiate_bingo(combingo);
	print_bingo(combingo);
	
    get_number_byme(mybingo);
    
    get_number_bycom(combingo);
    

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




