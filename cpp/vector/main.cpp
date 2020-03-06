#include <iostream>
#include <string>
#include <vector>
#include <iterator>

int main()
{
    std::vector<int> numbers = {1 , 2 ,3 ,4 , 5}; 
    std::vector<int>::iterator it ; 
    for(it = numbers.rbegin(); it < numbers.end(); it++){
        std::cout << *it << std::endl;
    }   
    return 0;
}
