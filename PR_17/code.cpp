#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

class Binary{
    public:
    Node* head;
    Node* rear;
    Binary(){
        head = nullptr;
        rear = nullptr;
    }

    void insert(int data){
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = nullptr;
        if(head == nullptr){
            head = rear = newNode;
            rear->prev = nullptr;
            head->prev=nullptr;
            return;
        }
        rear->next = newNode;
        newNode->prev = rear;
        rear = newNode; 
    }

    void insertFromBegining(int data){
        Node* newNode = new Node();
        newNode->data = data;
        newNode->prev = nullptr;

        if(head == nullptr){
            newNode->next = nullptr;
            head = rear = newNode;
            return;
        }
        newNode->next = head; 
        head->prev = newNode;
        head = newNode;
    }

    void display(){
        
        Node* temp = head;
        cout<<"head -> ";
        while(temp != nullptr){
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }
        cout<<"null\n";
    }

    void Twos_Compliment(){
        Node* temp = head;
        while(temp != nullptr){
            temp->data = (temp->data == 0) ? 1 : 0;
            temp = temp->next;
        }
        int carry = 1;
        Node* last = rear;

        while(last != nullptr || carry > 0){
            int sum = last->data + carry;
            last->data = sum % 2;
            carry = sum/2;
            last = last->prev;
        }
    }

    Binary add(Binary& other){
        Binary res;
        int carry = 0;
        Node* a = rear;
        Node* b = other.rear;

        while(a!=nullptr || b!=nullptr || carry > 0){
            int bitA = (a != nullptr) ? a->data : 0;
            int bitB = (b != nullptr) ? b->data : 0;

            int sum = bitA + bitB + carry;

            res.insertFromBegining(sum%2);
            carry = sum/2;
            if (a != nullptr) a = a->prev;
            if (b != nullptr) b = b->prev;
        }
        return res;
    }
};

Binary arrToNode(int arr[],int n){
    Binary res;
    for(int i=0;i<n;i++){
        res.insert(arr[i]);
    }
    return res;
}

int main(){
    int b1[] = {0,1,1,0,0,1,0};
    int b2[] = {1,1,0,0,1,0,0};

    Binary B1 = arrToNode(b1,7); 
    Binary B2 = arrToNode(b2,7);

    Binary B3 = B1.add(B2);
    cout<<"Addition of two binary number"<<endl;
    B3.display();

    cout<<"Binary number"<<endl;
    B1.display();
    cout<<"Twos compliment"<<endl;
    B1.Twos_Compliment();
    B1.display();

}