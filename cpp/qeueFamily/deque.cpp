#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main(int argc, char const *argv[])
{
    deque<int>mydeque;
    // mydeque.push_front(1);
    // mydeque.push_front(2);
    // mydeque.push_front(3);
    // mydeque.insert(mydeque.end(), 10);
    // mydeque.erase(mydeque.end());
    mydeque.assign(2 , 2);
    // cout << mydeque.back() << endl;
    // mydeque.pop_back();
    // cout << mydeque.back() << endl;
    cout << mydeque[0] << endl;
    cout << mydeque[2] << endl;
    cout << mydeque[5] << endl;
    // cout << mydeque.at(2) << endl;
    return 0;
}
