// Lab_02.cpp
// < �������� ������� >
// ����������� ������ � 2.1
// ˳��� ��������.
// ������ 0.9
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a; // ������� ��������
	double b; // ������� ��������
	double z1; // ��������� ���������� 1-�� ������
	double z2; // ��������� ���������� 2-�� ������
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	z1 = ((cos(a) - cos(b)) * (cos(a) - cos(b))) - ((sin(a) - sin(b)) * (sin(a) - sin(b)));
	z2 = -4 * (sin((a - b) / 2) * sin((a - b) / 2)) * cos(a + b);
	cout << endl;
	cout << "1";
	cout << "2";
	cout << "3";
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}
