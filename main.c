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

	int mybingo[N][N]; // �� ������ ���� 
	int combingo[N][N];// ��ǻ�� ������ ���� 
	
	int count = 0; //���� �� �� ���� �� 
    int num; //���� �Է��ϴ� ����  
    int tem; //��ǻ�Ͱ� �Է��ϴ� ���� 
	int number; 
	int turn = 1; //�õ� Ƚ��  
	
	int Iwin,comwin; // ���� ���� �� ��  : Iwin, ��ǻ�ͺ��� �ټ�  :comwin 
	
	
	
    srand( (unsigned)time(NULL) ); //���� �߻� 
	
	initiate_bingo(mybingo); //�� �ʱ� ������  
	initiate_bingo(combingo);//��ǻ�� �ʱ� ������  
	
	
	while(1)
	{
		Iwin=0; // �� ���� �� �� �ʱ�ȭ  
	    comwin=0;// ��ǻ�� ���� �� �� �ʱ�ȭ  
	
	print_bingo(mybingo); // �� ������ ���  
	//print_bingo(combingo);
	
    
    number=get_number_byme(mybingo); //�� ���� �޴� �Լ�  
    process_bingo(mybingo,number); //������ ���� ���ڸ� 0���� �ٲٴ� �Լ�, �� �����ǿ���  
    process_bingo(combingo,number);//��ǻ������ ���� ���ڸ� 0���� �ٲٴ� �Լ�, �� �����ǿ���
    
    
    
    number=get_number_bycom(combingo); //��ǻ�� ���� �޴� �Լ�  
    process_bingo(combingo,number);//������ ���� ���ڸ� 0���� �ٲٴ� �Լ�, ��ǻ��  �����ǿ���
    process_bingo(mybingo,number);//��ǻ������ ���� ���ڸ� 0���� �ٲٴ� �Լ�, ��ǻ�� �����ǿ���
    
    
    
    Iwin=count_bingo(mybingo);// 0 ���� �� ���� ���� �Լ� , �� �����ǿ���  
    
    printf("���� ���� �� ���� %d �Դϴ�. \n",Iwin); //�� ���� �� �� ���  
    
    
    comwin=count_bingo(combingo);// 0���� �� ���� ���� �Լ� , ��ǻ�� �����ǿ���  
    
	printf("������ ���� �� ���� %d �Դϴ�. \n",comwin); // ��ǻ�� �� �� ���  
	printf("\n");
	
	turn++;// �� �� ���°�. �ٵ� �ʱ� �Լ� ��µ� ���� ���� �Ʒ����� -1 ����. 
	  
	if(Iwin == M){
		printf("�¸��ϼ̽��ϴ�!(�õ�Ƚ�� : %dȸ) \n",turn-1);//M �� �� ���� �� ���� ���� �� �¸��ϼ̽��ϴ� ���. turn-1 �� ������ ���� ����. 
		break;
		}
	else if (comwin == M){
		printf("�й��ϼ̽��ϴ�!(�õ�Ƚ�� : %dȸ) \n",turn-1);//M �� ��ǻ��  ���� �� ���� ���� �� �й��ϼ̽��ϴ� ���. turn-1 �� ������ ���� ����.
		break;
		}	
	}
	 
	return 0;
}




