#include <iostream>

using namespace std;

class C {
    private:
        string C1;
        int C2;
    public:
        C() {
            C1 = "A";
            C2 = 0;
        }

        void MC1();
        void MC2();
};

void C::MC1() {
    cout<<"MC1"<<endl;
};

void C::MC2() {
    cout<<"MC2"<<endl;
};