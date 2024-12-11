#include <iostream>
#include <string>
#define MAX 100

using namespace std;

class Stack {
    char arr[MAX];
    public:
    int top;
    Stack() {
        top = -1;
    }
    void push(char a);
    char pop();
    bool isEmpty();
};

void Stack::push(char a) {
    if (top >= MAX - 1) {
        cout << "Stack is full\n";
        return;
    }
    arr[++top] = a;   
}

char Stack::pop() {
    if (top == -1) {
        return '\0';
    }
    return arr[top--];
}

bool Stack::isEmpty() {
    return top == -1;
}

int isValid(string str) {
    Stack s;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{') {
            s.push(str[i]);
        } else if (str[i] == ')') {
            if (s.pop() != '(') return -1;
        } else if (str[i] == ']') {
            if (s.pop() != '[') return -1;
        } else if (str[i] == '}') {
            if (s.pop() != '{') return -1;
        }
    }
    return s.isEmpty() ? 0 : -1;
}

int main() {
    string brackets = "[()]{}{[()()]()}";
    if (isValid(brackets) == 0) {
        cout << "Parenthesis \"" << brackets << "\" is a valid parenthesis\n";
    } else {
        cout << "Parenthesis \"" << brackets << "\" is not a valid parenthesis\n";
    }
}
