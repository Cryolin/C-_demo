//#include <iostream>
//using namespace std;
//
//int main()
//{
//	double cash;
//	double tax001 = 10000.0 * 0.1;
//	double tax002 = 20000.0 * 0.15;
//	cout << "��������������";
//
//	while (cin >> cash)
//	{
//		int tax = 0;
//		if (cash < 0)
//		{
//			cout << "���븺����ѭ������\n";
//			break;
//		}
//		else if (cash <= 5000)
//		{
//			tax = 0;
//		}
//		else if (cash <= 15000)
//		{
//			tax = (cash - 5000.0) * 0.1;
//		}
//		else if (cash <= 35000)
//		{
//			tax = (cash - 15000.0) * 0.15 + tax001;
//		}
//		else
//		{
//			tax = (cash - 35000.0) * 0.20 + tax001 + tax002;
//		}
//		cout << "�������˰�" << tax << endl;
//		cout << "��������������";
//	}
//
//	system("pause");
//	return 0;
//}