#include <iostream>

using namespace std;

class B {
    private:
        int B1;
        float B2;
    public:
        B() {
            B1 = 0;
            B2 = 0;
        }

        void MB1();
        void MB2();
};

void B::MB1() {
    cout<<"MB1"<<endl;
};

void B::MB2() {
    cout<<"MB2"<<endl;
};
