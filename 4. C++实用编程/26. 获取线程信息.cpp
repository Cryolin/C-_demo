//#include <iostream>
//#include <mutex>
//
//// windows������ͨ��windows.h�еĺ�����ȡ����&�߳���Ϣ
//#include<windows.h>
//using namespace std;
//
//mutex mtx;
//
//void func()
//{
//    cout << "���߳�id : " << GetCurrentThreadId() << endl;
//}
//
//int main()
//{
//    thread t(func);
//
//    cout << "���߳�id : " << GetCurrentThreadId() << endl;
//
//    t.join();
//
//    cout << "����id : " << GetCurrentProcessId() << endl;
//    
//	system("pause");
//}