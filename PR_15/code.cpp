#include <iostream>
#include <string>

using namespace std;

struct Node {
    string data;
    Node* next;
};

class Set{
    public:
    Node* head;
    Set(){
        head = nullptr;
    }

    void insert(string name){
        Node* newNode = new Node();
        newNode->data = name;
        newNode->next = nullptr;
        if(head==nullptr){
            head = newNode;
            return;
        }
        Node* temp = head;
        while(temp -> next != nullptr){
            if(temp->data == name){
                delete newNode;
                return;
            }
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void display(){
        if(head == nullptr){
            return;
        }
        Node* temp = head;
        cout<<"head -> ";
        while(temp != nullptr){
            cout<<temp->data<<" -> ";
            temp= temp->next;
        }
        cout<<"null\n";
    }

    Set union_set(Set& other){
        Set s;
        Node* a = head;
        while(a != nullptr){
            s.insert(a->data);
            a = a->next;
        }
        Node* b = other.head;
        while(b != nullptr){
            s.insert(b->data);
            b = b->next;
        }
        return s;
    }

    Set symmetricDifference(Set& other){
        Set s;
        Node* temp = head;

        while (temp != nullptr){
            if(!other.contains(temp->data)){
                s.insert(temp->data);
            }
            temp = temp->next;
        }

        temp = other.head;
        while(temp != nullptr){
            if(!contains(temp->data)){
                s.insert(temp->data);
            }
            temp = temp->next;
        }
        return s;
    }

    bool contains(string name) {
        Node* temp = head;
        while(temp != nullptr){
            if(temp->data == name){
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

    int count(){
        int i=0;
        Node* temp = head;
        while(temp != nullptr){
            i++;
            temp = temp->next;
        }
        return i;
    }

};

Set arrToNode(string arr[],int n){
    Set s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    return s;
}


int main(){
    string groupU[] = {"alex","sarah","blaze","eddie","brock","lia","ash","pablo","nia","mike"};
    string groupA[] ={"alex","sarah","blaze","eddie","brock"};//Vanilla
    string groupB[] = {"alex","ash","eddie","pablo","lia"};//butterscotch

    Set A = arrToNode(groupA,5);
    Set B = arrToNode(groupB,5);
    Set C = arrToNode(groupU,10);

    Set unionSet = A.union_set(B);

    Set EitherNotBoth = A.symmetricDifference(B);
    cout<<"student who like either vanilla or butterscotch but not both\n";
    EitherNotBoth.display();

    cout<<"\nNumber of student who dont like either vanilla or butterscotch\n";
    int number_student = C.count() - unionSet.count();
    cout<<number_student;    
}