#include <iostream>
#include <cmath>
using namespace std;
class Figura{
    protected:
        double pole=0;
    public:
        double get_pole(){
            return pole;
        };

        void set_pole(double value){
            pole = value;
        };
        void id(){
            cout<<"Figura";
        };

};

class Kolo : public Figura{
    private:
        double promien;
    public:
        Kolo(double r):promien{r}{
            pole = 3.14*promien*promien;
        };
    void id(){
            cout<<"Kolo";
        };
};
class Kwadrat : public Figura{
    private:
        double bok;
    public:
        Kwadrat(double a):bok{a}{
            pole = bok*bok;
        };
    void id(){
            cout<<"Kwadrat";
        };
};

void id(Figura* x){
   x->id();
};

int main()
{
    Kwadrat a{5.};
    id(&a);
}
