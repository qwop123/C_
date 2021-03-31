#include <stdio.h> // <stdio.h> 표준 입력, 출력 기능 printf기능 ... 
#include <string.h>
#include <stdlib.h>
#include <time.h>

// 2021.03.30 < 3차원 배열 >
        int main()
        {
            int input = 0;
            int num[7] = { 0 };
            int checkNum[45] = { 0 };
            srand((unsigned)time(NULL));
            int value = 0;
            while (true)
            {
                printf("로또 번호 생성기 입니다.");
                printf("1.번호생성 2.종료하기");
                scanf("%d", &input);
                if (input == 1)
                {
                    for (int i = 0; i < 7; i++)
                    {
                        do
                        {
                            value = rand() % 45;
                        } while (checkNum[value]);
                        checkNum[value] = 1;
                        num[i] = value;
                    }
                    for (int i = 0; i < 6; i++)
                    {
                        printf("%4d", num[i] + 1);
                    }
                    printf("\t보너스 %4d", num[6] + 1);
                    printf("\n");
                }
                system("pause");
                system("cls");
            }
            return 0;
        }
        //int main()
        //{
        //    float pi = 3.14;
        //    int num = (int)pi; // 형변환
        //    //srand(time(NULL))
        //}
        /* int main()
         {
            int num[7] = { 0, };
            srand((int)time(NULL));      
            for (int k = 0; k < 5; k++)
            {
                for (int i = 0; i < 7; i++)
                {
                    num[i] = rand() % 45 + 1;
                    for (int j = 0; j < i; j++)
                    {
                        if (num[j] == num[i])
                        {
                            i--;
                            break;
                        }
                    }
                }

                for (int i = 0; i < 7; i++)
                {
                    printf("num[%d]: %d\n", i, num[i]);
                }
                printf("\n\n");
            }
         } */
//int main()
//{
//    char block[7][4][4] = {
//        {
//            { 0,0,0,0 },
//            { 0,1,1,0 },
//            { 0,1,1,0 },
//            { 0,0,0,0 },
//        },
//        {
//            { 0,1,0,0 },
//            { 0,1,0,0 },
//            { 0,1,0,0 },
//            { 0,1,0,0 },
//        },
//        {
//            { 0,0,0,0 },
//            { 1,1,0,0 },
//            { 0,1,1,0 },
//            { 0,0,0,0 },
//        },
//        {
//            { 0,0,0,0 },
//            { 0,0,1,1 },
//            { 0,1,1,0 },
//            { 0,0,0,0 },
//        },
//        {
//            { 0,0,0,0 },
//            { 0,1,0,0 },
//            { 1,1,1,0 },
//            { 0,0,0,0 },
//        },
//        {
//            { 0,0,0,0 },
//            { 1,0,0,0 },
//            { 1,1,1,0 },
//            { 0,0,0,0 },
//        },
//        {
//            { 0,0,0,0 },
//            { 0,0,0,1 },
//            { 0,1,1,1 },
//            { 0,0,0,0 },
//        },
//    };
//    int type = 0;
//    int key = 0;
//    while (true)
//    {
//        for (int i = 0; i < 4; i++)
//        {
//            for (int j = 0; j < 4; j++)
//            {
//                if (block[type][i][j] == 1)
//                {
//                    printf("■");
//                }
//                else
//                    printf("  ");
//            }
//            printf("\n");
//        }
//        printf("명령을 입력하세요 1.바꾸기 2.종료 \n");
//        key = getchar();
//        while (getchar() != '\n');
//        if (key == '1')
//        {
//            type = rand() % 7;
//        }
//        else if (key == '2')
//        {
//            exit(0);
//        }
//    }
//    return 0;
//}
//==============================================================================================

// 2021.03.30 < 배열 >
// #include <stdlib.h> -> 랜덤 기능 사용
// getchar(); 문자로 '한글자만' 받아옴 1. -> 문자 1 (숫자아님) / key = getchar();

