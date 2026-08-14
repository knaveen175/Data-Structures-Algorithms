/*
Assignment : 10
Topic : Queue using Arrays
04  ||       In Question-1, define a method to view reir element of the queue.

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
};