/**
 * @file : Yonetici_Liste.hpp
 * @description  : Yonetici_Liste.cpp kodlarının icindeki fonksiyonların basliklarinin tutuldugu yer
 * @course : Veri Yapıları 2.Ogretim B grubu
 * @assignment :  1
 * @date : 01.11.2022
 * @author : Emre Can SEÇER // seceremrecan@gmail.com
 */
#ifndef BagliListe_hpp
#define BagliListe_hpp
#include "Yonetici_Dugum.hpp"
#include "Satir_Liste.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

class YoneticiListesi
{
public:
    std::string fileName = "veriler.txt";
    YoneticiListesi();
    ~YoneticiListesi();
    void ekle(SatirListesi *veri);
    int nodeCount;
    void ortSirala();
    YoneticiListesi *printYonetici(std::string, int araci);
    void nodeRemove(int sira);
    YoneticiDugum *dugumGetir(int sira);
    YoneticiListesi *bringYonetici(std::string, int veri);

private:
    YoneticiDugum *ilk;
};

#endif