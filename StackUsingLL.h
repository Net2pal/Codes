template <typename T>
class Node {
    public : 
    T data;
    Node<T> *next;

    Node(T data) {
        this -> data = data;
        next = NULL;
    }
};
class StackLL {
    Node<T> *head;
    int size;

    public :

    StackLL() {
		head=NULL;
		size=0;

    }

    int getSize() {
	return size;
    }

    bool isEmpty() {
		if(head==NULL)
			return 1;
		return 0;

    }

    void push(T element) {
		Node<T> temp2=new Node<T>(element);
				temp2->next=head;
				head=temp2;
				size++;
    }

    T pop() {
		if(head==NULL)
			return NULL;
		size--;
			//Node<T> * n=head;
			T data=head->data;
			
			head=head->next;
			//delete n;
			return data;
    }

    T top() {
		return head->data;

    }


};
