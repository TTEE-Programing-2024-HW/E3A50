#include<stdio.h>
#include<stdlib.h> 	
#include <time.h> 
#include <stdbool.h>
#define ROWS 9
#define COLS 9

char seat_chart[ROWS][COLS];// ��l�Ʈy���

void generate_random_seats() // �H�����ͤw�Q�w�q���y��
{
    srand(time(NULL));
    for (int i = 0; i < 10; i++) 
	{
        int row = rand() % ROWS;
        int col = rand() % COLS;
        seat_chart[row][col] = '*';
    }
}

void display_seat_chart() // ��ܮy���
{
    printf("\\123456789\n");
    for (int i = 0; i < ROWS; i++) 
	{
        printf("%d", i + 1);
        for (int j = 0; j < COLS; j++) 
		{
            printf("%c", seat_chart[i][j]);
        }
        printf("\n");
    }
}

// �ˬd�y��O�_�i��(4)
int check_seat_available(int start_row, int start_col, int num_seats, int direction) 
{
    if (direction == 0) {  // �ˬd������V
        for (int i = 0; i < num_seats; i++) {
            if (seat_chart[start_row][start_col + i] == '*') {
                return 0;  // �y�줣�i��
            }
        }
    } else {  // �ˬd������V
        for (int i = 0; i < num_seats; i++) {
            if (seat_chart[start_row + i][start_col] == '*') {
                return 0;  // �y�줣�i��
            }
        }
    }
    return 1;  // �y��i��
}

// ��ܮy��---------------------------------------�y��|�b�P�@��!!!! (4)
void choose_seats(int num_seats) {
    int start_row, start_col;

    // �H����ܰ_�l�y��
    do {
        start_row = rand() % ROWS;
        start_col = rand() % (COLS - num_seats + 1); // �T�O�Ѿl�y��ƨ���
    } while (!check_seat_available(start_row, start_col, num_seats, 0));

    // �N�y��аO�� '@'
    for (int i = 0; i < num_seats; i++) {
        seat_chart[start_row][start_col + i] = '@';
    }
}

int main (void)
{	
	//�Ƶ{���ŧi
	void menu(void); //�D���e��
	void picture(void); //�ӤH����e�� 
	
	//�ܼƫŧi
	int count = 0,password = 2024 ;//�Ĥ@�D�Ϊ��p�Ƹ�K�X 
	char MENU;		//�D��檺��J�ܼ� 	
	char c,A,B;		//case A���ܼ� 
	int space;		//case A���Ů��ܼ� 
	int i,j,n;		// case B���ܼ� 
	char OPTION;	//case D���ܼ� 
	
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
		printf("          �п�J�Q���檺�ﶵ(a~d): ");
		fflush(stdin);
		scanf("%c",&MENU);
//_________________________________�H�W���ĤG�D	
		
		switch(MENU)	//���(�h����� ) 
		{
			case 'a':
				system("CLS"); // �M���ù�
				for (int i = 0; i < ROWS; i++)
				{
        			for (int j = 0; j < COLS; j++) 
					{
            		seat_chart[i][j] = '-';
        			}
    			}
    			generate_random_seats();// ���ͤw�Q�w�q���y��
   				printf("�{���y���G\n");
   				display_seat_chart();// ��ܮy���
    	    	getch();						// �����N��M�� 
				system("CLS"); 					// �M���ù�			
				break;
//_________________________________�H�W���ĤT�D					
			case 'b':
				system("cls"); // �M���ù�
				// ��l�Ʈy���
    			for (int i = 0; i < ROWS; i++) {
       			for (int j = 0; j < COLS; j++) {
      			seat_chart[i][j] = '-';
        		}
    			}
   				// ���ͤw�Q�w�q���y��
	    		generate_random_seats();
	
		    	int num_seats;
			    char input;
    			    printf("�п�J�ݭn���y��ƶq (1~4)�G");
        			scanf("%d", &num_seats);

       				if (num_seats < 1 || num_seats > 4) 
					{
            			printf("��J�L�ġI\n");
            			continue;
        			}

        			// ��ܮy��
        			choose_seats(num_seats);

        			// ��ܮy���
        			printf("�y���G\n");
        			display_seat_chart();
				
        			// �߰ݨϥΪ̬O�_���N
        			printf("�O�_���N�o�Ӧw�ơH(y/n): ");
        			scanf(" %c", &input);

        			if (input != 'y' && input != 'Y') 
					{
         			// �M���y��w��
            			for (int i = 0; i < ROWS; i++) 
						{
                			for (int j = 0; j < COLS; j++) 
							{
                	    		if (seat_chart[i][j] == '@') 
								{
                	        		seat_chart[i][j] = '-';
                	    		}
                			}
            			}
        			} 
					/*else 
					{
            			//system("clear || cls");// �M���ù�
        			}*/			
        		getch();						// �����N��M�� 
				system("CLS"); 					// �M���ù�
				break;
//_________________________________�H�W���ĥ|�D	
			case 'd':
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
//_________________________________�H�W���Ĥ��D	
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
	printf("          __________________________________ \n");
	printf("         |                                  |\n");
	printf("         |    *****                  *      |\n");/*�ù��X�{�D���A*/ 
	printf("         |     ***  E3A 50  ���R��  ***     |\n");
	printf("         |      *                  *****    |\n");
	printf("         |__________________________________|\n");
	printf("         |                                  |\n");
	printf("         |      *   Booking System   *      |\n");
	printf("         |                                  |\n");
	printf("         |       a. Available seats         |\n");
	printf("         |       b. Arrange for you         |\n");
	printf("         |       c. Choose by yourself      |\n");
	printf("         |       d. Exit                    |\n");
	printf("         |                                  |\n");
	printf("         |__________________________________|\n");
	printf("\n");
	return;
}
