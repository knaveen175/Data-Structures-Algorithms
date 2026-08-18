/*
Assignment : 10
Topic : Queue using Arrays
07  ||       In Question-1, define a destructor to deallocates the memory.

*/
#include<iostream>
using namespace std;

class Queue
{
    private:
        int Capacity, Front, Rear, count;
        int *ptr;
    public:
        Queue(int c)
        {
            Capacity = c;
            ptr = new int[Capacity];
            Front = -1, Rear = -1;
        }
        ~Queue()
        {
            delete[] ptr;
        }
        void Insert(int data)
        {
            if (count == Capacity)
            {
                cout<<"Queue Overflow"<<endl;
                return;
            }
            if (Front == -1)
                Front = 0;
                
            Rear = (Rear + 1) % Capacity;
            ptr[Rear] = data;
            count++;
        }
        void View_Rear()
        {
            if(Rear == -1)
            {
                cout<<"Queue is Empty"<<endl;
                return;
            }
            cout<<"Element = "<<ptr[Rear]<<endl;
        }
        void View_Front()
        {
            if(Front == -1)
            {
                cout<<"Queue is Empty"<<endl;
                return;
            }
            cout<<"Element = "<<ptr[Front]<<endl;
        }
        void Delete_Front()
        {
            if (Front == -1 || count == 0)
            {
                cout<<"Queue Underflow"<<endl;
                return;
            }
            if (Front == Rear)
            {
                Rear = -1, Front = -1, count--; 
                return;
            }
            Front = (Front + 1) % Capacity;
            count--;
        }
};