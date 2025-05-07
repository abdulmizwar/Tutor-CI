#include <iostream>

using namespace std;

#define max 3
string dataBuku[max];
int top = 0;


bool isEmpty() {
    if (top == 0)
    {
        return true;
    } else {
        return false;
    }
}

//cek data full
bool isFull(){
    if (top >= max){
        return true;
    } else {
        return false;
    }
}

//tampil data

void TampilData(){
 // jika isi kosong maka tampilkan data kosong

    if (!isEmpty())
    {

        cout<<"Data Tersimpan semua "<<endl;
        for (int i = 0; i < top; i++)
        {
            cout<< i + 1<<". "<<dataBuku[i]<<endl;
        }
    } else {
        cout<<"Data Tersimpan Masih Kosong"<<endl;
    }

    //kondisi jika isi dari array telah penuh 
    if (isFull())
    {
        cout<<"data telah penuh"<<endl;
    }
    cout<<endl;
}

void TambahData() {
    if (!isFull())
    {
        cout<<"masukan data : ";
        cin>>dataBuku[top];
        top++;
    }
}

void HapusData(){
    if (!isEmpty())
    {
        top--;
    }
    
}

void selesai() {
    cout<<"proses telah selesai"<<endl;
}

void tidakSesuai(){
    cout<<"yang anda masukan tidak sesuai menu pilihan"<<endl;
}

int main () {

int pilihan; 
//menyimpan pilihan
stack : 
    system("clear");
    TampilData();
    cout<<"menu utama \n1. Push\n2. Pop\n3. Selesai\nPilih :";
    cin>>pilihan;

    if(pilihan == 1) {
        system("clear");
        TambahData();
        goto stack;
    } else if ( pilihan == 2 )
    {
        HapusData();
        goto stack;
    } else if (pilihan ==3)
    {
        selesai();
    } else 
    {
       tidakSesuai();
    }
    cout<<"program selesai";
}