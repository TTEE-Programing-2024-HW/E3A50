#include<stdio.h>
#include<stdlib.h> 	
#include <time.h> 
#define ROWS 9
#define COLS 9

char seat_chart[ROWS][COLS];// 初始化座位表

void generate_random_seats() // 隨機產生已被預訂的座位
{
    srand(time(NULL));
    for (int i = 0; i < 10; i++) 
	{
        int row = rand() % ROWS;
        int col = rand() % COLS;
        seat_chart[row][col] = '*';
    }
}

void display_seat_chart() // 顯示座位表
{
    printf("\\123456789\n");
    for (int i = ROWS - 1; i >= 0; i--) 
	{
        printf("%d", i + 1);
        for (int j = 0; j < COLS; j++) 
		{
            printf("%c", seat_chart[i][j]);
        }
        printf("\n");
    }
}

int main (void)
{	
	//副程式宣告
	void menu(void); //主選單畫面
	void picture(void); //個人風格畫面 
	
	//變數宣告
	int count = 0,password = 2024 ;//第一題用的計數跟密碼 
	char MENU;		//主選單的輸入變數 	
	char c,A,B;		//case A的變數 
	int space;		//case A的空格變數 
	int i,j,n;		// case B的變數 
	char OPTION;	//case D的變數 
	
	/*程式內容如下*/ 
	picture();		//呼叫副程式，輸出個人風格畫面 
	
	while (count < 3) //計數輸入次數 
	{
        printf("請輸入四個數字的密碼：");
        scanf("%d",&password);
        count++;				//計數+1 
        if (password==2024)		//判斷密碼 
		{
            printf("輸入正確！歡迎~\n");
            break;
        } 
		else 
		{
	        printf("密碼錯誤，已輸入: %d 次。\n", count);
            if (count == 3) 
			{
        		printf("輸入已連續錯誤三次，登入結束！\n");
      		  printf("%c", '\a');					//輸出警告聲響 
				return 0;
    		}
    	}
    }
//_________________________________以上為第一題	
	system("CLS");               // 清除螢幕

	while(1)//重複執行 
	{
		menu();//召喚副程式 印出主選單 
		printf("          請輸入想執行的選項(a~d): ");
		fflush(stdin);
		scanf("%c",&MENU);
//_________________________________以上為第二題	
		
		switch(MENU)	//選單(多重選擇 ) 
		{
			case 'a':
				system("CLS"); // 清除螢幕
				for (int i = 0; i < ROWS; i++)
				{
        			for (int j = 0; j < COLS; j++) 
					{
            		seat_chart[i][j] = '-';
        			}
    			}
    			generate_random_seats();// 產生已被預訂的座位
   				printf("現有座位表：\n");
   				display_seat_chart();// 顯示座位表
    	    	getch();						// 按任意鍵清除 
				system("CLS"); 					// 清除螢幕			
				break;
//_________________________________以上為第三題					
			case 'b':
			case 'B':
				system("cls"); // 清除螢幕
				do//do-while迴圈 
				{				
 	  	    	 	printf("請輸入一個1至9的整數n：");
 	 	     	 	fflush(stdin); 					// 使input buffer 淨空，常放在scanf()前;
 	  			    scanf("%d", &n);
 	  			    if(n < 1 || n > 9)		//如果有錯，就要給一個提示字句告知輸入有錯。 
 	 	 		    {
 	 	 		    	printf("輸入錯誤!請重新輸入~\n");	
					}
    			}
    	   		while(n < 1 || n > 9);//判斷輸入值是否在 1~9 之間 ，沒有就重做，有就往下做 
     	  		printf("乘法表：\n");
      	  		for (i = 1; i <= n; i++) 
						{
      			      	for (j = 1; j <= n; j++) 
						{
      			          printf("  %d * %d = %2d  ",i,j, i * j);//保留適當的空間有利排版 
      			      	}
      			     	printf("\n");
       	 		}
        		getch();						// 按任意鍵清除 
				system("CLS"); 					// 清除螢幕
				break;
//_________________________________以上為第四題	
			case 'd':
				do//do-while迴圈 
				{
					printf("請問是否要繼續執行程式? [是] 請輸入(Y、y)，[否] 請輸入(N、n) :\n"); 
					fflush(stdin);
					scanf("%c",&OPTION);
					if(OPTION=='y'||OPTION=='Y')		//如果輸入Y或是y 
					{
						getch();						// 按任意鍵清除 
						system("CLS"); 					// 清除螢幕
						break;							//跳出case 
					}
					else if(OPTION=='n'||OPTION=='N')	//如果輸入N或是n 
					{
						return 0;//結束程式 
					}
					else //if( (OPTION!='y'||OPTION!='Y') || (OPTION!='n'||OPTION!='N') )
					{
					 	printf("輸入錯誤\n");//都不是就出現提示字句 
					}
				}
				while( (OPTION!='y'||OPTION!='Y') || (OPTION!='n'||OPTION!='N') );//當輸入不等於 { Y,y,N,n }就回到do再做一次 
		}
	}
	system("PAUSE");
	return 0;
//_________________________________以上為第五題	
}
/***************以下是副程式********************/ 
void picture(void)//個人化面的內容輸出 
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
	printf("    &     EEEEEEE    33333       AA  　 AA   555555      00000       &    \n");
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
void menu(void)//輸出主選單的圖表 
{
	printf("\n");
	printf("\n");
	printf("          __________________________________ \n");
	printf("         |                                  |\n");
	printf("         |    *****                  *      |\n");/*螢幕出現主選單，*/ 
	printf("         |     ***  E3A 50  陳昱宏  ***     |\n");
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
