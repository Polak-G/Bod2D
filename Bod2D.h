//
// Created by Gregor on 15. 1. 2021.
//

#ifndef BOD2D_BOD2D_H
#define BOD2D_BOD2D_H
class Bod2D
{
private:
    float x;
    float y;
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
    Bod2D spocitaj(const Bod2D &other)const;
    Bod2D odcitaj(const Bod2D &other)const;
    Bod2D vynasob(const Bod2D, float cislo)const;
    Bod2D vydelBodom(float cislo, const Bod2D)const;
    Bod2D vydelCislom(const Bod2D, float cislo)const;
    void vypisBod() const;
};
#endif //BOD2D_BOD2D_H
