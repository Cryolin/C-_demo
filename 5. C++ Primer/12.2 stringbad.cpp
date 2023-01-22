//#include <cstring>
//#include "12.1 stringbad.h"
//using std::cout;
//
//int StringBad::num_strings = 0; // ��ʼ����̬���������ڼ�¼������������
//
//StringBad::StringBad(const StringBad& st)
//{
//    num_strings++; 				// handle static member update
//    len = st.len; 				// same length
//    str = new char[len + 1]; 	// allot space
//    std::strcpy(str, st.str); 	// copy string to new location
//    cout << num_strings << ": \"" << str
//        << "\" object created\n"; // For Your Information
//}
//
//StringBad& StringBad::operator=(const StringBad& st)
//{
//    if (this == &st) 			// object assigned to itself
//        return *this; 			// all done
//    delete[] str; 				// free old string
//    len = st.len;
//    str = new char[len + 1]; 	// get space for new string
//    std::strcpy(str, st.str); 	// copy the string
//    return *this; 				// return reference to invoking object
//}
//
//StringBad::StringBad()          // �ڹ��캯����ʹ��new��Ϊ�ַ�������ռ�
//{
//    len = 6;
//    str = new char[6];
//    std::strcpy(str, "happy");
//    num_strings++;
//    cout << num_strings << " : \"" << str << "\" object created.\n";
//}
//
//StringBad::StringBad(const char* s)
//{
//    // str = s;             // ��ֻ�����˵�ַ����û�д����ַ���������
//    len = std::strlen(s);   // ������ĩβ�Ŀ��ַ�
//    str = new char[len + 1];  // ʹ��new�����㹻�Ŀռ��������ַ�����Ȼ�����ڴ�ĵ�ַ����str��Ա��
//    std::strcpy(str, s);
//    num_strings++;
//    cout << num_strings << " : \"" << str << "\" object created.\n";
//}
//
//StringBad::~StringBad()
//{
//    cout << "\"" << str << "\" object delete, ";
//    --num_strings;
//    cout << num_strings << " left.\n";
//    delete[] str;
//}
//
//std::ostream& operator<<(std::ostream& os, const StringBad& st)
//{
//    os << st.str;
//    return os;
//}