#include <iostream>

using namespace std;

class D {
    private:
        int D1;
        int D2;
    public:
        D() {
            D1 = 0;
            D2 = 0;
        }

        void MD1();
        void MD2();
        void MD3();
        void MD4();


};

void D::MD1() { 
    cout<<"MD1"<<endl;
};

void D::MD2() {
    
    cout<<"MD2"<<endl;
};


void D::MD3() {

    cout<<"MD3"<<endl;
};

void D::MD4() {
    
    cout<<"MD4"<<endl;  
};
