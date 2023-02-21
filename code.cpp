#include <iostream>
using namespace std;

class basic{

    public:
        int j, jm;
        string x, xm, b;
        float bm;
    void guruin(){
        cout<<"Masukkan NISN guru: "<<endl; cin>>j;
        cout<<"Masukkan Nama guru: "<<endl; cin>>x;
        cout<<"Masukkan Mapel guru: "<<endl; cin>>b;
    }
    void guruout(){
        cout<<"NISN: "<<j<<endl;
        cout<<"Nama: "<<x<<endl;
        cout<<"Mapel: "<<b<<endl;
    }
    void muridin(){
        cout<<"Masukkan NISN murid: "<<endl; cin>>jm;
        cout<<"Masukkan Nama murid: "<<endl; cin>>xm;
        cout<<"Masukkan Penilaian murid: "<<endl; cin>>bm;
    }
    void muridout(){
        cout<<"NISN: "<<jm<<endl;
        cout<<"Nama: "<<xm<<endl;
        cout<<"penilaian: "<<bm<<endl;
    }   
};

int main(){
    int angka;
    cout<<"Masukkan angka [1] untuk guru atau [2] untuk siswa: "<<endl; cin>>angka;
    if(angka == 1){
        basic paktian;
        paktian.guruin();
        paktian.guruout();
    }
    else if(angka == 2){
        basic paktian;
        paktian.muridin();
        paktian.muridout();
    }
    else{
        cout<<"[1] or [2] only"<<endl;
    }
}