#include <iostream>

using namespace std;

class Osoba {
private:
    int id;
    string imie;
public:
    static int licznik;
    Osoba() {
        this->id = 0;
        this->imie = "";
        licznik++;
    };
    Osoba(int id, string imie) : id(id), imie(imie) {
        licznik++;
    }
    Osoba(const Osoba& osoba) {
        licznik++;
    };
    void wypisz_imie(string imie) {
        if(this->imie == "") {
            this->imie = "Brak danych ";
        }
        cout << "Czesc " << imie << ", mam na imie " << this->imie << ", instancja: " << licznik << endl;
    }
};

int Osoba::licznik = 0;

int main() {
    Osoba osoba1(1, "Grzegorz");

    osoba1.wypisz_imie("Redek");

    Osoba osoba2;

    osoba2.wypisz_imie("Kamil");
}