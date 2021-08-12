class Complex
{
private:
    double r;
    double i;
public:
    Complex(double R, double I):r(R), i(I){}
    Complex& operator+(Complex b)
    {
        this->r += b.r;
        this->i += b.i;
        return *this;
    }
    Complex& operator+=(Complex b)
    {
        *this = *this + b;
        return *this;
    }
};

int main()
{
    Complex c{1,2};
    Complex d{3,4};
    d = d + c;
    d += c;

    return 0;
}