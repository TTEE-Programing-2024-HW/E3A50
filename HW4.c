//HW4 
//題目: 簡易成績系統 

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <conio.h>
#define MAX_STUDENTS 10
#define MIN_STUDENTS 5
#define NAME_LENGTH 50
/* 全域宣告 */
typedef struct 
{
    char name[NAME_LENGTH];
    int id;
    int math;
    int physics;
    int english;
    float average;
} Student;

void menu(void);	//呼叫副程式主選單畫面
void mainMenu(void);// 第三題的函式
void displayStudentData(Student students[], int n);// 第四題的函式
void searchStudentByName(Student students[], int n);
void sortAndDisplayStudentsByAverageGrade(Student students[], int n);
int getStudentCount(void);
void inputStudentData(Student students[], int n);

Student students[MAX_STUDENTS]; // 學生資料用結構的陣列實現 
int n; // 全域變數
void picture(void); //呼叫副程式個人封面 
 
int main (void)
{	
	//變數宣告
	int count = 0,password = 2024 ;//第一題用的計數跟密碼 
	char MENU;		//主選單的輸入變數 	
	char OPTION;	//case e的變數 
	
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
		printf("          請輸入想執行的選項(a~e): ");
		fflush(stdin);
		scanf("%c",&MENU);
//_________________________________以上為第二題	
		
		switch(MENU)	//選單(多重選擇 ) 
		{
			case 'a':
				system("CLS"); // 清除螢幕
				mainMenu();			//呼叫第三題的函式		
    	    	getch();						// 按任意鍵清除 
				system("CLS"); 					// 清除螢幕			
				break;
//_________________________________以上為第三題					
			case 'b':
				system("cls"); // 清除螢幕
				if (n == 0) 
				{
                	printf("尚未輸入任何學生資料。\n");
                } 
				else 
				{
                    displayStudentData(students, n);
                }		
        		getch();						// 按任意鍵清除 
				system("CLS"); 					// 清除螢幕
				break;//跳出 case b
//_________________________________以上為第四題	
			case 'c':
				system("CLS"); 					// 清除螢幕
    			if (n == 0) 
				{
                    printf("尚未輸入任何學生資料。\n");
                } 
				else 
				{
                    searchStudentByName(students, n);
                }
				getch();						// 按任意鍵清除 
				system("CLS"); 					// 清除螢幕
				break;
//_________________________________以上為第五題
			case 'd':
				system("CLS"); 					// 清除螢幕
    			if (n == 0) 
				{
                    printf("尚未輸入任何學生資料。\n");
                } 
				else 
				{
					//按平均成績排序並顯示學生的姓名、學號及平均成績 
                    sortAndDisplayStudentsByAverageGrade(students, n); 
                }
				getch();						// 按任意鍵清除 
				system("CLS"); 					// 清除螢幕
				break;
//_________________________________以上為第六題	
			case 'e':
				do//do-while迴圈 
				{
					printf("請問是否要繼續執行程式? [是] 請輸入(Y、y)，[否] 請輸入(N、n) :\n"); 
					fflush(stdin);//清空輸入緩衝區
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
//_________________________________以上為第七題	
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
	printf("          ______________________________________\n");
	printf("         |                                      |\n");
	printf("         |     *****                  *         |\n");/*螢幕出現主選單，*/ 
	printf("         |      ***  E3A 50  陳昱宏  ***        |\n");
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
/*____________________以下為第三題所用之程式________________________*/ 
void inputStudentData(Student students[], int n) //用於讀取學生資料並進行有效性檢查 
{
    for (int i = 0; i < n; i++) 
	{
        printf("輸入第%d位學生的資料：\n", i + 1);

        printf("姓名：");
        fgets(students[i].name, NAME_LENGTH, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';  // 去掉換行符

        printf("學號（6位整數）：");
        while (scanf("%d", &students[i].id) != 1 || students[i].id < 100000 || students[i].id > 999999) 
		{
            printf("學號無效，請重新輸入學號（6位整數）：");
            fflush(stdin);//清空輸入緩衝區
        }

        printf("數學成績（0~100分）：");
        while (scanf("%d", &students[i].math) != 1 || students[i].math < 0 || students[i].math > 100) 
		{
            printf("成績無效，請重新輸入數學成績（0~100分）：");
            fflush(stdin);//清空輸入緩衝區
        }

        printf("物理成績（0~100分）：");
        while (scanf("%d", &students[i].physics) != 1 || students[i].physics < 0 || students[i].physics > 100) 
		{
            printf("成績無效，請重新輸入物理成績（0~100分）：");
            fflush(stdin);//清空輸入緩衝區
        }

        printf("英文成績（0~100分）：");
        while (scanf("%d", &students[i].english) != 1 || students[i].english < 0 || students[i].english > 100) 
		{
            printf("成績無效，請重新輸入英文成績（0~100分）：");
            fflush(stdin);//清空輸入緩衝區
        }

        fflush(stdin);//清空緩衝區
        
        students[i].average = (students[i].math + students[i].physics + students[i].english) / 3.0;//計算平均 
    }
}
//要求使用者輸入，需要填寫多少筆的人數資料 
int getStudentCount() 
{
    int n;
    printf("請輸入學生的數量（%d到%d）：", MIN_STUDENTS, MAX_STUDENTS);
    while (scanf("%d", &n) != 1 || n < MIN_STUDENTS || n > MAX_STUDENTS) 
	{
        printf("數量無效，請重新輸入學生數量（%d到%d）：", MIN_STUDENTS, MAX_STUDENTS);
        fflush(stdin);//清空輸入緩衝區
    }
    fflush(stdin);//清空輸入緩衝區
    return n;
}

void mainMenu() 
{
	n = getStudentCount();
	inputStudentData(students, n);       
}
/*____________________以上為第三題所用之程式________________________*/ 
/*印出所有陣列內的資料*/ 
void displayStudentData(Student students[], int n)
{
    printf("學生資料如下：\n");
    for (int i = 0; i < n; i++) 
	{
        printf("姓名：%s\n", students[i].name);
        printf("學號：%d\n", students[i].id);
        printf("數學成績：%d\n", students[i].math);
        printf("物理成績：%d\n", students[i].physics);
        printf("英文成績：%d\n", students[i].english);
        printf("平均成績：%.1f\n", students[i].average);
        printf("---------------------\n");
    }
}
/*_______________________以下為第五題所用之程式_________________________*/
/*此函式可以在使用者輸入姓名後，尋找相對應的成績，並輸出內容*/ 
void searchStudentByName(Student students[], int n)
{
    char searchName[NAME_LENGTH];
    printf("請輸入要搜尋的姓名：");
    fflush(stdin);
    fgets(searchName, NAME_LENGTH, stdin);
    searchName[strcspn(searchName, "\n")] = '\0';

    int found = 0;
    for (int i = 0; i < n; i++) 
	{
        if (strcmp(students[i].name, searchName) == 0) 
		{
            printf("姓名：%s\n", students[i].name);
            printf("學號：%d\n", students[i].id);
            printf("數學成績：%d\n", students[i].math);
            printf("物理成績：%d\n", students[i].physics);
            printf("英文成績：%d\n", students[i].english);
            printf("平均成績：%.1f\n", students[i].average);
            printf("-------------------------\n");
            found = 1;
            break;
        }
    }
    if (!found) 
	{
        printf("資料不存在。\n");
    }
}
/*_______________________以上為第五題所用之程式_________________________*/
/*_______________________以下為第六題所用之程式_________________________*/
/* 此函式會在選單中選擇 'd' 時被呼叫。
這樣可以讓使用者查看按平均成績高低順序排列的學生資料。*/ 
void sortAndDisplayStudentsByAverageGrade(Student students[], int n) 
{
    // 使用簡單的冒泡排序法來按平均成績排序
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
    // 列出學生的姓名、學號及平均成績
    printf("依平均成績排序的學生資料如下：\n");
    for (int i = 0; i < n; i++) 
	{
        printf("姓名：%s\n", students[i].name);
        printf("學號：%d\n", students[i].id);
        printf("平均成績：%.1f\n", students[i].average);
        printf("-------------------------\n");
    }
}
/*_______________________以上為第六題所用之程式_________________________*/

