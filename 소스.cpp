#include <iostream> //<iostream> : �Է�, ��½ÿ� �ʿ��� ���, c����� <stdio.h>�� ����
#include <string> //C++ ǥ�� ���̺귯������ �����ϴ� Ŭ����, ���ڿ��� ��ü�� �ٷ�, ���ڿ� ũ�� ���� ����
using namespace std; //<iostream> ��� ���Ͽ� ����� �̸��� ����� �� std:: ������

int main() { //c++ ���α׷��� ���� ������
	cout << "����� �̸��� �����Դϱ�?"; //cout : �����͸� ���ȭ�鿡 ����� �� ���
	char name[11];
	cin.getline(name, 11, '\n'); //cin ��ü�� getline() ����Լ� �̿� �� ���� ������ ���ڿ� �Է� �ޱ� ����
	cout << "�ݰ����ϴ�." << name << "��" << endl; //endl : �ٹٲ� ���, \n�� ���� ���

	int c1, c2, c3;
	cout << "apple�� ������ ���Դϱ�?";
	cin >> c1;
	cout << "banana�� ������ ���Դϱ�?";
	cin >> c2;
	cout << "orange�� ������ ���Դϱ�?";
	cin >> c3;

	int n1, n2, n3;
	cout << "apple�� �� �� �ֽ��ϱ�?";
	cin >> n1;
	cout << "banana�� �� �� �ֽ��ϱ�?";
	cin >> n2;
	cout << "orange�� �� �� �ֽ��ϱ�?";
	cin >> n3;

	int res;
	res = (c1 * n1 + c2 * n2 + c3 * n3) - 500;
	cout << "��" << res << "�Դϴ�.";
}