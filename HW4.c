//HW4 
//�D��: ²�����Z�t�� 
#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 10
#define MIN_STUDENTS 5
#define NAME_LENGTH 50

/* �Ƶ{�� */


int main (void)
{	
	//�Ƶ{���ŧi
	void menu(void); //�D���e��
	void picture(void); //�ӤH����e�� 
	//�ܼƫŧi
	int count = 0,password = 2024 ;//�Ĥ@�D�Ϊ��p�Ƹ�K�X 
	char MENU;		//�D��檺��J�ܼ� 	
	char OPTION;	//case e���ܼ� 
	
	/*�{�����e�p�U*/ 
	picture();		//�I�s�Ƶ{���A��X�ӤH����e�� 
	
	while (count < 3) //�p�ƿ�J���� 
	{
        printf("�п�J�|�ӼƦr���K�X�G");
        scanf("%d",&password);
        count++;				//�p��+1 
        if (password==2024)		//�P�_�K�X 
		{
            printf("��J���T�I�w��~\n");
            break;
        } 
		else 
		{
	        printf("�K�X���~�A�w��J: %d ���C\n", count);
            if (count == 3) 
			{
        		printf("��J�w�s����~�T���A�n�J�����I\n");
      		  printf("%c", '\a');					//��Xĵ�i�n�T 
				return 0;
    		}
    	}
    }
//_________________________________�H�W���Ĥ@�D	
	system("CLS");               // �M���ù�

	while(1)//���ư��� 
	{
		menu();//�l��Ƶ{�� �L�X�D��� 
		printf("          �п�J�Q���檺�ﶵ(a~e): ");
		fflush(stdin);
		scanf("%c",&MENU);
//_________________________________�H�W���ĤG�D	
		
		switch(MENU)	//���(�h����� ) 
		{
			case 'a':
				system("CLS"); // �M���ù�
				
				
				
				
    	    	getch();						// �����N��M�� 
				system("CLS"); 					// �M���ù�			
				break;
//_________________________________�H�W���ĤT�D					
			case 'b':
				system("cls"); // �M���ù�
						
        		getch();						// �����N��M�� 
				system("CLS"); 					// �M���ù�
				break;//���X case b
//_________________________________�H�W���ĥ|�D	
			case 'c':
    			
				getch();						// �����N��M�� 
				system("CLS"); 					// �M���ù�
				break;
//_________________________________�H�W���Ĥ��D
			case 'd':
    			
				getch();						// �����N��M�� 
				system("CLS"); 					// �M���ù�
				break;
//_________________________________�H�W���Ĥ��D	
			case 'e':
				do//do-while�j�� 
				{
					printf("�аݬO�_�n�~�����{��? [�O] �п�J(Y�By)�A[�_] �п�J(N�Bn) :\n"); 
					fflush(stdin);
					scanf("%c",&OPTION);
					if(OPTION=='y'||OPTION=='Y')		//�p�G��JY�άOy 
					{
						getch();						// �����N��M�� 
						system("CLS"); 					// �M���ù�
						break;							//���Xcase 
					}
					else if(OPTION=='n'||OPTION=='N')	//�p�G��JN�άOn 
					{
						return 0;//�����{�� 
					}
					else //if( (OPTION!='y'||OPTION!='Y') || (OPTION!='n'||OPTION!='N') )
					{
					 	printf("��J���~\n");//�����O�N�X�{���ܦr�y 
					}
				}
				while( (OPTION!='y'||OPTION!='Y') || (OPTION!='n'||OPTION!='N') );//���J������ { Y,y,N,n }�N�^��do�A���@�� 
		}
	}
	system("PAUSE");
	return 0;
//_________________________________�H�W���ĤC�D	
}
/***************�H�U�O�Ƶ{��********************/ 
void picture(void)//�ӤH�ƭ������e��X 
{
	printf(" 																	      \n");
	printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *   \n");
	printf(" 																	      \n");
	printf("   &     ++++  ++++  ++++  ++++  ++++  ++++  ++++  ++++  ++++  +    &     \n");
	printf("    &    +  ++++  ++++  ++++  ++++  ++++  ++++  ++++  ++++  ++++     &    \n");
	printf("   &                                                                  &   \n");
	printf("  &      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     &    \n");
	printf("   &                                                                &     \n");
    printf("    &         EEEEEEE    33333       A          555555     00000     &    \n");
	printf("   &         EE            33       A A        55         00   00     &   \n");
	printf("  &         EEEEEE     33333       A   A      5555555    00   00       &  \n");
	printf("   &       EE            33       AA A AA         55    00   00       &   \n");
	printf("    &     EEEEEEE    33333       AA  �@ AA   555555      00000       &    \n");
	printf("   &                                                                &     \n");
	printf("  &      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     &    \n");
	printf("   &                                                                  &   \n");
	printf("    &    ++++  ++++  ++++  ++++  ++++  ++++  ++++  ++++  ++++  +     &    \n");
	printf("   &     +  ++++  ++++  ++++  ++++  ++++  ++++  ++++  ++++  ++++    &     \n");
	printf("    																      \n");
	printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *   \n");
	printf(" 																	      \n");
	return;
}
/*____________________________________________*/ 
void menu(void)//��X�D��檺�Ϫ� 
{
	printf("\n");
	printf("\n");
	printf("          ______________________________________\n");
	printf("         |                                      |\n");
	printf("         |     *****                  *         |\n");/*�ù��X�{�D���A*/ 
	printf("         |      ***  E3A 50  ���R��  ***        |\n");
	printf("         |       *                  *****       |\n");
	printf("         |______________________________________|\n");
	printf("         |                                      |\n");
	printf("         |       *     Grade System   *         |\n");
	printf("         |                                      |\n");
	printf("         |       a. Enter student grades        |\n");
	printf("         |       b. Display student grades      |\n");
	printf("         |       c. Search for student grades   |\n");
	printf("         |       d. Grade ranking               |\n");
	printf("         |       e. Exit system                 |\n");
	printf("         |______________________________________|\n");
	printf("\n");
	return;
}
