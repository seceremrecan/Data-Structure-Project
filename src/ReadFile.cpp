/**
 * @file : ReadFile.cpp
 * @description : Dosya okuma islemlerinin yapildiği dosya
 * @course : Veri Yapıları 2.Ogretim B grubu
 * @assignment :  1
 * @date : 01.11.2022
 * @author : Emre Can SEÇER // seceremrecan@gmail.com
 */
#include "ReadFile.hpp"
#include "Satir_Dugum.hpp"
#include "Satir_Liste.hpp"
#include "Yonetici_Dugum.hpp"
#include "Yonetici_Liste.hpp"
#include <iostream>
using namespace std;

YoneticiListesi *ReadFile::readLine(std::string filename)
{
    YoneticiListesi *result = new YoneticiListesi();

    double avg = 0;
    double total = 0;
    string satirUzunluk;
    int sayac = 0;
    int bosAdet = 0;
    int deger;

    ifstream dosyaOku;

    dosyaOku.open(fileName);

    if (dosyaOku.is_open())
    {
        while (getline(dosyaOku, satirUzunluk))
        {
            SatirListesi *token = new SatirListesi();

            istringstream iss(satirUzunluk);
            for (int j = 0; j < satirUzunluk.length(); j++)
            {

                if (isspace(satirUzunluk.at(j)))
                {
                    bosAdet++;
                }
            }

            for (int i = 0; i < bosAdet; i++)
            {
                iss >> deger;
                token->ekle(deger);

                total += deger;
            }

            result->ekle(token);
            avg = total / bosAdet;
            token->average = avg;

            sayac++;
            total = 0;
            bosAdet = 0;
        }
        result->nodeCount = sayac;
    }
    return result;
}
