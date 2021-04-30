#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int* ptr; //변수 앞에 *을 붙여 포인터 선언하기
	ptr = &a; //변수 앞에 &을 붙여 포인터 초기화 하기

	cout << "변수 a의 주소는 :" << ptr << endl;
	cout << "a의 값은: " << *ptr << endl;
	return 0;
}
