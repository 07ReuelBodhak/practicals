#include <iostream>
using namespace std;
#define MAX 100

class Deque{
    int rear,front;
    int arr[MAX];
    public:
    Deque(){
        rear = -1;
        front = 0;
    }

    void enqueue(int data){
        if(rear > MAX - 1){
            return;
        }
        rear++;
        arr[rear] = data;
        cout<<"Item "<<arr[rear]<<" added in queue"<<endl;
    }
    void deleteFromBegining(){
        if(front > rear){
            return;
        }
        cout<<"Item "<<arr[front]<<" removed from front of the queue"<<endl;
        front++;
    }
    void deleteFromEnd(){
        if(rear < front){
            return;
        }
        cout<<"Item "<<arr[rear]<<" removed from back of the queue"<<endl;
        rear--;
    }
};

int main(){
    Deque dq;
    dq.enqueue(34);
    dq.enqueue(78);
    dq.enqueue(89);
    dq.deleteFromBegining();
    dq.deleteFromEnd();
}