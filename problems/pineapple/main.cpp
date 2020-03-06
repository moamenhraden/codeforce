#include <iostream>
#include <string>
#define YES "YES"
#define NO "NO"


int main(int argc, char const *argv[])
{
    int t, s, x, T=0, semaphore=0;
    bool secondTime = false;
    std::string output = NO ; 
    std::cin>> t >> s >> x ;
    T += t;
    while( T <= x){
        if(T==x){
            output = YES;
        }
        if(semaphore == 0 ){
            T += s;
            if(secondTime){
                T--;
            }
            secondTime = true;
            semaphore=1;    
        }else if(semaphore == 1){
            T += 1;
            semaphore = 0;
        }
    }

    std::cout << output << std::endl;
    return 0;
}
