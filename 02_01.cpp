/*
Assignment : 02
Topic : Array
01 ||       Define a copy constructor in Array class to perform deep copy.

*/
#include<iostream>
using namespace std;

class Array
{
    private:
        int Capacity, LastIndex, *p;
    public:
        Array(int size)
        {
            Capacity = size;
            LastIndex = -1;
            p = new int[Capacity];
        }
        Array(Array &A)
        {
            Capacity = A.Capacity;
            LastIndex = A.LastIndex;
            int *p = new int[Capacity];
            for (int i = 0 ; i <= LastIndex ; i++)
                p[i] = A.p[i];
        }
        ~Array()
        {
            delete[] p;
        }
        void SetCapacity(int c)
        {
            Capacity = c;
        }
        void CreateArray()
        {
            p = new int[Capacity];
        }
        bool Empty_Array_or_not()
        {
            if (LastIndex == -1)
                return true;
            else
                return false;
// True means Array is Empty, and False means Non-Empty.
        }
        void Append(int a)
        {
            if(LastIndex < Capacity-1)
            {
                LastIndex++;
                p[LastIndex] = a;
            }
            else
                cout<<"Array is Full !"; 
        }
        void Insert(int index, int data)
        {
            if(LastIndex == Capacity-1) 
            {   
                cout<<"Array is Full !"<<endl;
                return;
            }
            if(index < 0 || index > LastIndex)
            {
                cout<<"Invalid Index "<<endl;
                return;
            }
            LastIndex++;
            for (int i = LastIndex ; i >= index  ; i--)
                p[i] = p[i-1];
            p[index] = data;   
        }
        void Edit(int index, int newdata)
        {
            if(index < 0 || index > LastIndex)
            {
                cout<<"Invalid Index "<<endl;
                return;
            }
            p[index] = newdata;
        }
        void Delete(int index)
        {
            if(index < 0 || index > LastIndex)
            {   
                cout<<"Invalid Index";
                return;
            }
            for (int i = index ; i < LastIndex ; i++)
                p[i] = p[i+1];
            LastIndex--;
        }
        bool Full_Array_or_not()
        {
            if (LastIndex == Capacity-1)
                return true;
            else
                return false;
// True means Array is Full and False means Array is not full.
        }
        int get_element(int index)
        {
            if(index < 0 || index > LastIndex)
                return;
            return p[index];
        }
        int count_elements()
        {
            return (LastIndex + 1);
        }
        int find_element(int data)
        {
            for (int i = 0 ; i <= LastIndex ; i++)
                if(data == p[i])
                    return i;
            return -1;
        }
};