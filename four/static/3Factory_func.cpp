#include <iostream>

using namespace std;

class Shape {
    public:
        enum ShapeType {
            CIRCLE,
            SQUARE,
            RECTANGLE
        };
        static Shape * CreateShape(ShapeType type);
        virtual void draw() = 0;
};

class Circle : public Shape {
    public:
        void draw() {
            cout << "Drawing Circle" << endl;
        }
};

class Square : public Shape {
    public:
        void draw() {
            cout << "Drawing Square" << endl;
        }
};

class Rectangle : public Shape {
    public:
        void draw() {
            cout << "Drawing Rectangle" << endl;
        }
};

Shape* Shape :: CreateShape(ShapeType type) {
    switch(type) {
        case CIRCLE:
            return new Circle();
            break;
        case SQUARE:
            return new Square();
            break;
        case RECTANGLE:
            return new Rectangle();
            break;
        default:
            cout << "Enter correct shape!!" << endl;
    }
}

int main() {
    Shape* s1 = Shape :: CreateShape(Shape :: CIRCLE);
    Shape* s2 = Shape :: CreateShape(Shape :: RECTANGLE);
    Shape* s3 = Shape :: CreateShape(Shape :: SQUARE);
    s1 -> draw();
    s2 -> draw();
    s3 -> draw();
}
