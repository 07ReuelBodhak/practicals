#include <iostream>
#include <string>

using namespace std;
#define MAX 20

struct Node {
    string name;
    int id;
    int price;
    Node* next;
};

class Queue{
    Node* front;
    Node* rear;
    int count;
    public:
    Queue(){
        front = nullptr;
        rear = nullptr;
        count = 0;
    }

    void enqueue(int id,int price,string name){
        Node* newNode = new Node();
        newNode->id = id;
        newNode->price = price;
        newNode->name = name; 
        if(count == MAX){
            cout<<"sorry we cannot take more order"<<endl;
            return;
        }
        cout<<"Order Id : "<<newNode->id<<endl;
        cout<<"Order Name : "<<newNode->name<<endl;
        cout<<"Order Price : "<<newNode->price<<endl;
        cout<<"Added"<<endl;
        count++;
        if(rear == nullptr){
            front = rear = newNode;
            rear->next  = front;
            return;
        }
        newNode->next = front;
        rear->next = newNode;
        rear = newNode;
    }

    void dequeue(){
        if(count == 0){
            cout<<"sorry no orderer to server!!"<<endl;
            return;
        }
        count--;
        Node* temp = front;
        cout<<"Order Id : "<<temp->id<<endl;
        cout<<"Order Name : "<<temp->name<<endl;
        cout<<"Order Price : "<<temp->price<<endl;
        cout<<"Is ready please collect your order from counter"<<endl;
        front = front -> next;
        delete temp;
    }   
};

int main(){
    Queue q;
    q.enqueue(1,300,"regular pizza");
    q.enqueue(2,240,"small cheese pizza");
    q.enqueue(3,350,"double cheese pizza");
    q.dequeue();
    q.dequeue();
}