// stack can be implemented in two ways 1. using arrays & 2. using linked list
// here we are using array to implemnt stack
#include <iostream>

using namespace std;
class stack
{
    // properties
public:
    int *arr;
    int top;
    int size;

    // behaviour or function
    // constructor bna liya (behaviour mein sbse phle constructor bna liya) isme ek size aa rha hoga  int size name ka
    stack(int size)
    {
        this->size = size; // line 12 wle size ko intialise kr diya

        // arrraym creating dynamilcally
        arr = new int[size]; // line 10 wle array ko memory provide kra diya
        top = -1;            // line 9 ke top ko intialise kar diya
    }
    // ab chaar function hogen push, pop,peek,isempty
    void push(int element)
    {
        // push karne se pahle chck space available hai ya nhi
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "stak overflow" << endl;
        }
    }
    int pop()
    {
        // This variable will be used to temporarily store the value of element to be popped
        int temp; 
        // atleast ek elemnt toh present ho toh tbhi toh pop kar paunga
        if (top >= 0)
        {
            temp=arr[top];
            // Top element will be assigned 0 to imitate removal of element
            arr[top]=0;
            top--;
            return temp;
            
        }
        else
        {
            cout << "stack underflow" << endl;
        }
    }
    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "stack is empty" << endl;
            return -1;
        }
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    stack st(5);
    st.push(33);
    st.push(44);
    st.push(45);

    cout <<"The top element is : "<< st.peek() << endl;
    cout<<"Element popped : "<<st.pop()<< endl;
    cout<<"Element popped : "<<st.pop()<< endl;

    if (st.isEmpty())
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        cout << "stack is not empty" << endl;
    }
    return 0;
}