/**
 * @file : Satir_Liste.cpp
 * @description : Satirlistesi icin gerekli olan fonksiyonlarin govdesinin yazildigi yer
 * @course : Veri Yapıları 2.Ogretim B grubu
 * @assignment :  1
 * @date : 01.11.2022
 * @author : Emre Can SEÇER // seceremrecan@gmail.com
 */
#include "Satir_Liste.hpp"
#include "ReadFile.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

SatirListesi::SatirListesi()
{

    ilkSatir = 0;
}
SatirListesi::~SatirListesi()
{
    SatirListesiDugum *gec = ilkSatir;
    while (gec != 0)
    {
        SatirListesiDugum *sil = gec;
        gec = gec->sonraki;
        delete sil;
    }
}
void SatirListesi::ekle(int veri)
{
    SatirListesiDugum *yeni = new SatirListesiDugum(veri);
    if (ilkSatir == 0)
    {
        ilkSatir = yeni;
    }
    else
    {
        SatirListesiDugum *gec = ilkSatir;
        while (gec->sonraki != 0)
            gec = gec->sonraki;

        gec->sonraki = yeni;
    }
}

void SatirListesi::yazdir(int deger)
{
    SatirListesiDugum *gec = ilkSatir;

    while (gec != 0)
    {
        cout << endl;
        boslukBirak(deger);
        cout << ""
             << "^^^^^^^^^^^" << endl;
        boslukBirak(deger);
        cout << ""
             << "-----------";

        cout << endl;

        boslukBirak(deger);
        cout << "|" << setw(9) << gec
             << "|" << setw(2) << " ";

        cout << endl;

        boslukBirak(deger);
        cout << ""
             << "-----------";

        cout << endl;

        boslukBirak(deger);
        cout << "|" << setw(9) << gec->veri
             << "|" << setw(2) << " ";

        cout << endl;

        boslukBirak(deger);
        cout << ""
             << "-----------";

        cout << endl;

        boslukBirak(deger);
        cout << "|" << setw(9) << gec->sonraki
             << "|" << setw(2) << " ";

        cout << endl;

        boslukBirak(deger);
        cout << ""
             << "-----------";

        cout << endl;

        gec = gec->sonraki;
    }

    cout << endl;
}

void SatirListesi::boslukBirak(int sira)
{
    cout << setw(13 * sira) << "";
}
