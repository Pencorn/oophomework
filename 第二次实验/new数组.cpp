#include<iostream>
#include <windows.h>
#include "cmath"
using namespace std;
int main()
{
	int *a = new int[20];
	int b = 0, c = 0, s = 0, m = 0;
	for (int i = 0; i<20; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i<20; i++)
	{
		if (a[i] <= 0)
			c++;
		else
		{
			b++;
		}
	}
	cout << "20�����зǸ����͸����ĸ���Ϊ" << b << " " << c << endl;
	for (int i = 0; i < 20; i++)
	{
		s += a[i];

	}
	s = s / 20;
	cout << "��ֵΪ" << s << endl;
	for (int i = 0; i<20; i++)
	{
		m += (a[i] - s)*(a[i] - s);
	}
	m = m / 20;
	cout << "����Ϊ" << m << endl;
	int temp;
	for (int i = 0; i<20; i++)
	{
		for (int j = i + 1; j<20; j++)
		{
			if (a[i]<a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	cout << "�Ӵ�С�������˳��Ϊ" << endl;
	for (int i = 0; i<20; i++)
	{
		cout << a[i] << "  ";
	}
	system("pause");
	return 0;

}