//int main()
//{
//    int coins[] = { 500, 100, 50, 10 };
//    int money = 0;
//    int key = 0;
//    while (true)
//    {
//        printf("교환 하려는 금액을 입력 해주세요: ");
//        scanf("%d", &money);
//        for (int i = 0; i < 4; i++)
//        {
//            int count = 0;
//            while (money / coins[i] > 0)
//            {
//                count++;
//                money -= coins[i];
//            }
//            printf("%d 원 : %d개\n", coins[i], count);
//        }
//    }
//}

 /*//맵 데이터 관련
#define MAP_WIDTH 10
#define MAP_HEIGHT 10
#define WALL 1
#define ROAD 0
#define GEM 2

//이동 방향
#define UP 1
#define DOWN 2
#define LEFT 3
#define RIGHT 4


    int main()
    {
        int map[MAP_HEIGHT][MAP_WIDTH] = {
            { 0,1,1,1,1,1,1,1,1,1 },
            { 0,0,0,0,0,0,0,0,0,1 },
            { 1,1,1,1,1,1,1,0,0,1 },
            { 1,0,0,0,0,0,1,1,0,1 },
            { 1,0,0,0,2,0,1,1,0,1 },
            { 1,1,1,1,1,0,1,1,0,1 },
            { 1,0,0,0,0,0,0,0,0,1 },
            { 1,0,0,0,0,0,0,0,0,1 },
            { 1,0,0,0,0,0,0,0,0,1 },
            { 1,1,1,1,1,1,1,1,1,1 } 
        };
        int playerX = 0, playerY = 0;
        int select = 0;
        while (1)
        {
            for (int i = 0; i < MAP_HEIGHT; i++) // Y축
            {
                for (int j = 0; j < MAP_WIDTH; j++) // X축
                {
                    if (map[i][j] == ROAD)
                    {
                        if (playerX == j && playerY == i)
                        {
                            printf("¡");
                        }
                        else
                            printf("□");
                    }
                    else if (map[i][j] == WALL)
                    {
                        printf("■");
                    }
                    else if (map[i][j] == GEM)
                    {
                        printf("◈");
                    }
                }
                printf("\n");
            }
            printf("1.위 2.아래 3.왼쪽 4.오른쪽 0.종료\n");
            scanf("%d", &select);

            switch (select)
            {
            case UP:
                if (playerY - 1 >= 0)
                {
                    if (map[playerY - 1][playerX] == ROAD)
                    {
                        playerY--;
                    }
                    else if (map[playerY - 1][playerX] == GEM)
                    {
                        printf("축하합니다. 보석을 찾았습니다.\n");
                        playerX = playerY = 0;
                    }
                }
                break;
            case DOWN:
                if (playerY + 1 < MAP_HEIGHT)
                {
                    if (map[playerY + 1][playerX] == ROAD)
                    {
                        playerY++;
                    }
                    else if (map[playerY + 1][playerX] == GEM)
                    {
                        printf("축하합니다. 보석을 찾았습니다.\n");
                        playerX = playerY = 0;

                    }
                }
                break;
            case LEFT:
                if (playerX - 1 >= 0)
                {
                    if (map[playerY][playerX - 1] == ROAD)
                    {
                        playerX--;
                    }
                    else if (map[playerY][playerX-1] == GEM)
                    {
                        printf("축하합니다. 보석을 찾았습니다.\n");
                        playerX = playerY = 0;

                    }
                }
                break;
            case RIGHT:
                if (playerX + 1 < MAP_WIDTH)
                {
                    if (map[playerY][playerX + 1] == ROAD)
                    {
                        playerX++;
                    }
                    else if (map[playerY][playerX+1] == GEM)
                    {
                        printf("축하합니다. 보석을 찾았습니다.\n");
                        playerX = playerY = 0;

                    }
                }
                break;
            default:
                break;
            }
            system("cls");
        }
    } */
    
    

//==============================================================================================


    // 2021.03.29 < 배열 >

        // int 4바이트 ,, int num[5] 20바이트
        // int num[5]; *** 연속된 메모리 ***
        // char 1바이트 ,, char name[5] 5바이트
        // float 4바이트 ,, float pos[5] 20바이트
        // int num[5] = {1, 2, 3, 4, 5}; 초기화 or int num[5] = {0,}; , int num[5] = {1,1,} 
    /*int main()
    {
        int students[5] = { 0, };

        for (int i = 0; i < 5; i++)
        {
            printf("%d번 학생 출석 확인(O , X) : ", i + 1);
            scanf("%c", &students[i]);
            while (getchar() != '\n');
        }
        printf("\n");
        for (int i = 0; i < 5; i++)
        {
            printf("%d번 학생 출석 : %c\n", i + 1, students[i]);
        }
        return 0;
    }*/
        // int num[3][5]; = [3 * 5];
        // ㅁㅁㅁㅁㅁ
        // ㅁㅁㅁㅁㅁ
        // ㅁㅁㅁㅁㅁ
