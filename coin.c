#include <stdio.h>
#include <stdlib.h> // random 함수를 쓰기위한 헤더파일
#include <time.h> // 초기화 함수를 위한 헤더파일

int main() {
    srand(time(0)); // 난수 생성 초기화를 별도로 생성, ;없이 작성

    int front = 0; // Python은 별도로 변수 생성 X
    int back = 0;

for (int i = 0; i < 100; i++) { // Python과 for문 문법이 다름, {}를 안쓰고 들여쓰기를 이용하여 구분
        int coin = rand() % 2; // Python과 다르게 randon 함수에서 %를 이용하여 0, 1을 선별

        if (coin == 0) { //Python과 다르게 ()를 안쓰고 작성
            front++; // Python은 증감 연산자 X
        } else {
            back++;
        }
    }

    printf("동전의 앞면은 %d번 뒷면은 %d번", front, back); // Python은 print로 작성, 변수 출력시 format를 이용하여 변수 출력

    return 0;
}