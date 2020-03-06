#include <iostream>
#include <algorithm>
int main()
{
    int fileSize, usbNr, sum=0,counter=0;
    std::cin>>usbNr>>fileSize;
    int usbCapcities [usbNr];
    for(int i = 0 ; i < usbNr ; i++){
        std::cin>>usbCapcities[i];
    }
    std::sort(usbCapcities, usbCapcities+usbNr);
    for(int i = usbNr-1 ; i >= 0 ; i--){
        sum += usbCapcities[i];
        if(sum >= fileSize){
            counter++;
            break;
        }
        counter++;
    }
    std::cout << counter << std::endl;
    return 0;}