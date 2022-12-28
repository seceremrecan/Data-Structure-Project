/**
 * @file : Yonetici_Dugum.hpp
 * @description : Yonetici_Dugum.cpp kodlarının icindeki fonksiyonların basliklarinin tutuldugu yer
 * @course : Veri Yapıları 2.Ogretim B grubu
 * @assignment :  1
 * @date : 01.11.2022
 * @author : Emre Can SEÇER // seceremrecan@gmail.com
 */
#ifndef YoneticiDugum_hpp
#define YoneticiDugum_hpp
#include "Satir_Liste.hpp"
#include <iostream>
using namespace std;
class YoneticiDugum
{
public:
    SatirListesi *veri;
    double ort;
    double average;
    YoneticiDugum(SatirListesi *veri);
    ~YoneticiDugum();
    YoneticiDugum *sonraki;
    YoneticiDugum *onceki;
};

#endif