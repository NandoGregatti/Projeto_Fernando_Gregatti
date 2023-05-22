#include <iostream>

using namespace std;

class A {
    private:
        int A1;
        float A2;
    public:
        A() {
            A1 = 0;
            A2 = 0;
        }

        void MA1();
        void MA2();
        void MA3();
};

void A::MA1() {
    
    cout<<"MA1"<<endl;
};

void A::MA2() {
    cout<<"MA2"<<endl;
};

void A::MA3() {
    cout<<"Alteração a classe A partir do clone"<<endl;
};