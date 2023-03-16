#include<iostream>
#include<stack>
using namespace std;
int main()
{
    // creation of stack
    stack<int> s;
    // push operation
    s.push(3);
    s.push(5);
    //pop operation
    s.pop();

    cout<<"printiong the top enlement"<<s.top()<<endl;

    // checkiong stack is empty or not
    if(s.empty()){
        cout<<"stack is empty"<<endl;

    }
    else{
        cout<<"stack is not empty"<<endl;
    }

    //chking size of stack
    cout<<"size of stack"<<s.size()<<endl;
   return 0;
}