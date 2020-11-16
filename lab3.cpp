#include <iostream>
#include <cmath>
using namespace std;

class Figura{
    protected:
        double pole=0;
    public:
        virtual ~Figura(){
            cout<<"Figura deleted\n";
        };

        double get_pole(){
            return pole;
        };

        void set_pole(double value){
            pole = value;
        };
        virtual void id(){
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
        ~Kolo()override{
            cout<<"Kolo deleted\n";
        };
        void id() override{
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
        ~Kwadrat()override{
            cout<<"Kwadrat deleted\n";
        };
    void id() override{
            cout<<"Kwadrat";
        };
};

void id(Figura* x){
   x->id();
};

int main()
{
    Figura* f = new Kwadrat{5};
    delete f;
}

