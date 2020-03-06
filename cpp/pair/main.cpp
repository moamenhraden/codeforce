#include <iostream>
#include <string>


using namespace std;


struct user{
    int id;
    string name;
};

class user2{
    public : 
    int id ; 
    string name ; 
};





int main()
{
    
    pair<int,string>id_user;
    id_user = make_pair(1, "kenan");
    cout << id_user.first << id_user.second <<  endl;

    user2 kenan;
    kenan.id = 1 ; 
    kenan.name = "kenan"; 
    cout << kenan.name << kenan.id << endl;


    user moamen ; 
    moamen.id = 2 ; 
    moamen.name = " moamen "; 

    cout << moamen.id << moamen.name << endl;


    return 0;
}

