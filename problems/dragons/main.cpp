#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>


#define YES "YES"
#define NO "NO"


int main(int argc, char const *argv[])
{
    int mystrength, dragonsNr;
    std::vector<std::pair<int, int>> dragons;

    std::cin >> mystrength >> dragonsNr;
    std::cout<<std::endl;
    for(int i = 0 ; i < dragonsNr ; i++){
        int dragonStrength, bonus;
        std::cin >> dragonStrength >> bonus;
        dragons.push_back(std::make_pair(dragonStrength, bonus)) ; 
        std::cout<<std::endl;
    }

    std::sort(dragons.begin(), dragons.end());

    std::vector<std::pair<int, int>>::iterator it;
    for(it = dragons.begin(); it < dragons.end(); it++){
        std::cout << (*it).first << std::endl;
    }
    
    /* for(int i = 0 ; i < dragonsNr ; i++){
        std::cout << dragons.at(i).first << dragons.at(i).second << std::endl;
    } */

    // for(int i =0 ; i < dragonsNr ; i++){
    //     int dragonStrength_i = dragons.at(i).first ; 
    //     int bonus_i = dragons.at(i).second;
    //     if(mystrength > dragonStrength_i){
    //         mystrength += bonus_i;
    //     }else{
    //         std::cout << NO << std::endl;
    //         exit(0);
    //     }
    // }
    // std::cout << YES << std::endl;

    return 0;
}
