1. 실수 2개를 입력 받아 정수 값만의 곱을 구하시오.

#include <stdio.h>

int main(void) {
    
    double a, b = 0;
    int result = 0;

    scanf ("%lf %lf", &a, &b);
    result = a * b;
    printf ("%d", result);

    return 0;
}

2. 2, 3, 5, 7, 11, 13, 17의 평균을 정확히 실수값으로 계산하시오.

#include <stdio.h>

int main(void) {
    double result = (2 + 2 + 3 + 5 + 7 + 11 + 13 + 17) / 8;
    printf("%d", result);

    return 0;
}

3. 키는 [cm]단위로 몸무게는 [kg]단위로 입력 받아 BMI(body mass index)를 소수 첫째 자리까지 보이시오.(단, BMI = 몸무게/키2 ; 몸무게는 kg, 키는 m 단위임) (예)170, 65 => 22.5

#include <stdio.h>

int main() {
    double height, weight, bmi;

    printf("키(cm)를 입력하세요: ");
    scanf("%lf %lf", &height, weight);

    height = height / 100;
    bmi = weight / (height * height);

    printf("BMI: %.1lf\n", bmi);

    return 0;
}

4. 실수 5개를 입력 받아, 정수 부분만의 합과 소수 부분만의 합을 각각 구하시오.

#include <stdio.h>

int main(void) {

    double n1, n2, n3, n4, n5, result1;
    int result2, result3;

    scanf ("%lf %lf %lf %lf %lf", &n1, &n2, &n3, &n4, &n5);
    result1 = n1 + n2 + n3 + n4 + n5; // 더한 값
    result2 = n1 + n2 + n3 + n4 + n5; // 정수
    result3 = result1 - result2; // 실수

    printf("%d, %lf", result2, result3);
    return 0;
}

5. 비트논리연산자를 이용하여 입력 받은 문자의 아스키값을 이진수로 출력하시오.(가령 ‘A’ 면, 0100 0001)

#include <stdio.h>

int main() {
    char inputChar;
    
    scanf("%c", &inputChar);

    for (int i = 8; i >= 1; i--) {
        int bit = (inputChar >> i) & 1;
        printf("%d", bit);
    }
    
    return 0;
}

04 반지름이 8.32인 구의 체적과 표면적을 구하는 프로그램을 작성하시오.

#include <stdio.h>

int main(void) {
    double r = 8.32;
    double v, s;

    printf("%lf, %lf", 4/3*3.14*r*r*r, 4*3.14*r*r);
    return 0;
}