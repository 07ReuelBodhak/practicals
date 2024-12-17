#include <iostream>
#include <string>
#include <cctype>
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
    if(top >= MAX - 1){
        cout<<"Stack is full";
        return ;
    }
    top++;
    arr[top] = a;   
}

char Stack::pop(){
    if(top == -1){
        return '\0';
    }
    char c = arr[top];
    top--;
    return c;
}

bool isPalindrome(string str){
    Stack s;
    string res;
    for(int i=0;i<str.size();i++){
        if(str[i] != ' '){
            s.push(tolower(str[i]));
        }
    }
    int i=0;
    while(str[i] != '\0'){
        if(str[i] != ' '){
            if(tolower(str[i]) != s.pop()) return false;
        }
        i++;
    }
    return true;
}

int main(){
    string str = "Pooir Dan is in a droop";
    if(isPalindrome(str)){
        cout<<"string : "<<str<<" is palindrome";
    }else{
        cout<<"string : "<<str<<" is not a palindrome";
    }
}
