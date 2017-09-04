#include<iostream>
using namespace std;
template <typename T>


class Stack
{
	 T *data;
    int nextIndex;
    int totalSize;
	public :
	Stack(int size)
	{
		data=new T[size];
		nextIndex=0;
		totalSize=size;
	}
	~Stack()
	{
		delete [] data;
	}
	int getSize()
	{
		return nextIndex;
	}
	bool isEmpty()
	{
		if(nextIndex==0)
		{
			return 1;
		}
		else
			return 0;
	}
	T top()
	{
		if(isEmpty())
		{
			cout<<"stack is full";
		}
		else
			return data[nextIndex-1];
		
	}
	T push(int datat)
	{
		if(nextIndex==totalSize)
		{
			T* temp=new T[2 * totalSize];
			for(int i=0;i<totalSize;i++)
			{
				temp[i]=data[i];
			}
			totalSize*=2;
			delete[] data;
			data=temp;
		}
		data[nextIndex]=datat;
		nextIndex++;
	}
	T pop()
	{
		 if(isEmpty()) {
            cout << "Stack empty ! " << endl;
            return -1;
        }
        nextIndex--;
        return data[nextIndex];
	}
	
	
	
	
};
