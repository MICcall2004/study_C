// 7. 100 이하의 두 정수를 입력받아 두 정수를 이어붙였을 때 더 큰 값을 반환하시오.

#include <stdio.h>

int main(void) {
    int a, b; // 10의자리와 1의자리를 비교해야됨.
    scanf("%d %d", &a, &b);
    if (a < 100 && b < 100) {
        if (a > 10 && b < 10) {
            if (a / 10 > b) {
                printf("%d%d", &a, b);
            }
            else if (a / 10 < b) {
                printf("%d%d", &b, &a);
            }
        }
        else if (a < 10 && b < 10) {

        }
    }
}

// 8. 100이하의 정수를 입력 받아, 입력 받은 값이 홀수라면 값 이하의 모든 홀수 합을 출력하고, 입력 받은 값이 짝수라면 값 이하의 모든 짝수 곱을 출력하시오.

// #include <stdio.h>

// int main() {
//     int n;
//     int result = 1;

//     scanf("%d", &n);

//     if (n <= 0 || n > 100) {
//         printf("올바른 범위의 정수를 입력하세요.\n");
//         return 1; // 오류 코드 반환
//     }

//     if (n % 2 == 1) {
//         // 입력값이 홀수인 경우
//         for (int i = 3; i <= n; i += 2) {
//             result += i;
//         }
//     } else {
//         // 입력값이 짝수인 경우
//         for (int i = 2; i <= n; i += 2) {
//             result *= i;
//         }
//     }

//     printf("결과: %d\n", result);

//     return 0;
// }
