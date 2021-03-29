#include <stdio.h> // <stdio.h> 표준 입력, 출력 기능 printf기능 ... 
#include <string.h> 



    // 2021.03.26 < 반복문 for , while >
    int main()
    {
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
            
        int num1 = 0;
        int num2 = 0;
        char ch = 0;
        printf("덧셈 계산기 프로그램입니다.\n");
        do {
            printf("두 수를 입력해주세요 : ");
            scanf("%d %d", &num1, &num2);
            printf("%d + %d = %d 입니다. \n", num1, num2, num1 + num2);
            printf("계속 하시겠습니까?(y/n)");
            while (getchar() != '\n'); // ************
            scanf("%c", &ch);
        } while (ch == 'Y' || ch == 'y');
        return 0;
        // test
                
        // 키버퍼 연속된 메모리
        // ㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁ 
        // y \n <- 저장되어있음 비워야함 . 숫자는 상관x 

    }
  

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
