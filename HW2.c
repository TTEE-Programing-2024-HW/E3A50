#include<stdio.h>
#include<stdlib.h> 	
int main (void)
{	
	char c;//case A���ܼ� 
	int count = 0,password = 2023 ;//�Ĥ@�D�Ϊ��p�Ƹ�K�X 
	char MENU;//�D��檺��J 
	int i,j,n;// case B���ܼ� 
	/*printf(" 																	      \n");
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
	*/
	while(1)
	{
		{
			printf("\n");
			printf("\n");
			printf("         |    *****                  *      |\n");/*�ù��X�{�D���A*/ 
			printf("         |     ***  E3A 50  ���R��  ***     |\n");
			printf("         |      *                  *****    |\n");
			printf("          __________________________________ \n");
			printf("         |                                  |\n");
			printf("         |      *        MENU        *      |\n");
			printf("         |                                  |\n");
			printf("         |         a. �e�X�����T����        |\n");
			printf("         |         b. ��ܭ��k��            |\n");
			printf("         |         c. ����                  |\n");
			printf("         |                                  |\n");
			printf("         |                                  |\n");
			printf("         |__________________________________|\n");
		}
	
		printf("    �п�J�Q���檺�ﶵ: ");
		fflush(stdin);
		scanf("%c",&MENU);
		switch(MENU)
		{
			case 'a':
			case 'A':
				system("CLS"); // �M���ù�
				do 
				{
					printf("    �п�J�@�ӡ�a���졥n�����r��: ");		
					fflush(stdin); 					// ��input buffer �b�šA�`��bscanf()�e;
					scanf("%c",&c);
					if(c < 'a' || c > 'n')				 
 		  		    {
 		  		    	printf("��J���~!�Э��s��J~\n");	//�p�G�����A�N�n���@�Ӵ��ܦr�y�i����J�����C 
					}
				}
				while(c < 'a' || c > 'n');
			//	for(char A= c ; A>'a' ;A-- )
				{
			//	printf("%c",A);		
				}
    	    	getch();						// �����N��M�� 
				system("CLS"); 					// �M���ù�			
				break;
			case 'b':
			case 'B':
				system("cls"); // �M���ù�
				do
				{				
 	  	    	 	printf("�п�J�@��1��9�����n�G");
 	 	     	 	fflush(stdin); 					// ��input buffer �b�šA�`��bscanf()�e;
 	  			    scanf("%d", &n);
 	  			    if(n < 1 || n > 9)		//�p�G�����A�N�n���@�Ӵ��ܦr�y�i����J�����C 
 	 	 		    {
 	 	 		    	printf("��J���~!�Э��s��J~\n");	
					}
    			}
    	   		while(n < 1 || n > 9);
     	  		printf("���k��G\n");
      	  		for (i = 1; i <= n; i++) 
						{
      			      	for (j = 1; j <= n; j++) 
						{
      			          printf("  %d * %d = %2d  ",i,j, i * j);
      			      	}
      			     	printf("\n");
       	 		}
        		getch();						// �����N��M�� 
				system("CLS"); 					// �M���ù�
				break;
		}
	}
	

		
	
	system("PAUSE");
	return 0;
//_________________________________�H�W���ĥ|�D	
}
