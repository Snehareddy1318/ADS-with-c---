#include <iostream>
using namespace std;
int main (int argc, char** argv) {
    double PI = 3.14;
    int b = (int) PI;
    cout<< b << endl;
    int c = static_cast <int> (PI);
    cout <<c;
}