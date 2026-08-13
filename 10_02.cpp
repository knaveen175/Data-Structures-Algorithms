/*
Assignment : 10
Topic : Queue using Arrays
02  ||       In Question-1, define a parameterised constructor to initialise member variable.

*/
#include<iostream>
using namespace std;

class Queue
{
    private:
        int Capacity, Front, Rear;
        int *ptr;
    public:
        Queue(int c)
        {
            Capacity = c;
            ptr = new int[Capacity];
            Front = -1, Rear = -1;
        }
};