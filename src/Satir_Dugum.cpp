/**
 * @file : Satir_Dugum.cpp
 * @description : SatirDugumunun baslik dosyasindaki fonksiyonlarinin govdesinin yazildigi dosya
 * @course : Veri Yapıları 2.Ogretim B grubu
 * @assignment :  1
 * @date : 01.11.2022
 * @author : Emre Can SEÇER // seceremrecan@gmail.com
 */
#include "Satir_Dugum.hpp"
#include <iostream>
using namespace std;

SatirListesiDugum::SatirListesiDugum(int veri)
{
    this->veri = veri;
    this->sonraki = 0;
    this->onceki = 0;
}

SatirListesiDugum::~SatirListesiDugum()
{
    // cout<<veri<<": dugumu silindi --->";
}
