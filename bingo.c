// �Լ��� ���� ȣ���ϴ½�����
/* 1.������(�����Լ���)�� ���� ����, ��ǻ�Ͳ� ȣ���ϴ� ������.
   2.��ǻ���� �������� ��turn ���� ���ŵǾ����. ���� �� �ʿ�� ����. 
    �� �����ǵ� ���� ������ ����, ��ǻ�Ͱ� ������ ���ڸ� -1�� ä��� ���ŵǾ����.
   3.���� �������� �Լ��� �������. 
   4.turn�� ���� �Լ��� ��������.
   5.��ȣ�Լ� m �����ؾ���. 
   */
   #include <stdlib.h>
   
   #define N 5
   
   void initiate_bingo(){
   {
   	int bingo[N][N];
   	
   	srand( (unsigned)time(NULL) );
    
    int rand;
	//(rand() % n)+1
    int i,j;
    int baeyeol[100];


    for (i=0;i<N;i++){
		
		for(j=0;j<N;j++)
		
		bingo[i][j]=0;
		}
		
		
	for (i=0;i<N;i++){
		
		for(j=0;j<N;j++)
		
		printf("%d",bingo[i][j]);
		}
		
		
		for (i=0;i<N;i++){
		
		for(j=0;j<N;j++)
		
		printf("%d\n",bingo[i][j]);
		}
		
		
	}
      printf("\n");
   }
   
