#include<iostream>
#include"StackUsingLL.h"
using namespace std;
int main()
{
	 Stack<int> *s = new Stack<int>(5);
	   s->push(10);
    s->push(20);
    s->push(30);
    s->push(40);
    s->push(50);
    s->push(60);

    cout << "Size : " << s->getSize() << endl;

    cout << "Top : " << s->top() << endl;

    cout << "Pop : " << s->pop() << endl;
    cout << "Pop : " << s->pop() << endl;
	return 0;
}
