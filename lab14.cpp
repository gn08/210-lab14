// COMSC-210 | Lab 14 | Gaby Filipova
// UML:
// ----------------------------------------------------
//                  Color
// |-red: int                                         |
// |-green: int
// |-blue: int
// ----------------------------------------------------
// |+ set_red (int r): void                           |
// |+ set_green (int g): void                         |
// |+ set_blue (int b): void                          |
// |+ get_red (): int                                 |
// |+ get_green (): int                               |
// |+ get_blue (): int                                |
// |+ print(): void                                   |
// ----------------------------------------------------



#include <iostream>
using namespace std;

// class for color of red, green, and blue
class Color{
    private:
        int red;
        int green;
        int blue;

    public:
    // set_red() sets red part of color
    // arguments: r is integer value representing color hue
    // returns: void
        void set_red(int r){
            red = r;
        }
    // set_green() sets green part of color
    // arguments: g is integer value representing color hue
    // returns: void
        void set_green(int g){
            green = g;
        }
    // set_blue() sets blue part of color b
    // arguments: is integer value representing color hue
    // returns: void
        void set_blue(int b){
            blue = b;
        }
    // get_red() gets red part of color
    // return: integer value for red
        int get_red() const{
            return red;
        }
    // get_green() gets green part of color
    // return: integer value for green
        int get_green() const{
            return green;
        }
    // get_blue() gets blue part of color
    // return: integer value for blue
        int get_blue() const{
            return blue;
        }
    // print() prints red, green, and blue values
    // return: void
        void print () const{
            cout << "Red: " << red << endl
                << "Green: " << green << endl 
                << "Blue: " << blue << endl;     
        }
};

int main(){
    //color object: color
    Color color;
    //set color values
    color.set_red(50);
    color.set_green(100);
    color.set_blue(200);
    //output color values
    cout << "Red Value: " << color.get_red() << endl;
    cout << "Green Value: " << color.get_green() << endl;
    cout << "Blue Value: " << color.get_blue() << endl;
    cout << "Color" << endl;
    color.print();

    return 0;
}

