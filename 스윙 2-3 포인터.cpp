#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int* ptr; //���� �տ� *�� �ٿ� ������ �����ϱ�
	ptr = &a; //���� �տ� &�� �ٿ� ������ �ʱ�ȭ �ϱ�

	cout << "���� a�� �ּҴ� :" << ptr << endl;
	cout << "a�� ����: " << a << endl;
	return 0;
}