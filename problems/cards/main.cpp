#include <iostream>
#include <string>
#include <algorithm>
#include <deque>

using namespace std;

int main()
{
    deque<pair<int , int >> cards;
    int cardsNr;
    cin>> cardsNr;
    cout << endl;


    for(int i =1 ; i <= cardsNr ; i++){
        int card;
        cin >> card ; 
        pair<int , int> obj = make_pair(card , i );
        cards.push_back(obj);
    }

    sort(cards.begin(), cards.end());

    for(int i = 0 ; i < (cardsNr/2) ; i++ ){
        int a , b ;
        a = cards.front().second;
        cards.pop_front();
        b = cards.back().second;
        cards.pop_back();
        cout << a << " " << b << endl;
    }
    return 0;
}
