#include <iostream>

#include <Singleton.h>

using namespace std;

int main()
{
	Singleton *s1 = Singleton::GetInstance();
	Singleton *s2 = Singleton::GetInstance();

	if (s1 == s2)
	{
		cout << "������������ͬ��ʵ��" << endl;
	}

	getchar();
}