//int main()
//{
//    int num[5][7];
//    int count = 1;
//    for (int j = 0; j < 5; j++)
//    {
//        for (int i = 0; i < 7; i++)
//        {
//            num[j][i] = count++;
//        }
//        printf("\n");
//    }
//
//    for (int j = 0; j < 5; j++)
//    {
//        for (int i = 0; i < 7; i++)
//        {
//            printf("%3d", num[j][i]);
//        }
//        printf("\n");
//    }
//
//}
        //int main()
        //{
        //    
        //    int num[5][7];
        //    int count = 1;

        //    for (int j = 0; j < 5; j++)
        //    {
        //        if (j % 2 == 0)
        //        {
        //            for (int i = 0; i < 7; i++)
        //            {
        //                 num[j][i] = count++;

        //            }
        //        }
        //        else
        //        {
        //            for (int i = 6; i >= 0; i--)
        //            {
        //                num[j][i] = count++;
        //                //num[j][6-i] = count++;


        //            }
        //        }
        //        
        //    }

        //    for (int j = 0; j < 5; j++)
        //            {
        //                for (int i = 0; i < 7; i++)
        //                {
        //                    printf("%3d", num[j][i]);
        //                }
        //                printf("\n");
        //            }
        //}
    
//==============================================================================================

    // 2021.03.26 < 반복문 for , while >
    /*int main()
    {*/
        /*printf("adssa"); 
        putchar('a');*/
        // while 횟수가 명확하지 않은 경우 , *** 탈출조건 (무한루프) *** 
        // 무한 루프시 for문으로 바꿔본다. 
        // for문 -> 횟수

        /*int num = 0;
        int sum = 0;
        int i = 0;
        printf("정수를 입력하세요\n");
        scanf("%d", &num);
        while (i <= num)
        {
            sum += i;
            i++;
        }
        printf("입력한 정수의 1부터의 총합은 %d입니다.\n", sum);
        return 0;*/

        // 아스키 코드로 65는 문자 'A'입니다.
      /*  int i = 65;
        while (i <= 122)
        {
            i++;
        }
        printf("\n\n");
        return 0;*/

        /*for (int i = 65; i <= 122; i++)
        {
            printf("%5d - %c\t\t", i, i);
        }
        printf("\n\n");
        return 0;*/

      /*  int step = 0;
        int num = 1;
        printf("출력할 단을 입력하세요: ");
        scanf("%d", &step);
        while (num <= 9)
        {
            printf("%d * %d = %d\n", step, num, step * num);
            num++;
        }
        printf("\n");
        return 0;*/

        //int step = 0;      
        //printf("출력할 단을 입력하세요: ");
        //scanf("%d", &step);

        //for (int i = 0; i < 10; i++)
        //{
        //    printf("%d * %d = %d\n", step, i, step *i);
        //}
        //printf("\n");
        //return 0; 

        /*  int step = 0;
        int num = 1;
        printf("출력할 단을 입력하세요: ");
        scanf("%d", &step);
        while (step > 0 && step <= 9)
        {
            while (num <= 9)
            {
                printf("%d * %d = %d\n", step, num, step * num);
                num++;
            }
            num = 1;
            printf("\n");
            printf("출력할 단을 입력하세요: ");
            scanf("%d", &step);

        }
        return 0;*/

        /*int step = 0;
        int num = 1;

        while (true)
        {
            printf("출력할 단을 입력하세요: ");
            scanf("%d", &step);
            if (step <= 0 || step > 9) break;
            while (num <= 9)
            {
                printf("%d * %d = %d\n", step, num, step * num);
                num++;
            }
            num = 1;
            printf("\n");
        }
         return 0;*/

        //  do while 문에서 while 뒤에 " ; " ***

     /*   int step = 0;
        int stop = 0;
        while (true)
        {
            do {
                printf("출력할 단을 입력하세요 : \n");
                scanf("%d", &step);               
            } while (step > 9 || step <= 0);
            for (int i = 1; i <= 9; i++)
            {
                printf("%d x %d = %d\n", step, i, (step * i));
            }
        }
        return 0;
        */
        //    
        //int num1 = 0;
        //int num2 = 0;
        //char ch = 0;
        //printf("덧셈 계산기 프로그램입니다.\n");
        //do {
        //    printf("두 수를 입력해주세요 : ");
        //    scanf("%d %d", &num1, &num2);
        //    printf("%d + %d = %d 입니다. \n", num1, num2, num1 + num2);
        //    printf("계속 하시겠습니까?(y/n)");
        //    while (getchar() != '\n'); // ************
        //    scanf("%c", &ch);
        //} while (ch == 'Y' || ch == 'y');
        //return 0;
        //// test
                
        // 키버퍼 연속된 메모리
        // ㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁ 
        // y \n <- 저장되어있음 비워야함 . 숫자는 상관x 

    //}
  

    //==============================================================================================
            

    // 2021.3.16


    //int main()
    //{
    // int hp = 1000; //변수.보관.32bit.   
    // char lv = 99; //저장, 불필요한 메모리공간. int x 
    //}

    //==============================================================================================

    // 2021.3.17 < 변수선언 >

    //int main() // (void) , printf 부분 변수가 없을때  
    //{
    //    // 2021.3.25 문자열 초기화 

    //    //char name[12] = "hello world";
    //    // char name[]; X
    //    // char name[10] = 0; X
    //    // char name[10] = {0, 0, 0, 0, 0, 0, 0};
    //    // char name[100] = {0, '\0'}; // 맨 앞에 0으로 초기화 **/
    //    // printf("hello");
    //    // char name[19] = "add deedee dee";
    //    //char name[11];
    //    //printf("당신의 이름은 무엇입니까?\n");
    //   // scanf("%s", name); // 배열의 경우 & 쓰지않음. 배열의 이름 자체가 첫번째 주소값을 가지고 있음 0번째
    //   // printf("%s\n", name);

    //   // int num[5] = { 1, 2, 3, 4, 5 };
    //    // 크기 자동 할당
    //    //char name[] = "hello world hello worldhello worldhello worldhello worldhello worldhello world"; 

    //    /*char name[] = "welcome to SBS Games Academy";
    //    for (int i = 0; i < strlen(name); i++)
    //    {
    //        printf("%c\n", name[i]);
    //    }
    //    return 0;*/

    //    /*int num[10] = { 1,2,3,4,5,6,7,8,9,10 };
    //    

    //    for (int i = 0; i < 10; i++)
    //        printf("%d\n", num[i]);*/
    //    int height = 0;
    //    printf("사각형의 높이를 입력해주세요 \n");
    //    scanf("%d", &height);

    //    for (int j = 0; j < height; j++) // 열 y축
    //    {
    //        for (int i = 0; i < height - j; i++) // 열 y축
    //        {
    //            printf(" ");
    //        }
    //        for (int i = 0; i < 2*j+1; i++) // 열 y축
    //        {
    //            printf("*");
    //        }
    //        printf("\n");
    //    }
        
       

        // char ch = 'A'; // A = 65 아스키코드 , 문자 =  ' ' , 문장 = " "
       // int age = 140;
      //  int hp = 100;
       // hp = hp - 10;
       // float height = 130.3;
        //printf("이름은 %s이고 나이는 %d세 키는 %f입니다", "게임", age, height ); // %d, %f , %c 한글자 , %s 문장

    //==============================================================================================

    // 2021.3.19 < 서식문자 >

       // int num = 123.;
       // double pi = 3.14;

        //printf("%.5d\n", num);  : 숫자빈칸에 000 채워넣는다 ex) 00123 5자리
        //printf("%.1f\n", pi);   : 소수점 자리수 ex) 1자리
        //printf("%.5s\n","Hello World"); : 앞에 5글자만.       

        /*printf("[%-8s] [%-4s] [%-10s]\n", "이름", "나이", "주소");
        printf("[%-8s] [%-4d] [%-10s]\n", "게임", 40, "서울특별시");
        printf("[%-8s] [%-4d] [%-10s]\n", "게임이", 5, "수원시");
        printf("[%-8s] [%-4d] [%-10s]\n", "게임게임", 123, "중국");*/

        // - 왼쪽정렬 , 칸을 일정하게 고정 [%8s] -> 한글 4글자 or 영어 8글자 
        // 영어 한글자에 1바이트 , 한글은 2바이트 필요

        // < 문자열 초기화 >

        // 주소 지정자 , 입력값을 a의 메모리 주소에 찾아가서넣어두겠다. 

       /* int a, b;
        scanf("%d", &a);
        printf("input 1: %d\n", a);

        scanf("%d", &b);
        printf("input 2: %d\n", b);

        printf("a +b = %d\n", a +b);*/

       // char name = 0; // *** 0 초기화해주기d
       // int age = 0;
       // float weight = 0;
       // float height = 0;

       // printf("이름 :  ");
       // scanf("%s", &name);
       // 

       //printf("나이 :  ");
       // scanf("%d", &age);
       // 

       // printf("몸무게 :  ");
       // scanf("%f", &height);
       // 

       // printf("키 :  ");
       // scanf("%f", &height);
       // 
       // printf("이름 [%3s] , 나이 [%3d]세 , 키[%.1f], 몸무게 [%.1f]", name, age, weight, height);


           //printf("안녕ㅇㅇㅇ");
        /*printf("소리 : \a\n");
        printf("\t탭\n");
        printf("개행 \n");
        printf("역슬래시 : \\ \n");
        printf("작은따옴표 : \' \n");
        printf("큰따옴표 : \"\" \n");
        printf("백스페이스\b \n");
        printf("체인지 리턴 \r캐리지\n");*/

        //==============================================================================================

        // 2021.3.22 < 연산자 >
        //int a = 1;
        //int b = 1;
        //printf("%d\n", ++a); // 2 , a에 먼저 더하고 출력
        //printf("%d\n", b++); // 1 , 출력 후 다음 라인에서 + 1

        // 연산자 == 같다
        // ex) hp = 0 -> hp가 0이다, hp == 0  => hp가 0일때

        // & -> and , || -> or , ! -> 부정
       /* int hp = 100;
        int fever = 100;*/

       /* if (hp <= 30 && fever == 10 )
        {

        }

        if (hp <= 30 || fever == 10)
        {

        }*/

        //if (fever==1) // 변수만 넣으면 있음 1 , 없음 0 으로 나뉨 ex) if (fever)
        //{
        //    printf("발동!!\n");
        //}

       /* unsigned char val1 = 7, val2 = 5;
        printf("val1 & val2 = %d \n", val1&val2);
        printf("val1 | val2 = %d \n", val1|val2);
        printf("val1 ^ val2 = %d \n", val1^val2);
        printf("val1 = val2 = %d \n", ~val1);
        printf("val1 << val2 = %d \n", val1<<2);
        printf("val1 >> val2 = %d \n", val2>>2);*/

        //==============================================================================================

        // 2021.03.23 
        /*
        int num1 = 1;
        int num2 = 2;
        int num3 = 3;
        
        if (num1 > num2)
        {
            if (num1 > num3)
            {
                if (num2 > num3)
                {
                    printf("num1[%d] num2[%d] num3[%d]", num1, num2, num3);
                }
                else
                {
                    printf("num1[%d] num3[%d] num2[%d]", num1, num3, num2);
                }
            }
            else
            {
                printf("num3[%d] num1[%d] num2[%d]", num3, num1, num2);
            }
        }

        else
        {
            if (num2 > num3)
            {
                if (num1 > num3)
                {
                    printf("num2[%d] num1[%d] num3[%d]", num2, num1, num3);

                }
                else
                {
                    printf("num2[%d] num3[%d] num2[%d]", num2, num3, num1);

                }
            }
            else
            {
                printf("num3[%d] num2[%d] num1[%d]", num3, num2, num1);

            }
        }*/
    
        /*int iWeapon = WP_SWORD | WP_AXE | WP_GUN;

        iWeapon = iWeapon & ~WP_AXE;
        if (iWeapon & WP_SWORD) printf("SWORD 장착\n");*/

        /*int score;
        printf("점수를 입력 하세요 (0~100): \n");
        scanf("%d", score);
        if ((score > 100) || (score < 0)) 
        {
            printf("잘못된 입력입니다.");
        }
        else if (score >= 90)
        {
            printf("A 학점입니다\n");
        }
        else if (score >= 80)
        {
            printf("B 학점입니다\n");
        }
        else if (score >= 70)
        {
            printf("C 학점입니다\n");
        }
        else if (score >= 60)
        {
            printf("D 학점입니다\n");
        }
        else 
        {
            printf("F 학점입니다");
        }
        return 0;*/
            
       

    //}
        //char age = 0; // 알수없는값 = 0으로 초기화 
        //int c = 10;
        //int d = age + c;
        //float height = 180.3; // 4 byte
        //double weight = 88.5; // 8 byte

        //int hp = 0;
        //float atk = 0;
        //float def = 0;
        //char lv = 0;
        //float cri = 0;

    // int a = 30;
    // int age = 20; , int Age = 30;
    // int monster_hp; or int monsterHp; ,, int monsterHp1; int monsterHp2; int monsterHp3;
    // int hp;
    // 알파벳 대소문자 언더바 중복x
    // 주석 - 설명 *** 
    // 캐릭터의 체력 int heroHp;
    
    



// 프로그램 실행: <ctrl+f5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <f5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.

// 1byte = 8bit 메모리 ㅁㅁㅁㅁㅁㅁㅁㅁ/ ㅁ = 1bit
