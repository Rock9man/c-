#include <iostream>

using namespace std;

class A {
    public:
        int num1;
        int doublenumber() {
            return num1 + pnum1;
        }
        A(){
            num1 = 0;
        }
        A(int num){
            num1 = num;
        }
    private:
        int pnum1 = 2;
};

class B : public A {
    public:
        int num2;
};

class C {
    public:
        int num3;
};

class D : public A, public C {
    public:
        int num4;
};
int main()
{

    cout << "test class A info start:" << endl;
    //A classA(3);
    A classA;
    cout << "class A number num1 = " << classA.num1 <<endl;
    cout << "class A number double num1 = " << classA.doublenumber() <<endl;
    cout << "test class A info end\n" << endl;

    cout << "test class B info start:" << endl;
    B classB;
    classB.num1 = 2;
    classB.num2 = 3;
    cout << "class B number num1 = " << classB.num1 <<endl;
    cout << "class B number double num1 = " << classB.doublenumber() <<endl;
    cout << "class B number num2 = " << classB.num2 <<endl;
    cout << "test class B info end \n" << endl;

    cout << "test class D info start:" << endl;
    D classD;
    cout << "class D number num1 = " << classD.num1 << endl;
    cout << "class D number double num1 = " << classD.doublenumber() <<endl;
    cout << "class D number num3 = " << classD.num3 << endl;
    cout << "class D number num4 = " << classD.num4 << endl;
    cout << "test class D info end \n" << endl;
    return 0;
}
