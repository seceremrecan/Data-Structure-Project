/**
 * @file : Yonetici_Dugum.cpp
 * @description : YoneticiDugumunun baslik dosyasindaki fonksiyonlarinin govdesinin yazildigi dosya
 * @course : Veri Yapıları 2.Ogretim B grubu
 * @assignment :  1
 * @date : 01.11.2022
 * @author : Emre Can SEÇER // seceremrecan@gmail.com
 */
#include "Yonetici_Dugum.hpp"
#include "ReadFile.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

YoneticiDugum::YoneticiDugum(SatirListesi *veri)
{
    this->veri = veri;
    onceki = sonraki = 0;
}

YoneticiDugum::~YoneticiDugum()
{
    cout << this << ": adresindeki dugum silindi" << endl;
}