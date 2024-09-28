// COMSC-210 | Lab 14 | Gaby Filipova
#include <iostream>
using namespace std;

class Color{
    private:
        int red;
        int green;
        int blue;

    public:
        void set_red(int r){
            red = r;
        }

        void set_green(int g){
            green = g;
        }

        void set_blue(int b){
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

        void print () const{
            cout << "Red: " << red << endl
                << "Green: " << green << endl 
                << "Blue: " << blue << endl;     
        }
}

int main(){
    color.set_red(50);
    color.set_green(100);
    color.set_blue(200);

    cout << "Red Value: " << color.get_red() << endl;
    cout << "Green Value: " << color.get_green() << endl;
    cout << "Blue Value: " << color.get_blue() << endl;
    cout << "Color" << color.print();

    return 0;
}

