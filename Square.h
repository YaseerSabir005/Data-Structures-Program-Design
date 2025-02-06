#ifndef SQUARE_H
#define SQUARE_H

class Square {

    private:
        double side;

    public:
        Square(double s){
            side = s;
        } 

        double getSide() const {
            return side;
        }

        double getArea() const{
            return side * side;
        }

        double getPerimeter() const {
            return side*4;
        }

        bool operator <(const Square & rhs) const {

            return getSide() < rhs.getSide();
        }
};
#endif