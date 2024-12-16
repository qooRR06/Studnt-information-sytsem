#pragma once
#include <iostream>
using namespace std;

class Ogrenci{
    
private:
    string ad;
    int sinavNot, id;
    
public:
    Ogrenci(int _id, int _sinavNot,string _ad);
    void setId(int _id);
    void setAd(string _ad);
    void setsinavNot(int _sinavNot);
    int getId();
    string getAd();
    int getsinavNot();
    void bilgileriYaz();
};
