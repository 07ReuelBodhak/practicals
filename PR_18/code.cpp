#include <iostream>
#include <string>
#define MAX 100

using namespace std;

class Stack{
    int arr[MAX];
    public:
    int top;
    Stack(){
        top = -1;
    }
    void push(char a);
    char pop();
};

void Stack::push(char a){
    if(top >= MAX){
        cout<<"Stack is full";
        return ;
    }
    top++;
    arr[top] = a;   
}

char Stack::pop(){
    if(top == -1){
        cout<<"Stack is empty";
        return '\0';
    }
    char c = arr[top];
    top--;
    return c;
}

string reverse(string str){
    Stack s;
    string res;
    for(int i=0;i<str.size();i++){
        s.push(str[i]);
    }
    while(s.top != -1){
        res += s.pop();
    }
    return res;
}

int main(){
    string str = "Poor Dan is in a droop";
    cout<<"original string : "<<endl;
    cout<<str<<endl;
    cout<<"Reverse string : "<<endl;
    string rev = reverse(str);
    cout<<rev;
}