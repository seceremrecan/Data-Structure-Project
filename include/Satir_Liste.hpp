/**
 * @file : Satir_Liste.hpp
 * @description  : Satir_Liste.cpp kodlarının icindeki fonksiyonların basliklarinin tutuldugu yer
 * @course : Veri Yapıları 2.Ogretim B grubu
 * @assignment :  1
 * @date : 01.11.2022
 * @author : Emre Can SEÇER // seceremrecan@gmail.com
 */
#ifndef SatirListe_hpp
#define SatirListe_hpp
#include "Satir_Dugum.hpp"
#include <iostream>
#include <iomanip>
using namespace std;
class SatirListesi
{
public:
    double average;
    SatirListesi();
    void ekle(int veri);
    void yazdir(int deger);
    ~SatirListesi();
    void boslukBirak(int sira);

private:
    SatirListesiDugum *ilkSatir;
};

#endif
