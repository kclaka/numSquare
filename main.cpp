#include <iostream>

/**
 * Generate the Square of number less than 100
 * Author : K3NN!
 */

using namespace std;


int square(int i){
    return i*i;
}

int main() {
    int i = 0;
    while (i < 100){
        cout << i <<"\t"<<square(i)<<endl;
        ++i;
    }
}


