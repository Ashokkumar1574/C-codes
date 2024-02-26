#include <iostream>
class Base1 {
public:
    Base1(int value1) : data1(value1) {} 
    void display() {
        std::cout << "Base1 Display: " << data1 << std::endl;
    }
protected:
    int data1;
};

// Base class 2
class Base2 {
public:
    Base2(int value2) : data2(value2) {}
    void display() {
        std::cout << "Base2 Display: " << data2 << std::endl;
    }
protected:
    int data2;
};
class Derived : public Base1, public Base2 {
public:
    
    Derived(int value1, int value2, int value3) : Base1(value1), Base2(value2), data3(value3) {}
    
    void display() {
        std::cout << "Derived Display: " << data1 << ", " << data2 << ", " << data3 << std::endl;
    }
private:
    int data3;
};

int main() {
 
    Derived obj(10, 20, 30);
    obj.Base1::display();
    obj.Base2::display();
    obj.display();

    return 0;
}
