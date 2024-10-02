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
    Color(): red(0), green(0), blue(0) {}
    Color (int r, int g, int b): red(r), green(g), blue(b) {}
    Color (int g, int b): red(0), green(g), blue(b) {}

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
    //set color object for default color
    Color default_color;
    //parameterized constructor
    Color paramterized_color(50, 100, 200);
    //partial constructor
    Color partial_color(200, 0);
    //output colors
    cout << "Default color: " << endl;
    default_color.print();
    cout << "Parameterized color: " << endl;
    paramterized_color.print();
    cout << "Partial color: " << endl;
    partial_color.print();

    return 0;
}

