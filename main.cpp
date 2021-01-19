#include <iostream>
#include "Bod2D.h"

int main()
{
    Bod2D Prvy;
    Bod2D Druhy(3);
    Bod2D Treti(1,6);

    std::cout<<Prvy<<Druhy<<Treti;

    //std::cout<<Bod2D()<<Bod2D(3)<<Bod2D(1,6);
    Prvy=Prvy+(Druhy);
    std::cout<<Prvy;
    Prvy=Prvy-(Druhy);
    std::cout<<Prvy;
    Prvy=Prvy*(5);
    std::cout<<Prvy;
    Prvy=Prvy/(5);
    std::cout<<Prvy;
    Prvy=(5)*Prvy;
    std::cout<<Prvy;
    Prvy=(5)/Prvy;
    std::cout<<Prvy;
    return 0;
}

Bod2D::Bod2D()
{
    std::cout<<"Zadaj suradnicu x: ";
    std::cin>>x;
    std::cout<<"Zadaj suradnicu y: ";
    std::cin>>y;
}

Bod2D::Bod2D(float mojeX)
{
    x = mojeX;
    std::cout << "Zadaj suradnicu y: ";
    std::cin >> y;
}
Bod2D::Bod2D(float mojeX, float mojeY)
{
    x=mojeX;
    y=mojeY;
}

float Bod2D::getX() const
{
    return x;
}

float Bod2D::getY() const
{
    return y;
}
void Bod2D::setX(float mojeX)
{
    x=mojeX;
}
void Bod2D::setY(float mojeY)
{
    y=mojeY;
}
std::ostream &operator<<(std::ostream &os, const Bod2D &other)
{
    os<<"Bod ma suradnice ["<<other.x<<","<<other.y<<"]"<<std::endl;
    return os;
}

std::istream & operator>>(std::istream & is,Bod2D & other)
{
    std::cout<<"Zadaj suradnicu x: ";
    is>>other.x;
    std::cout<<"Zadaj suradnicu y: ";
    is>>other.y;
    return is;
}

Bod2D Bod2D::operator+(const Bod2D &other) const
{
    return {(x+ other.x), (y+other.y)};
}
Bod2D Bod2D::operator-(const Bod2D &other) const
{
    return {(x- other.x), (y-other.y)};
}

Bod2D Bod2D::operator*(float cislo) const
{
    return {(x*cislo),(y*cislo)};
}
Bod2D Bod2D::operator/(float cislo) const
{
    return {(x/cislo),(y/cislo)};
}
Bod2D operator*(float cislo, Bod2D &other)
{
    return {(cislo*other.x),(cislo*other.y)};
}
Bod2D operator/(float cislo, const Bod2D & other)
{
    return {(cislo/other.x),(cislo/other.y)};
}