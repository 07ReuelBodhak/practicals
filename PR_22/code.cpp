#include <iostream>
using namespace std;

#define MAX 100

class JobQueue{
    int rear,front;
    int arr[MAX];
    public:
    JobQueue(){
        rear = -1;
        front = 0;
    }

    void enqueue(int jobId){
        if(rear >= MAX-1){
            return;
        }
        rear++;
        arr[rear] = jobId;
        cout<<"Job ID "<<arr[rear]<<" added in a queue"<<endl;
    }

    void dequeue(){
        if(front > rear){
            return;
        }
        cout << "Job ID " <<arr[front] << " removed from queue"<<endl;
        front++;
    }
};

int main(){
    JobQueue jq;
    jq.enqueue(3);
    jq.enqueue(7);
    jq.enqueue(8);
    jq.dequeue();
}