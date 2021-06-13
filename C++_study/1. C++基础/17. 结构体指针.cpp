#include <iostream>

using namespace std;

struct Student
{
	string name;
	int age;
	int score;
};

void printStu1(Student stu)
{
	stu.name = "cryolin";
	cout << "printStu1 " << stu.name << endl;
}

void printStu2(Student* stu)
{
	stu->name = "cryolin";
	// �ṹ��ָ�룬ͨ��"->"���ʳ�Ա
	cout << "printStu2 " << stu->name << endl;
}

// �ṹ����ʹ��const�ĳ�����
// 1. ֱ�Ӵ���ṹ�壬�Ḵ��ȫ���ṹ�����ݵ�ջ�������ڴ�ռ��
// 2. ����һ��ʹ�ýṹ��ָ�봫��
// 3. ���ṹ��ָ�봫���������¶�˽ṹ��д�������
// 4. ���ڲ����ú����޸Ľṹ��ĳ���������ͨ���ڽṹ��ָ��ǰ��const�ķ���
void printStu3(const Student* stu)
{
	// ����const֮�󣬶�stu�������ݵ��޸Ļᱨ��
	// stu->name = "cryolin";
	cout << "printStu3 " << stu->name << endl;
}

int main() {
	Student stu = { "colin", 18, 750 };
	Student* p = &stu;

	// ֱ�Ӵ���ṹ����󵽺��������޷��޸Ľṹ������ݵ�
	printStu1(stu);
	cout << "stu.name : " << stu.name << endl;	// ��ӡ"colin"

	// ����stu��ַ�������޸Ľṹ������
	printStu2(p);
	cout << "stu.name : " << stu.name << endl;	// ��ӡ"cryolin

	system("pause");
	return 0;
}