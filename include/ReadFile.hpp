/**
 * @file : ReadFile.hpp
 * @description  : ReadFile.cpp kodlarının icindeki fonksiyonların basliklarinin tutuldugu yer
 * @course : Veri Yapıları 2.Ogretim B grubu
 * @assignment :  1
 * @date : 01.11.2022
 * @author : Emre Can SEÇER // seceremrecan@gmail.com
 */

#ifndef READFILE_HPP
#define READFILE_HPP
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>
#include "Satir_Dugum.hpp"
#include "Satir_Liste.hpp"
#include "Yonetici_Dugum.hpp"
#include "Yonetici_Liste.hpp"

class ReadFile
{
private:
public:
    std::string fileName = "veriler.txt";
    YoneticiListesi *readLine(std::string);
    ~ReadFile();
};

#endif