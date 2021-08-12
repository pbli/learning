#include <iostream>
using namespace std;

class dog{
    int aaaa;

    public:
    virtual ~dog(){};
    void lol(){cout<<"lolol"<<endl;}
    virtual void bark(){cout<<"wo"<<aaaa<<endl;}
};

class yellowdog:public dog{
    int age;
    public:
    void bark(){cout<<"woof age = " << age << endl;}
};

int main(){
    dog * pd = new dog();
    yellowdog * yd = new yellowdog();
    pd->bark();
    pd->lol();
    yd->lol();

    yellowdog * py = dynamic_cast<yellowdog*> (pd);
    if (py)
    {
        cout<<"we did it";
        py->bark();
    }
    // better solution
    pd = yd;
    pd->bark();

    cout<<"py="<<py<<endl;
    cout<<"pd="<<pd<<endl;
}