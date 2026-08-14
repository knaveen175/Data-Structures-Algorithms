/*
Assignment : 10
Topic : Queue using Arrays
03  ||       In Question-1, define a method to insert a new element at the rear in the queue.

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
                cout<<"Queue Overflow";
                return;
            }
            if (Front == -1)
                Front = 0;
                
            Rear = (Rear + 1) % Capacity;
            ptr[Rear] = data;
            count++;
        }
};