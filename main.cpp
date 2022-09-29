#include <iostream>
#include <cmath>
#include <ios>
#include <iomanip>

using namespace std;
class Studentas {
public:
    string vardas;
    string pavarde;
    double namudarbai;
    double egzaminas;
    double pazymys;
};


int main()
{
    Studentas Studentas1;

    cin >> Studentas1.vardas;
    cin >> Studentas1.pavarde;
    cin >> Studentas1.namudarbai;
    while (Studentas1.namudarbai > 10 || Studentas1.namudarbai < 1)
    {
        cout << "Klaida: ivestas blogas skaicius. Veskite nuo 1 iki 10: ";
        cin >> Studentas1.namudarbai;
    }
    cin >> Studentas1.egzaminas;
     while (Studentas1.egzaminas > 10 || Studentas1.egzaminas < 1)
    {
        cout << "Klaida: ivestas blogas skaicius. Veskite nuo 1 iki 10: ";
        cin >> Studentas1.egzaminas;
    }
    Studentas1.pazymys =  0.4 * ((Studentas1.namudarbai + Studentas1.egzaminas) / 2) + 0.6 * Studentas1.egzaminas;
 cout << Studentas1.vardas << " " <<  Studentas1.pavarde << " " << Studentas1.pazymys << fixed << setprecision(2) << endl;
    return 0;
}
