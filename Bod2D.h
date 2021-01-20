//
// Created by Gregor on 15. 1. 2021.
//

#ifndef BOD2D_BOD2D_H
#define BOD2D_BOD2D_H
class Bod2D
{
private:
    float X;
    float Y;
public:
    float getX() const;
    float getY() const;
    void setX(float mojeX);
    void setY(float mojeY);
    Bod2D(float mojeX, float mojeY);
    Bod2D();
    explicit Bod2D(float mojeX);
    //explicit Bod2D(float mojeY);
    friend std::ostream & operator<<(std::ostream & os,const Bod2D & other);
    friend std::istream & operator>>(std::istream & is, Bod2D & other);
    Bod2D operator+(const Bod2D &other) const;
    Bod2D operator-(const Bod2D &other) const;
    Bod2D operator*(float cislo) const;
    Bod2D operator/(float cislo) const;
    friend Bod2D operator*(float cislo, Bod2D &other);
    //friend Bod2D operator/(float cislo, const Bod2D & other);
    float vzdialenost0() const;
    float vzdialenost(const Bod2D &other) const;
    void Stred(const Bod2D & other);


};
#endif //BOD2D_BOD2D_H
