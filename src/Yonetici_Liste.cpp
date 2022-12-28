/**
 * @file : Yonetici_Liste.cpp
 * @description:  YoneticiListesi icin yazilan fonksiyonlarin govdesinin yazildigi yer
 * @course : Veri Yapıları 2.Ogretim B grubu
 * @assignment :  1
 * @date : 01.11.2022
 * @author : Emre Can SEÇER // seceremrecan@gmail.com
 */
#include "Yonetici_Liste.hpp"
#include "ReadFile.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

YoneticiListesi::YoneticiListesi()
{
    ilk = 0;
}
YoneticiListesi::~YoneticiListesi()
{
    YoneticiDugum *gec = ilk;
    while (gec != 0)
    {
        YoneticiDugum *silinecek = gec;
        gec = gec->sonraki;
        delete silinecek;
    }
}
void YoneticiListesi::ortSirala()
{
    YoneticiDugum *gec = ilk;
    YoneticiDugum *index = NULL;
    SatirListesi *temp;
    if (ilk == NULL)
    {
        return;
    }
    else
    {
        int i = 0;
        while (i < nodeCount - 1)
        {

            int j = 0;
            while (j < nodeCount - i - 1)
            {

                if (dugumGetir(j)->veri->average > dugumGetir(j + 1)->veri->average)
                {
                    temp = dugumGetir(j)->veri;
                    dugumGetir(j)->veri = dugumGetir(j + 1)->veri;
                    dugumGetir(j + 1)->veri = temp;
                }
                j++;
            }
            i++;
        }
    }
}
void YoneticiListesi::ekle(SatirListesi *veri)
{
    YoneticiDugum *yeniDugum = new YoneticiDugum(veri);

    if (ilk == 0)
    {
        ilk = yeniDugum;
    }
    else
    {
        YoneticiDugum *gec = ilk;
        YoneticiDugum *aktif = ilk;

        while (gec->sonraki != 0)
        {
            gec = gec->sonraki;
        }

        gec->sonraki = yeniDugum;
        yeniDugum->onceki = gec;
    }
}
void YoneticiListesi::nodeRemove(int index)
{
    if (index < 0 || index >= nodeCount)
        throw "Index out of Range";
    YoneticiDugum *del;
    if (index == 0)
    {
        del = ilk;
        ilk = ilk->sonraki;
        if (ilk != NULL)
            ilk->onceki = NULL;
    }
    else
    {
        YoneticiDugum *prv = dugumGetir(index)->onceki;
        del = prv->sonraki;
        prv->sonraki = del->sonraki;
        if (del->sonraki != NULL)
            del->sonraki->onceki = prv;
    }
    nodeCount--;
    delete del;
}

YoneticiDugum *YoneticiListesi::dugumGetir(int sira)
{
    YoneticiDugum *gec = ilk;

    while (sira >= 0 && gec != 0)
    {
        if (sira == 0)
            return gec;
        gec = gec->sonraki;
        sira--;
    }
    return 0;
}
YoneticiListesi *YoneticiListesi::bringYonetici(std::string fileName, int keep)
{
    for (int i = keep; i < keep + 8; i++)
    {
        cout << setw(11) << dugumGetir(i) << setw(2) << "";
    }
    cout << endl;
    cout << " ";
    for (int i = keep; i < keep + 8; i++)
    {
        cout << "-----------" << setw(2) << "";
    }
    cout << endl;
    cout << " ";
    for (int i = keep; i < keep + 8; i++)
    {
        cout << "|" << setw(9) << dugumGetir(i)->onceki << "|" << setw(2) << " ";
    }
    cout << endl;
    cout << " ";
    for (int i = keep; i < keep + 8; i++)
    {
        cout << "-----------" << setw(2) << "";
    }
    cout << endl;
    cout << " ";
    for (int i = keep; i < keep + 8; i++)
    {
        cout << "|" << setw(9) << dugumGetir(i)->veri->average << "|" << setw(2) << " ";
    }
    cout << endl;
    cout << " ";
    for (int i = keep; i < keep + 8; i++)
    {
        cout << "-----------" << setw(2) << "";
    }
    cout << endl;
    cout << " ";
    for (int i = keep; i < keep + 8; i++)
    {
        cout << "|" << setw(9) << dugumGetir(i)->sonraki
             << "|" << setw(2) << " ";
    }
    cout << endl;
    cout << " ";
    for (int i = keep; i < keep + 8; i++)
    {
        cout << "-----------" << setw(2) << "";
    }
    cout << endl;
    cout << " ";
}
YoneticiListesi *YoneticiListesi::printYonetici(std::string filename, int keep)
{
    if (nodeCount - keep < 8)
    {

        cout << "<--onceki--" << setw(28) << "--son-->" << endl;

        for (int i = keep; i < nodeCount; i++)
        {
            cout << setw(11) << dugumGetir(i) << setw(2) << "";
        }
        cout << endl;
        cout << " ";
        for (int i = keep; i < nodeCount; i++)
        {
            cout << "-----------" << setw(2) << "";
        }
        cout << endl;
        cout << " ";
        for (int i = keep; i < nodeCount; i++)
        {
            cout << "|" << setw(9) << dugumGetir(i)->onceki << "|" << setw(2) << " ";
        }
        cout << endl;
        cout << " ";
        for (int i = keep; i < nodeCount; i++)
        {
            cout << "-----------" << setw(2) << "";
        }
        cout << endl;
        cout << " ";
        for (int i = keep; i < nodeCount; i++)
        {
            cout << "|" << setw(9) << dugumGetir(i)->veri->average << "|" << setw(2) << " ";
        }
        cout << endl;
        cout << " ";
        for (int i = keep; i < nodeCount; i++)
        {
            cout << "-----------" << setw(2) << "";
        }
        cout << endl;
        cout << " ";
        for (int i = keep; i < nodeCount; i++)
        {
            cout << "|" << setw(9) << dugumGetir(i)->sonraki
                 << "|" << setw(2) << " ";
        }
        cout << endl;
        cout << " ";
        for (int i = keep; i < nodeCount; i++)
        {
            cout << "-----------" << setw(2) << "";
        }
        cout << endl;
        cout << " ";
    }
    else
    {
        if (keep == 0)
        {

            cout << "<--ilk--" << setw(96) << "--sonraki-->" << endl;
            bringYonetici(fileName, keep);
        }
        else if (keep >= 8)
        {
            cout << "<--onceki--" << setw(91) << "--sonraki-->" << endl;
            bringYonetici(fileName, keep);
        }
    }
}
