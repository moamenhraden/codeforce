#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main(int argc, char const *argv[])
{
    queue<int> myqueue; 
    myqueue.push(1);
    myqueue.push(2);
    myqueue.push(3);
    cout << myqueue.front() << endl;
    cout << myqueue.back() << endl;
    cout << myqueue.size() << endl;
    cout << myqueue.empty() << endl;
    return 0;
}
