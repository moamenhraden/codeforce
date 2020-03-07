#include <iostream>
#include <string>
#include <stack>

using namespace std;

class person{
    public: 
    string name;
    person(string name);
};


int main(int argc, char const *argv[])
{
    stack<string>mystack;
    mystack.push("kenan");
    // person obj = person("moamen");
    // cout << "obj : " << obj.name << endl;
    mystack.emplace("item2");
    cout << mystack.top() << endl;
    mystack.pop();
    cout << mystack.top() << endl;
    cout << mystack.size() << endl;
    cout << mystack.empty() << endl;
    return 0;
}


person::person(string name){
    this->name = name;
}