#include<iostream>
using namespace std;

int main ()

 {

    int angkal,angka2,besar,kecil;

    cout <<"masukan angka ke-1: ";
    cin >>angkal;
    cout << "masuka angka ke-2: ";
    cin>> angka2;

    besar= angkal > angka2 ? angkal : angka2;
    kecil= angkal < angka2 ? angkal : angka2;

    cout << endl;
    cout <<"angka" << besar << "lebih besar dari angka" <<kecil << endl;
    cout <<"angka" <<kecil <<  "lebih kecil dari angka" <<besar <<endl;

}
