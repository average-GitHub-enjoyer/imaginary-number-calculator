#include "imaginarynumber.hpp"

ImaginaryNumber::ImaginaryNumber(){
  _re = 0;
  _im = 0;
}

ImaginaryNumber::ImaginaryNumber(double re, double im){
  _re = re;
  _im = im;
}

ImaginaryNumber::~ImaginaryNumber(){}

void ImaginaryNumber::setRe(double re){
  _re = re;
}

void ImaginaryNumber::setIm(double im){
  _im = im;
}

double ImaginaryNumber::getRe(){
  return _re;
}

double ImaginaryNumber::getIm(){
  return _im;
}

ImaginaryNumber ImaginaryNumber::operator+(ImaginaryNumber &b){
  double c = _re + b.getRe();
  double d = _im + b.getIm();
  return ImaginaryNumber(c, d);
}

ImaginaryNumber ImaginaryNumber::operator-(ImaginaryNumber &b){
  double c = _re - b.getRe();
  double d = _im - b.getIm();
  return ImaginaryNumber(c, d);
}

ImaginaryNumber ImaginaryNumber::operator*(ImaginaryNumber &b){
  double c = _re * b.getRe() - _im * b.getIm();
  double d = _re * b.getIm() + _im * b.getRe(); 
  return ImaginaryNumber(c, d);
}

std::ostream& operator<<(std::ostream& os, const ImaginaryNumber& obj)
{
  std::string sign = " + ";
  if (obj._im < 0){
    sign = " - ";
  }

  os << obj._re << sign << fabs(obj._im) << "i";
  return os;
}
