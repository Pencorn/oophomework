#include<iostream>
#include<windows.h>
#include<cmath>
using namespace std;
struct data
{
	char name[10];
	int age;
	float score;

};
data *p = new data;
void putdata(data *p)
{
	cout << "��������ѧ������,����,�弶��c++����" << endl;
	cin >> p->name >> p->age >> p->score;
}

data check(data *p)
{
if ((p->age < 16 || p->age> 25))
throw p->age;

else
if (p->score > 5 || p->score < 0)
	throw p->score;
else
cout << "ѧ����Ϣ������ȷ" << endl;
cout<<  p->name << "  " << p->age << "  " << p->score* 20<< "��" << endl;
}
int main()
{
	putdata(p);
	try
	{
	check(p);
	}
	catch (int)
	{
	cout << "ѧ�����������ʻ���ȷ,����������" << endl;
	}
	catch (float)
	{
	cout << "ѧ���ɼ��������,����������" << endl;
	}
	system("pause");
	return 0;
}