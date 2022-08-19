#include <iostream>
#include <string>

using namespace std;

class A{
    protected:
        int a;
    public:
        void set_a(int a){
           this->a = a;
        }
        int get_a() const{
            return a;
        }
};

class B : public A {
    private:
        double x;
    public:
    void set_x(double a_x){ x = a_x;}
    void set_a(int new_a){
        if(new_a < 0){
            A::set_a(0);
        }else{
            a = 0;
        }
    }
    double foo(){
        return x* this->a;
    }
};

int main(){

    A a;
    B b;
    

    a.set_a(-50);
    b.set_a(50);

    cout << b.get_a() << endl;

    return 0;
}