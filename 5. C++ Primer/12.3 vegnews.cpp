//#include "12.1 stringbad.h"
//using std::cout;
//
//void callme1(StringBad& rsb);
//void callme2(StringBad sb);
//
//int main(void)
//{
//    using std::endl;
//    {
//        cout << "Starting an inner block.\n";
//        StringBad headline1("Celery Stalks at Midnight");
//        StringBad headline2("Lettuce Prey");
//        StringBad sports("Spinach Leaves Bowl for Dollars");
//        cout << "headline1: " << headline1 << endl;
//        cout << "headline2: " << headline2 << endl;
//        cout << "sports: " << sports << endl;
//        callme1(headline1);
//        cout << "headline1: " << headline1 << endl;
//        callme2(headline2); // ���ƹ��캯����������ʼ�� callme2()���β�
//        cout << "headline2: " << headline2 << endl;
//        cout << "Initialize one object to another:\n";
//        StringBad sailor = sports;  // ���ƹ��캯����StringBad sailor = StringBad(sports);
//        cout << "sailor: " << sailor << endl;
//        cout << "Assign one object to another:\n";
//        StringBad knot;
//        knot = headline1;   // ��ֵ���캯����knot.operator=(headline1);
//        cout << "knot: " << knot << endl;
//        cout << "Exiting the block.\n";
//    }   // �ô����ִ���������������������Ҫmain����ִ�����������������
//    cout << "End of main()\n";
//    return 0;
//}
//void callme1(StringBad& rsb)
//{
//    cout << "String passed by reference:";
//    cout << " \"" << rsb << "\"\n";
//}
//void callme2(StringBad sb)
//{
//    cout << "String passed by value:";
//    cout << " \"" << sb << "\"\n";
//}