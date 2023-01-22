#ifndef PRIMERPLUS_QUEUE_H
#define PRIMERPLUS_QUEUE_H
// This queue will contain Customer items
class Customer
{
private:
    long arrive;        // arrival time for customer
    int processtime;    // processing time for customer
public:
    Customer() { arrive = processtime = 0; }    // ��������
    void set(long when);
    long when() const { return arrive; }
    int ptime() const { return processtime; }
};

typedef Customer Item;
class Queue
{
private:
    // class scope definitions
    // Node is a nested structure definition local to this class
    // �ṹ���ʾ�����ÿһ���ڵ㣬��Žڵ���Ϣ����һ��ָ���λ��
    // ��ǰ�ڵ㱣�����һ����Ķ������������δ���Ķ���
    struct Node { Item item; struct Node* next; };
    enum { Q_SIZE = 10 };
    // private class members
    Node* front;   // pointer to front of Queue
    Node* rear;    // pointer to rear of Queue
    int items;      // current number of items in Queue
    const int qsize; // maximum number of items in Queue
    // preemptive definitions to prevent public copying
    Queue(const Queue& q) : qsize(0) { }
    Queue& operator=(const Queue& q) { return *this; }
public:
    Queue(int qs = Q_SIZE);         // create queue with a qs limit
    ~Queue();
    bool isempty() const;
    bool isfull() const;
    int queuecount() const;         // ���ض����нڵ�ĸ���
    bool enqueue(const Item& item); // ���
    bool dequeue(Item& item);       // ����
};
#endif //PRIMERPLUS_QUEUE_H