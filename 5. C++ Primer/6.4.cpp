//#include <iostream>
//using namespace std;
//const int strsize = 50;
//struct bop
//{
//	char fullname[strsize];
//	char title[strsize];
//	char bopname[strsize];
//	int preference;
//};
//
//int main()
//{
//	bop bop_array[5] =
//	{
//		{"colin", "��ʿ", "�пƴ�", 0},
//		{"juju", "��ʿ��", "���Ŵ�ѧ", 0},
//		{"dog", "˶ʿ", "�пƴ�", 1},
//		{"pigdidi", "����", "�Ϲ���", 2},
//		{"liyang", "˶ʿ", "֣��", 3}
//	};
//	cout << "Benevolent Order of Programmers Report\n"
//		"a. display by name		b. display by title\n"
//		"c. display by bopame	d. display by preference\n"
//		"q. quit";
//	cout << "Enter your choice: ";
//	char ch;
//	bool is_quit = false;
//	while (!is_quit && (cin >> ch))
//	{
//		switch (ch)
//		{
//		case 'a':
//			for (bop bop_item : bop_array)
//			{
//				cout << bop_item.fullname << endl;
//			}
//			break;
//		case 'b':
//			for (bop bop_item : bop_array)
//			{
//				cout << bop_item.title << endl;
//			}
//			break;
//		case 'c':
//			for (bop bop_item : bop_array)
//			{
//				cout << bop_item.bopname << endl;
//			}
//			break;
//		case 'd':
//			for (bop bop_item : bop_array)
//			{
//				cout << bop_item.preference << endl;
//			}
//			break;
//		case 'q':
//			is_quit = true;
//			break;
//		default:
//			cout << "������Ϸ��ַ�" << endl;
//			break;
//		}
//	}
//
//	system("pause");
//	return 0;
//}