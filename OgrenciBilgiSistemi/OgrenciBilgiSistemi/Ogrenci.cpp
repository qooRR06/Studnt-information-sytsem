#include <iostream>
#include "Ogrenci.h"
using namespace std;

//constructor
Ogrenci :: Ogrenci(int _id, int _sinavNot,string _ad){
    id = _id;
    ad = _ad;
    sinavNot = _sinavNot;
}

void Ogrenci :: setId(int _id){
    id =_id;
}
void Ogrenci :: setAd(string _ad){
    ad= _ad;
}
void Ogrenci :: setsinavNot(int _sinavNot){
    sinavNot = _sinavNot;
}
int Ogrenci ::  getId(){
    return id;
}
string Ogrenci :: getAd(){
    return ad;
}
int Ogrenci :: getsinavNot(){
    return sinavNot;
}
void Ogrenci :: bilgileriYaz(){
    cout << endl;
    cout << "Student id: " << id << endl;
    cout << "Student Name: " << ad << endl;
    cout << "Student Grade: " << sinavNot << endl;
}


