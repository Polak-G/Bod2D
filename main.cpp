#include <iostream>
#include <math.h>
#include "Bod2D.h"


int main()
{
    Bod2D Prvy;
    Bod2D Druhy(3);
    Bod2D Treti(1,6);

    std::cout<<Prvy<<Druhy<<Treti;

    //std::cout<<Bod2D()<<Bod2D(3)<<Bod2D(1,6);
    //Prvy=Prvy+(Druhy);
    std::cout<<Prvy+(Druhy);
    //Prvy=Prvy-(Druhy);
    std::cout<<Prvy-(Druhy);
    //Prvy=Prvy*(5);
    std::cout<<Prvy*(5);
    //Prvy=Prvy/(5);
    std::cout<<Prvy/(5);
    //Prvy=(5)*Prvy;
    std::cout<<(5)*Prvy;
    //Prvy=(5)/Prvy;
    //std::cout<<(5)/Prvy;
    //std::cout<< "Vzdialenost bodu od 0 je: " <<Prvy.vzdialenost0() << std::endl;
    std::cout<< "Vzdialenost bodu od 0 je: " <<Prvy.vzdialenost() << std::endl;
    std::cout<< "Vzdialenost bodov je: " <<Prvy.vzdialenost(Druhy) << std::endl;
    std::cout<< "Stred bodov je: "<<Prvy.stred(Druhy)<< std::endl;
    return 0;
}

Bod2D::Bod2D()
{
    std::cout<<"Zadaj suradnicu x: ";
    std::cin>>X;
    std::cout<<"Zadaj suradnicu y: ";
    std::cin>>Y;
}

Bod2D::Bod2D(float mojeX)
{
    X = mojeX;
    std::cout << "Zadaj suradnicu y: ";
    std::cin >> Y;
}
Bod2D::Bod2D(float mojeX, float mojeY)
{
    X=mojeX;
    Y=mojeY;
}

float Bod2D::getX() const
{
    return X;
}

float Bod2D::getY() const
{
    return Y;
}
void Bod2D::setX(float mojeX)
{
    X=mojeX;
}
void Bod2D::setY(float mojeY)
{
    Y=mojeY;
}
std::ostream &operator<<(std::ostream &os, const Bod2D &other)
{
    os<<"Bod ma suradnice ["<<other.X<<","<<other.Y<<"]"<<std::endl;
    return os;
}

std::istream & operator>>(std::istream & is,Bod2D & other)
{
    std::cout<<"Zadaj suradnicu x: ";
    is>>other.X;
    std::cout<<"Zadaj suradnicu y: ";
    is>>other.Y;
    return is;
}

Bod2D Bod2D::operator+(const Bod2D &other) const
{
    return {(X+ other.X), (Y+other.Y)};
}
Bod2D Bod2D::operator-(const Bod2D &other) const
{
    return {(X- other.X), (Y-other.Y)};
}

Bod2D Bod2D::operator*(float cislo) const
{
    return {(X*cislo),(Y*cislo)};
}
Bod2D Bod2D::operator/(float cislo) const
{
    if(cislo==0)
    {
        cislo= 1;
        std::cout<< "Nulou sa delit neda."<< std::endl;
    }
    return {(X/cislo),(Y/cislo)};
}
Bod2D operator*(float cislo, const Bod2D &other)
{
    return {(cislo*other.X),(cislo*other.Y)};
}
/*Bod2D operator/(float cislo, const Bod2D & other)
{
    return {(cislo/other.X),(cislo/other.Y)};
}*/
/*float Bod2D::vzdialenost0() const
{
    return sqrt((X*X)+(Y*Y));
}*/
float Bod2D::vzdialenost(const Bod2D &other)
{
    return sqrt(((X-other.X)*(X-other.X))+((Y-other.Y)*(Y-other.Y)));
}

/*void Bod2D::Stred(const Bod2D &otherB)
{
    Bod2D other(X+otherB.X,Y+otherB.Y);
    std::cout<< "Stred medzi bodmi je: " << other/2 << std::endl;
}
*/
Bod2D Bod2D::stred(const Bod2D &other)
{

    return Bod2D (((X+other.X)/2),((Y+other.Y)/2));

}