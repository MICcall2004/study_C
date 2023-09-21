/*
프로젝트를 하나 만들어, 정수형 변수와 문자형 변수를 각각 선언한 다음, 초기화를 하고 printf() 를 이용하여 출력하시오.
*/


#include <stdio.h>

int main(void) {
    int a = 3;
    char b = 'H';

    printf("정수 : %d \n", a), printf("문자 : %c", b);
    return 0;
}

/*
프로젝트를 추가하여 원주율을 const 상수로 선언하고 반지름이 6400km 인 지구의 둘레길이를 구하시오.
*/


#include <stdio.h>
#define PI 3.141592

int main(void) {
    // const double PI = 3.14;
    double round;

    round = 2 * PI * 6400;

    printf("%.0lf km \n", round);
}

/*
우주의 별의 총수를 구하시오. 온 우주에 있는 은하의 수는 2000억 개, 한 은하당 약 3500억 개의 별이 존재한다고 한다.     
*/

// #include <stdio.h>

int main(void) {
    
    float a = 200000000000;
    float b = 350000000000;

    printf("%lf", a * b);
    return 0;
}

/*
프로젝트를 추가하여, 1억원의 1달 이자를 구하시오. (연이율 : 3.5 %)
*/

#include <stdio.h>

int main(void) {

    float money = 100000000;
    printf("%.0lf", (money * 3.5) / 12);
    return 0;
}

/*
변수 point1 과 point2 를 선언하여 각각 중간과 기말고사의 성적인 88, 92 를 저장하고 두 수의 합을 변수 total 에 저장하여, 두 수와 함을 출력
*/

#include <stdio.h>

int main(void) {
    int point1 = 88;
    int point2 = 92;

    int total = point1 + point2;
    printf("%d", total);

    return 0;
}