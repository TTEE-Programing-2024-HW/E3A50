//HW4 
//�D��: ²�����Z�t�� 

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <conio.h>
#define MAX_STUDENTS 10
#define MIN_STUDENTS 5
#define NAME_LENGTH 50
/* ����ŧi */
typedef struct 
{
    char name[NAME_LENGTH];
    int id;
    int math;
    int physics;
    int english;
    float average;
} Student;

void menu(void);	//�I�s�Ƶ{���D���e��
void mainMenu(void);// �ĤT�D���禡
void displayStudentData(Student students[], int n);// �ĥ|�D���禡
void searchStudentByName(Student students[], int n);
void sortAndDisplayStudentsByAverageGrade(Student students[], int n);
int getStudentCount(void);
void inputStudentData(Student students[], int n);

Student students[MAX_STUDENTS]; // �ǥ͸�ƥε��c���}�C��{ 
int n; // �����ܼ�
void picture(void); //�I�s�Ƶ{���ӤH�ʭ� 
 
int main (void)
{	
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
				mainMenu();			//�I�s�ĤT�D���禡		
    	    	getch();						// �����N��M�� 
				system("CLS"); 					// �M���ù�			
				break;
//_________________________________�H�W���ĤT�D					
			case 'b':
				system("cls"); // �M���ù�
				if (n == 0) 
				{
                	printf("�|����J����ǥ͸�ơC\n");
                } 
				else 
				{
                    displayStudentData(students, n);
                }		
        		getch();						// �����N��M�� 
				system("CLS"); 					// �M���ù�
				break;//���X case b
//_________________________________�H�W���ĥ|�D	
			case 'c':
				system("CLS"); 					// �M���ù�
    			if (n == 0) 
				{
                    printf("�|����J����ǥ͸�ơC\n");
                } 
				else 
				{
                    searchStudentByName(students, n);
                }
				getch();						// �����N��M�� 
				system("CLS"); 					// �M���ù�
				break;
//_________________________________�H�W���Ĥ��D
			case 'd':
				system("CLS"); 					// �M���ù�
    			if (n == 0) 
				{
                    printf("�|����J����ǥ͸�ơC\n");
                } 
				else 
				{
					//���������Z�ƧǨ���ܾǥͪ��m�W�B�Ǹ��Υ������Z 
                    sortAndDisplayStudentsByAverageGrade(students, n); 
                }
				getch();						// �����N��M�� 
				system("CLS"); 					// �M���ù�
				break;
//_________________________________�H�W���Ĥ��D	
			case 'e':
				do//do-while�j�� 
				{
					printf("�аݬO�_�n�~�����{��? [�O] �п�J(Y�By)�A[�_] �п�J(N�Bn) :\n"); 
					fflush(stdin);//�M�ſ�J�w�İ�
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
/*____________________�H�U���ĤT�D�ҥΤ��{��________________________*/ 
void inputStudentData(Student students[], int n) //�Ω�Ū���ǥ͸�ƨöi�榳�ĩ��ˬd 
{
    for (int i = 0; i < n; i++) 
	{
        printf("��J��%d��ǥͪ���ơG\n", i + 1);

        printf("�m�W�G");
        fgets(students[i].name, NAME_LENGTH, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';  // �h�������

        printf("�Ǹ��]6���ơ^�G");
        while (scanf("%d", &students[i].id) != 1 || students[i].id < 100000 || students[i].id > 999999) 
		{
            printf("�Ǹ��L�ġA�Э��s��J�Ǹ��]6���ơ^�G");
            fflush(stdin);//�M�ſ�J�w�İ�
        }

        printf("�ƾǦ��Z�]0~100���^�G");
        while (scanf("%d", &students[i].math) != 1 || students[i].math < 0 || students[i].math > 100) 
		{
            printf("���Z�L�ġA�Э��s��J�ƾǦ��Z�]0~100���^�G");
            fflush(stdin);//�M�ſ�J�w�İ�
        }

        printf("���z���Z�]0~100���^�G");
        while (scanf("%d", &students[i].physics) != 1 || students[i].physics < 0 || students[i].physics > 100) 
		{
            printf("���Z�L�ġA�Э��s��J���z���Z�]0~100���^�G");
            fflush(stdin);//�M�ſ�J�w�İ�
        }

        printf("�^�妨�Z�]0~100���^�G");
        while (scanf("%d", &students[i].english) != 1 || students[i].english < 0 || students[i].english > 100) 
		{
            printf("���Z�L�ġA�Э��s��J�^�妨�Z�]0~100���^�G");
            fflush(stdin);//�M�ſ�J�w�İ�
        }

        fflush(stdin);//�M�Žw�İ�
        
        students[i].average = (students[i].math + students[i].physics + students[i].english) / 3.0;//�p�⥭�� 
    }
}
//�n�D�ϥΪ̿�J�A�ݭn��g�h�ֵ����H�Ƹ�� 
int getStudentCount() 
{
    int n;
    printf("�п�J�ǥͪ��ƶq�]%d��%d�^�G", MIN_STUDENTS, MAX_STUDENTS);
    while (scanf("%d", &n) != 1 || n < MIN_STUDENTS || n > MAX_STUDENTS) 
	{
        printf("�ƶq�L�ġA�Э��s��J�ǥͼƶq�]%d��%d�^�G", MIN_STUDENTS, MAX_STUDENTS);
        fflush(stdin);//�M�ſ�J�w�İ�
    }
    fflush(stdin);//�M�ſ�J�w�İ�
    return n;
}

void mainMenu() 
{
	n = getStudentCount();
	inputStudentData(students, n);       
}
/*____________________�H�W���ĤT�D�ҥΤ��{��________________________*/ 
/*�L�X�Ҧ��}�C�������*/ 
void displayStudentData(Student students[], int n)
{
    printf("�ǥ͸�Ʀp�U�G\n");
    for (int i = 0; i < n; i++) 
	{
        printf("�m�W�G%s\n", students[i].name);
        printf("�Ǹ��G%d\n", students[i].id);
        printf("�ƾǦ��Z�G%d\n", students[i].math);
        printf("���z���Z�G%d\n", students[i].physics);
        printf("�^�妨�Z�G%d\n", students[i].english);
        printf("�������Z�G%.1f\n", students[i].average);
        printf("---------------------\n");
    }
}
/*_______________________�H�U���Ĥ��D�ҥΤ��{��_________________________*/
/*���禡�i�H�b�ϥΪ̿�J�m�W��A�M��۹��������Z�A�ÿ�X���e*/ 
void searchStudentByName(Student students[], int n)
{
    char searchName[NAME_LENGTH];
    printf("�п�J�n�j�M���m�W�G");
    fflush(stdin);
    fgets(searchName, NAME_LENGTH, stdin);
    searchName[strcspn(searchName, "\n")] = '\0';

    int found = 0;
    for (int i = 0; i < n; i++) 
	{
        if (strcmp(students[i].name, searchName) == 0) 
		{
            printf("�m�W�G%s\n", students[i].name);
            printf("�Ǹ��G%d\n", students[i].id);
            printf("�ƾǦ��Z�G%d\n", students[i].math);
            printf("���z���Z�G%d\n", students[i].physics);
            printf("�^�妨�Z�G%d\n", students[i].english);
            printf("�������Z�G%.1f\n", students[i].average);
            printf("-------------------------\n");
            found = 1;
            break;
        }
    }
    if (!found) 
	{
        printf("��Ƥ��s�b�C\n");
    }
}
/*_______________________�H�W���Ĥ��D�ҥΤ��{��_________________________*/
/*_______________________�H�U���Ĥ��D�ҥΤ��{��_________________________*/
/* ���禡�|�b��椤��� 'd' �ɳQ�I�s�C
�o�˥i�H���ϥΪ̬d�ݫ��������Z���C���ǱƦC���ǥ͸�ơC*/ 
void sortAndDisplayStudentsByAverageGrade(Student students[], int n) 
{
    // �ϥ�²�檺�_�w�ƧǪk�ӫ��������Z�Ƨ�
    for (int i = 0; i < n - 1; i++) 
	{
        for (int j = 0; j < n - 1 - i; j++) 
		{
            if (students[j].average < students[j + 1].average) 
			{
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
    // �C�X�ǥͪ��m�W�B�Ǹ��Υ������Z
    printf("�̥������Z�ƧǪ��ǥ͸�Ʀp�U�G\n");
    for (int i = 0; i < n; i++) 
	{
        printf("�m�W�G%s\n", students[i].name);
        printf("�Ǹ��G%d\n", students[i].id);
        printf("�������Z�G%.1f\n", students[i].average);
        printf("-------------------------\n");
    }
}
/*_______________________�H�W���Ĥ��D�ҥΤ��{��_________________________*/

