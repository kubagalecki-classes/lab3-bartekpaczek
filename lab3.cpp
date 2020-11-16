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

class WektorFigur{
    private:
        int liczbaFigur;
        Figura* wektor[1000];
    public:
        WektorFigur(int n=0):liczbaFigur{n}{};

        Figura* operator[](int i) {
            if (i<liczbaFigur)
                return wektor[i];
            else
                return nullptr;
        };

        void push(Figura* pointer){
            wektor[liczbaFigur] = pointer;
            liczbaFigur++;

        };

        void pop(){
            wektor[liczbaFigur-1] = nullptr;
            liczbaFigur--;

        };

        void print(){
            for(i=0,i<liczbaFigur,i++)
                cout<<
        };

};
void id(Figura* x){
   x->id();
};

int main()
{
    Figura* a =  new Kwadrat{5};
    Figura* b =  new Kwadrat{5};
    Figura* c =  new Kolo{3};

    WektorFigur x{};


}

