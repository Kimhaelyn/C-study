#include <iostream> //<iostream> : 입력, 출력시에 필요한 헤더, c언어의 <stdio.h>와 같다
#include <string> //C++ 표준 라이브러리에서 제공하는 클래스, 문자열을 객체로 다룸, 문자열 크기 제약 없음
using namespace std; //<iostream> 헤더 파일에 선언된 이름을 사용할 때 std:: 생략함

int main() { //c++ 프로그램의 실행 시작점
	cout << "당신의 이름은 무엇입니까?"; //cout : 데이터를 출력화면에 출력할 때 사용
	char name[11];
	cin.getline(name, 11, '\n'); //cin 객체의 getline() 멤버함수 이용 시 공백 포함한 문자열 입력 받기 가능
	cout << "반갑습니다." << name << "님" << endl; //endl : 줄바꿈 기능, \n과 같은 기능

	int c1, c2, c3;
	cout << "apple의 가격은 얼마입니까?";
	cin >> c1;
	cout << "banana의 가격은 얼마입니까?";
	cin >> c2;
	cout << "orange의 가격은 얼마입니까?";
	cin >> c3;

	int n1, n2, n3;
	cout << "apple은 몇 개 있습니까?";
	cin >> n1;
	cout << "banana는 몇 개 있습니까?";
	cin >> n2;
	cout << "orange는 몇 개 있습니까?";
	cin >> n3;

	int res;
	res = (c1 * n1 + c2 * n2 + c3 * n3) - 500;
	cout << "총" << res << "입니다.";
}