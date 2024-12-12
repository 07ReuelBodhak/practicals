#include <iostream>
#include <string>
using namespace std;

#define MAX 20

struct Order {
    int id;
    string name;
    int price;
};

class Queue{
    int front,rear,count;
    Order arr[MAX];
    public:
    Queue(){
        rear = -1;
        front = 0;
        int count = 0;
    }

    void enqueue(Order order){
        if(count == MAX){
            cout<<"We cannot take more orders please wait for a while"<<endl;
            return;
        }
        rear = (rear + 1) % MAX;
        arr[rear] = order;
        cout<<"Order No. "<<arr[rear].id<<" of "<<arr[rear].name<<" is added"<<endl;
        count++;
    }

    void dequeue(){
        if(count == 0){
            cout<<"No order is been taken sorry!!"<<endl;
            return;
        }
        Order order = arr[front];
        front = (front + 1) % MAX;
        count --;
        cout<<"Order "<<order.id<<" of "<<order.name<<" is ready pls pay amount "<<order.price<<" at the counter"<<endl;
    }
};

int main(){
    Queue q;
    Order or1,or2,or3;

    or1.id = 1;
    or1.name = "regular pizza";
    or1.price = 300;

    or2.id = 2;
    or2.name = "cheese pizza";
    or2.price = 350;

    or3.id = 3;
    or3.name = "corn pizza";
    or3.price = 350;

    q.enqueue(or1);
    q.enqueue(or2);
    q.enqueue(or3);
    q.dequeue();
    q.dequeue();
}