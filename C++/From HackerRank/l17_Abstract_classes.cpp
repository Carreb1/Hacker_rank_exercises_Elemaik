#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <cassert>
using namespace std;

struct Node{
   Node* next;
   Node* prev;
   int value;
   int key;
   Node(Node* p, Node* n, int k, int val):prev(p),next(n),key(k),value(val){};
   Node(int k, int val):prev(NULL),next(NULL),key(k),value(val){};
};

class Cache{
   
   protected: 
   map<int,Node*> mp; //map the key to the node in the linked list
   int cp;  //capacity
   Node* tail; // double linked list tail pointer
   Node* head; // double linked list head pointer
   virtual void set(int, int) = 0; //set function
   virtual int get(int) = 0; //get function

};

// My code:
class LRUCache : public Cache {
public:
    LRUCache(int capacity) {
        cp = capacity;
        head = nullptr;
        tail = nullptr;
    }

    void set(int key, int value) override {
        // Case 1: Key already exists (update)
        if(mp.find(key) != mp.end()) {
            Node* found = mp[key];
            found->value = value; // Update value
            
            // Move to head if not already there
            if(found != head) {
                // Remove from current position
                if(found == tail) {
                    tail = tail->prev;
                    tail->next = nullptr;
                } 
                else {
                    found->prev->next = found->next;
                    found->next->prev = found->prev;
                }
                
                // Insert at head
                found->next = head;
                found->prev = nullptr;
                head->prev = found;
                head = found;
            }
        } 
        // Case 2: New key
        else {
            // If cache is full, evict tail
            if(mp.size() >= cp) {
                mp.erase(tail->key);
                Node* toDelete = tail;
                tail = tail->prev;
                if(tail) tail->next = nullptr;
                delete toDelete;
            }
            
            // Create new node and insert at head
            Node* newNode = new Node(nullptr, head, key, value);
            if(head) head->prev = newNode;
            head = newNode;
            
            // If first node, set tail
            if(!tail) tail = head;
            
            mp[key] = newNode;
        }
    }

    int get(int key) override {
        if(mp.find(key) != mp.end()) {
            Node* found = mp[key];
            
            // Move to head if not already there
            if(found != head) {
                // Remove from current position
                if(found == tail) {
                    tail = tail->prev;
                    tail->next = nullptr;
                } 
                else {
                    found->prev->next = found->next;
                    found->next->prev = found->prev;
                }
                
                // Insert at head
                found->next = head;
                found->prev = nullptr;
                head->prev = found;
                head = found;
            }
            return found->value;
        }
        return -1;
    }
};
//

int main() {
   int n, capacity,i;
   cin >> n >> capacity;
   LRUCache l(capacity);
   for(i=0;i<n;i++) {
      string command;
      cin >> command;
      if(command == "get") {
         int key;
         cin >> key;
         cout << l.get(key) << endl;
      } 
      else if(command == "set") {
         int key, value;
         cin >> key >> value;
         l.set(key,value);
      }
   }
   return 0;
}
