#include<stdio.h>
#include<stdlib.h> 	
int main (void)
{	
	char n;
	int code=0;
	
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
	
	system("pause");             // �ù��e���Ȱ��A�õ��ݨϥΪ̫����N��
	system("CLS");               // �M���ù�
//_________________________________�H�W���Ĥ@�D
	printf("�п�J4 �ӼƦr���K�X(2023):");		//�L�X 
	scanf("%d",&code);
	if(code==2023)				//�P�_���� 
	{
		printf("��J���T!�w��i�J~\n");		//�L�X 
	}
	else
	{
		printf("�K�X��J���~!\n");			//�L�X 
		printf("%c", '\a');					//��Xĵ�i�n�T 
		return 0;				//�����{�� 
	}
//_________________________________�H�W���ĤG�D	
	system("CLS");               // �M���ù�
	//�L�X�D��� 
	{
		printf(" 																	      \n");
		printf("          __________________________________          \n");
		printf("         |                                  |							      \n");
		printf("         |                                  |							      \n");
		printf("         |         *     MENU      *        |							      \n");
		printf("         |                                  |							      \n");
		printf("         |         A ~ Z : Uppercase        |\n");
		printf("         |         a ~ z : Lowercase        |\n");
		printf("         |         0 ~ 9 : Digit            |\n");
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
