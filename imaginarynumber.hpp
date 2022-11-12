#ifndef IMAGINARY_NUMBER
#define IMAGINARY_NUMBER


#include <ostream>
#include <math.h>

class ImaginaryNumber
{
  public:
    ImaginaryNumber();
    ImaginaryNumber(double re, double im);
    ~ImaginaryNumber();
    void setRe(double re);
    void setIm(double im);
    double getRe();
    double getIm();
    ImaginaryNumber operator+(ImaginaryNumber &b);
    ImaginaryNumber operator-(ImaginaryNumber &b);
    ImaginaryNumber operator*(ImaginaryNumber &b);
    friend std::ostream& operator<<(std::ostream& os, const ImaginaryNumber& obj);

  private:
    double _re;
    double _im;
};

#endif
