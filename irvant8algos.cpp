#include <iostream>

using namespace::std;

struct nilai {
    float uts,uas,tugas,absen,n;
};

float hasil(nilai mhs){
    mhs.n=(mhs.uts*25/100)+(mhs.uas*30/100)+(mhs.tugas*35/100)+(mhs.absen*15/100);
return mhs.n;
}

void grade(float n){
     if(n>=81){
        cout<<"Nilai A ";
    }
    else if(n>=61){
        cout<<"Nilai B ";
    }
    else if(n>=41){
        cout<<"Nilai C ";
    }
    else if(n>=21){
        cout<<"Nilai D ";
    }
    else{
        cout<<"Nilai E ";
    }
}


main(){
    struct nilai mhs;
    float hsl;

        cout<<"Input Nilai UTS  : ";cin>>mhs.uts;
        cout<<"Input Nilai UAS  : ";cin>>mhs.uas;
        cout<<"Input Nilai Tugas: ";cin>>mhs.tugas;
        cout<<"Input Absen      : ";cin>>mhs.absen;
        hsl=hasil(mhs);
        cout<<"Total Nilai : "<<hsl<<endl;
        grade(hsl);

}


