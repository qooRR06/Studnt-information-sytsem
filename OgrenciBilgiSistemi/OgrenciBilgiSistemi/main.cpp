#include <iostream>
#include <list>
#include "Ogrenci.h"
using namespace std;
void ShowMenu(){
    cout << "* * BERK * * " << endl;
    cout << "1. add new person."<< endl;
    cout << "2. see all person." << endl;
    cout << "3. delete person for person id" << endl;
    cout << "4. search pearson. " << endl;
    cout << "5. exit "<< endl;
}
void ogrenciEkle(list<Ogrenci> *lst){
    int id,ogrencinot;
    string ad,isim,soyad;
    cout << "\nPlease enter student ID: ";
    cin >> id;
    if (id <= 0){
        cout <<"Please enter a value greater than 0.";
    }
    else{
        cout << "Please enter student name and surname: ";
        cin >> ad >> soyad;
        isim = ad + " " + soyad;
        cout << "Please enter the student's grade: ";
        cin >> ogrencinot;
        cout << endl;
        Ogrenci ogr(id,ogrencinot, ad);
        lst -> push_back(ogr);
    }
}
void showList(list<Ogrenci> *lst){
    list<Ogrenci> :: iterator it;
    for(it = lst ->begin();it != lst-> end();it++){
        cout << endl;
        
        it -> bilgileriYaz();
        cout << endl;
    }
    cout << endl;
}
void deletePerson(list<Ogrenci> *lst){
    int id;
    cout << "Please enter the ID of the student to be deleted:";
    cin >> id;
    list<Ogrenci> :: iterator it;
    int a = 0; // Olmayan id için tutturulmuş integer
    for(it = lst ->begin();it != lst-> end();it++){
        if( it -> getId() == id){
            a = id;
            break;
        }
    }
    if (a != 0){
        lst -> erase(it);
    }
    else{
        cout << endl << "You entered the wrong value." << endl;
    }
}
void searchPerson(list<Ogrenci> *lst){
    int id;
    int a = 0; // olmayan id için integer 
    cout << "Please enter the id to be found:";
    cin >> id;
    list <Ogrenci> :: iterator it;
    for(it = lst -> begin(); it != lst -> end(); it++){
        if( it -> getId() == id){
            a = id;
            break;
        }
    }
    // sıfırdan kucuk deger girilirse
    if (a != 0) {
        it -> Ogrenci :: bilgileriYaz();
    }
    else {
        cout << endl << "You entered the wrong value. " << endl;
    }
    cout << endl;
}

int main() {
    // list tanimi
    list<Ogrenci> *ogrenciList = new list<Ogrenci>();
    
    int secim = 0;
    do {
        ShowMenu();
        cout << "Write your choice: ";
        cin >> secim;
        if(secim ==1 ){
            ogrenciEkle(ogrenciList);
        }
        else if(secim ==2 ){
            showList(ogrenciList);
        }
        else if (secim ==3 ){
            deletePerson(ogrenciList);
        }
        else if (secim == 4){
            searchPerson(ogrenciList);
        }
        else if (secim == 5){
            cout << "Exiting the system..." << endl;
            break;
        }
        else {
            cout << "\nYou made a wrong choice, choose again." << endl << endl;
        }
    } while( secim != 5);
    
    
    return 0;
}
