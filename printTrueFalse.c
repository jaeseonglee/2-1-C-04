/*	실습 6 : printTrueFalse.c
	작성일 : 2019. 03. 21
	작성자 : 20165153 이재성
	프로그램 설명 : 주어진 식의 참, 거짓을 출력하는 프로그램
*/

#include <stdio.h>		// 전처리기

int main(int argc, char* argv[]) {		// main 함수
	int x = 0;		//e번 식에서 쓰이는 정수형 변수 선언, 0(F)로 초기화
	int y = 0;		//e번 식에서 쓰이는 정수형 변수 선언, 0(F)로 초기화
	int z = 0;		//e번 식에서 쓰이는 정수형 변수 선언, 0(F)로 초기화

	printf("a. !(7 >= 6) 의 논리결과는 %d\n", !(7>=6) );		// 논리결과는 0(F) 또는 1(T)이기 때문에 정수형인 %d 사용
	// 7이 6보다 크거나 같은가의 NOT이므로 결과는 0
	printf("b. 6 % 2 != 0 || 3 / 2 == 1 의 논리결과는 %d\n", 6 % 2 != 0 || 3 / 2 == 1);	// ||(or)의 경우 앞의 논리가 1(T)인 경우 뒤의 논리는 수행하지 않는다.
	// 6을 2로 나눈 나머지가 0인가의 NOT이므로 결과는 0, 3을 2로 나눈 몫이 1인가의 결과는 1
	printf("c. 1 > 5 || ( 6 < 50 && 2 < 5 ) 의 논리결과는 %d\n", 1 > 5 || (6 < 50 && 2 < 5));	// 괄호가 아니더라도 &&를 ||보다 먼저 계산한다.
	// 1이 5보다 큰가의 결과는 0, 6이 50보다 작고 2가 6보다 작은가의 결과는 1, 두 논리의 ||(or)값은 1
	printf("d. 5 * 5 != 25 && !(13 < 29) || 31 < 52 의 논리결과는 %d\n", 5 * 5 != 25 && !(13 < 29) || 31 < 52); // &&를 ||보다 먼저 계산한다.
	// 5*5가 25가 아니고 13이 29보다 크거나 같은가(작은가의 반대) 결과는 0, 31이 52보다 작은가의 결과는 1, 두 논리의 ||(or)값은 1
	
	// 실습 한글 파일에는 '=' 하나밖에 없는데 원래 두개라고 가정하고 진행하겠습니다.
	printf("( x == 1 && z == 0 ) || y == 0 의 논리결과는 %d\n", ( x == 1 && z == 0) || y == 0);	// &&를 ||보다 먼저 계산한다.
	// x가 참이고 z가 거짓인가의 결과는 0, y는 거짓인가의 결과는 1, 두 논리의 ||(or)값은 1
	
	system("pause");	// 출력창 확인
	return 0;			// 0을 반환
}