/**
 * @file : Satir_Dugum.hpp
 * @description  : Satir_Dugum.cpp kodlarının icindeki fonksiyonların basliklarinin tutuldugu yer
 * @course : Veri Yapıları 2.Ogretim B grubu
 * @assignment :  1
 * @date : 01.11.2022
 * @author : Emre Can SEÇER // seceremrecan@gmail.com
 */

#ifndef SatirDugum_hpp
#define SatirDugum_hpp
#include <iostream>
using namespace std;
class SatirListesiDugum
{
public:
  SatirListesiDugum(int veri);
  ~SatirListesiDugum();

  int veri;

  SatirListesiDugum *sonraki;

  SatirListesiDugum *onceki;
};

#endif