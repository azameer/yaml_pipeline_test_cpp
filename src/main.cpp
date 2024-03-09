#include<iostream>
#include "../headers/mymathlib.h"
using namespace std;

int main() {
    int x=10, y=5;

   
    cout << "The sum is:" << add(x, y) << endl;
    cout << "The difference is:" << sub(x, y) << endl;
    cout << "The product is:" << mul(x, y) << endl;
   

    return 0;
}
