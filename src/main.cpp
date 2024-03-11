#include<iostream>
#include "../headers/mymathlib.h"
using namespace std;

int main(int argc, char* argv[]) {
    int x,y;
    x=atoi(argv[1]);
    y=atoi(argv[2]);
    if (argc!=3){
    	cout << "Enter only 2 input integers with single space i.e: ./main 10 15" << endl;
	return -1;	
    }

   
    cout << "The sum is:" << add(x, y) << endl;
    cout << "The difference is:" << sub(x, y) << endl;
    cout << "The product is:" << mul(x, y) << endl;
   

    return 0;
}
