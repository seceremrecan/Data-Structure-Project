/**
 * @file : main.cpp
 * @description : Konsoldaki islemlerinin ve genel olarak tum islemlerin çagirildigi ana dosya
 * @course : Veri Yapıları 2.Ogretim B grubu
 * @assignment :  1
 * @date : 01.11.2022
 * @author : Emre Can SEÇER // seceremrecan@gmail.com
 */
#include <iostream>
#include "Satir_Dugum.hpp"
#include "Satir_Liste.hpp"
#include "Yonetici_Dugum.hpp"
#include "Yonetici_Liste.hpp"
#include "ReadFile.hpp"
using namespace std;

int main()
{
    ReadFile *k = new ReadFile();
    YoneticiListesi *ynt = k->readLine(k->fileName);

    int index = 0;
    int yIndex = 0;
    int satirArttir = 0;

    while (true)
    {
        system("cls");
        string choose = "";

        ynt->ortSirala();
        ynt->printYonetici(k->fileName, yIndex);
        ynt->dugumGetir(satirArttir)->veri->yazdir(index);

        cout << "Choose : ";

        cin >> choose;

        if (choose == "d")
        {

            if (ynt->nodeCount - yIndex < 8)
            {
            }
            else if (ynt->nodeCount - satirArttir <= 8)
            {
                satirArttir = ynt->nodeCount - 1;
                yIndex += 8;
                index = ynt->nodeCount - yIndex - 1;
            }
            else
            {
                yIndex += 8;
                satirArttir += 8;
            }
        }
        else if (choose == "c")
        {
            if (ynt->nodeCount - satirArttir <= 1)
            {
            }
            else
            {
                index++;
                satirArttir++;
                if (index % 8 == 0)
                {

                    yIndex += 8;
                    index = 0;
                }
            }
        }
        else if (choose == "z")
        {
            if (index == 0 && satirArttir == 0)
            {
                index = 0;
                satirArttir = 0;
            }
            else
            {
                index--;
                satirArttir--;
                if (yIndex % 8 == 0)
                {
                    if (index < 0)
                    {
                        index = 7;
                        yIndex -= 8;
                    }
                }
            }
        }

        else if (choose == "a")
        {
            if (satirArttir < 8)
            {
                yIndex = 0;
            }
            else if (index == 0 && satirArttir == 0)
            {

                index = 0;
                satirArttir = 0;
            }
            else
            {
                yIndex -= 8;
                satirArttir -= 8;
            }
        }
        else if (choose == "p")
        {
            ynt->nodeRemove(satirArttir);
            if (satirArttir >= ynt->nodeCount - 1)
            {
                cout << "girdi" << endl;
                satirArttir--;
                index--;
                if (index < 0)
                {
                    yIndex -= 8;
                    index = 7;
                }
            }
        }
        else if (choose == "q")
            return 0;
    }
}
