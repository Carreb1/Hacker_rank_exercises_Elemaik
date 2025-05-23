#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class Person{
public:
    string name;
    int age;
    virtual void getdata() {}
    virtual void putdata() {}
  
};

class Professor : public Person{
    private:
        int publications;
        static int cur_id_counter;
    public:
        int cur_id;
        Professor() { cur_id = ++cur_id_counter; }
        
        void getdata() override {
            cin >> name >> age >> publications;
        }
        void putdata() override {
            cout << name << ' ' << age << ' ' << publications << ' ' << cur_id << endl;
        }
    
};
int Professor::cur_id_counter = 0;

class Student : public Person{
    private:
        static int cur_id_counter;
        int marks[6];
    public:
        int cur_id;
        Student() { cur_id = ++cur_id_counter; }
        void getdata() override {
            cin >> name >> age;
            for (int i = 0; i < 6; i++){
                cin >> marks[i];
            }
        }
        void putdata() override {
            int sum = 0;
            for (int i = 0; i < 6; i++){
                sum = sum + marks[i];
            }
            cout << name << ' ' << age << ' ' << sum << ' ' << cur_id << endl;
        }
        
};
int Student::cur_id_counter = 0;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
