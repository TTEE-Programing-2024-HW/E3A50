#include<stdio.h>
#include<stdlib.h> 	
int main (void)
{	
	char n;
	int count = 0,password = 2023 ;
	
	printf(" 																	      \n");
	printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *   \n");
	printf(" 																	      \n");
	printf(" 																	      \n");
	printf("    &    ++++  ++++  ++++  ++++  ++++  ++++  ++++  ++++  ++++  +   &      \n");
	printf("   &     +  ++++  ++++  ++++  ++++  ++++  ++++  ++++  ++++  ++++    &     \n");
	printf("  $      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     &    \n");
	printf("   &                                                                &     \n");
    printf("    $     EEEEEEE   3333        A          555555     00000        &      \n");
	printf("   &      EE            3      A A        55         00   00        &     \n");
	printf("  $       EEEEEE    3333      A   A      5555555    00   00          &    \n");
	printf("   &      EE            3    AA A AA         55    00   00          &     \n");
	printf("    $     EEEEEEE   3333    AA  �@ AA   555555      00000          &      \n");
	printf("   &                                                                &     \n");
	printf("  $      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     &    \n");
	printf("   &     ++++  ++++  ++++  ++++  ++++  ++++  ++++  ++++  ++++  +    &     \n");
	printf("    &    +  ++++  ++++  ++++  ++++  ++++  ++++  ++++  ++++  ++++   &      \n");
	printf("    																      \n");
	printf("   																	      \n");
	printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *   \n");
	printf(" 																	      \n");
	//system("pause");             // �ù��e���Ȱ��A�õ��ݨϥΪ̫����N��
	//system("CLS");               // �M���ù�
	while (count < 3) 
	{
        printf("�п�J�|�ӼƦr���K�X�G");
        scanf("%d",&password);
        count++;
        if (password==2023)
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
	//�L�X�D��� 
	{
		printf(" 																	      \n");
		printf("          __________________________________          \n");
		printf("         |                                  |							      \n");
		printf("         |                                  |							      \n");
		printf("         |         *     MENU      *        |							      \n");
		printf("         |                                  |							      \n");
		printf("         |         a. �e�X�����T����        |\n");
		printf("         |         b. ��ܭ��k��            |\n");
		printf("         |         c. ����                  |\n");
		printf("         |     Otherwise : My Class         |							      \n");
		printf("         |                 Seat number      |							      \n");
		printf("         |                 My namer         |							      \n");
		printf("         |                                  |							      \n");	
		printf("         |  please input a character later  |\n");
		printf("    	 |  will output the corresponding   |\n");
		printf("         |                                  |\n");
		printf("         |                                  |							      \n");
		printf("         |__________________________________|							      \n");
	}
//_________________________________�H�W���ĤT�D	
	printf("�п�J�@�Ӧr��:");
	fflush(stdin); 					// ��input buffer �b�šA�`��bscanf()�e;
	scanf("%c",&n);
	if( (n>='A') && (n<='Z') )		//�P�_����(n �b A~Z) 
	{
		printf("Uppercase\n");
	}
		else if( (n>='a') && (n<='z') )		//�P�_����(n �b a~z)
		{
			printf("Lowercase\n");	
		}
			else if( (n>='0') && (n<='9') )		//�P�_����(n �b 0~9)
			{
				printf("Digit\n");
			}	
				else 
				{
				printf("�Z��:E3A\n�y��:50\n�m�W:���R��\n");
				}
	system("PAUSE");
	return 0;
//_________________________________�H�W���ĥ|�D	
}
