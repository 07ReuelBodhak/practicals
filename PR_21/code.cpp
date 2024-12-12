#include <iostream>
using namespace std;

struct Node{
    int id;
    Node* next;
};

class JobQueue{
    Node* front;
    Node* rear;
    public:
    JobQueue(){
        front = nullptr;
        rear = nullptr;
    }

    void enqueue(int jobId){
        Node* newNode = new Node();
        newNode->id = jobId;
        newNode->next = nullptr;
        cout<<"Job ID {"<<jobId<<"} added in Queue"<<endl;
        if(rear == nullptr){
            front = rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = newNode;
    }

    void dequeue(){
        if(front == nullptr){
            return;
        }
        Node* temp = front;
        cout<<"Job ID {"<<temp->id<<"} removed from Queue"<<endl;
        front = front->next;
        delete temp;
    }

    void display(){
        Node* temp = front;
        while(temp != nullptr){
            cout<<"Job ID : "<<temp->id<<endl;
            temp = temp->next;
        }
    }  
};

int main(){
    JobQueue jq;
    jq.enqueue(23);
    jq.enqueue(56);
    jq.enqueue(89);
    jq.dequeue();
}