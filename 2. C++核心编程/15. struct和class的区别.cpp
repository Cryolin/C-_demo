#include <iostream>

using namespace std;

class Clazz
{
	// class�еĳ�ԱĬ����private��
	int a;
};

struct struct_test
{
	// struct�еĳ�ԱĬ����public��
	int a;

	void func()
	{
		cout << "struct�п��Զ��庯��" << endl;
	}

protected:
	int b;

private:
	int c;

	void func02()
	{
		cout << "struct�У����Ը���Ա�������߳�Ա�������÷���Ȩ��" << endl;
	}
};

int main()
{
	struct_test s1;
	s1.a = 10;
	s1.func();

	// structҲ���Ը�classһ��������protected��private�ĳ�Ա
	// ����������Ա�������Ա��������Ϊ����public�ģ������޷����ʣ�����
	//s1.b = 20;
	//s1.c = 30;
	//s1.func02();

	Clazz c1;
	// class�еĳ�ԱĬ����private�ģ����´��뱨��
	//c1.a = 10;

	system("pause");
	return 0;
}