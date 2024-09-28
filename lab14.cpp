// COMSC-210 | Lab 14 | Gaby Filipova
#include <iostream>
using namespace std;

class Color{
    private:
        int red;
        int green;
        int blue;

    public:
        void red(int r){
            red = r;
        }

        void green(int g){
            green = g;
        }

        void blue(int b){
            blue = b;
        }

        int get_red() const{
            return red;
        }

        int get_green() const{
            return green;
        }

        int get_blue() const{
            return blue;
        }
}

