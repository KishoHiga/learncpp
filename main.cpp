#include <iostream>
int main () {
    int i = 1;
    for (; i<10; i*=2) {
        std::cout<<i<<'\n';
        if (i<10) {
            std::cout<<"Меньше 10!"<<"\n";
        }
    }

}