#include<iostream>
#include<string>
using namespace std;

struct data_buyer
{
    string name;
    char cd[5] ;
    string status;
};
struct buyer
{
    struct data_buyer member[5];

}cont;
struct data_item
{
    char id [7];
    string name;
    float price;
};
struct item
{
    struct data_item unit[5];
}basket;

int main()
{
    int n, cm, id, total=0, money, returns;
    float disc=0.1, dtotal=0, adisc=0;

    cont.member[1].name="Diana";
    cont.member[2].name="Rina";
    cont.member[3].name="Lina";
    cont.member[4].name="Doni";
    cont.member[5].name="Dodi";

    cont.member[1].status="Member";
    cont.member[2].status="Member";
    cont.member[3].status="Belom Member";
    cont.member[4].status="Belom Member";
    cont.member[5].status="Member";

    basket.unit[1].name="Pensil";
    basket.unit[2].name="Buku tulis";
    basket.unit[3].name="Penghapus";
    basket.unit[4].name="Penggaris";
    basket.unit[5].name="Ballpoint";

    basket.unit[1].price=2000;
    basket.unit[2].price=3500;
    basket.unit[3].price=1000;
    basket.unit[4].price=1500;
    basket.unit[5].price=2500;

    cout<<"TOKO INDO APRIL"<<endl;
    cout<<"Jl. DI Panjaitan 128 Purwokerto"<<endl<<endl;
    kp:
    cout<<"Kode pembeli: P";
    cin>>cm;
    switch(cm)
    {
        case 001:
        {
            cout<<"Nama pembeli: "<<cont.member[1].name<<endl;
            cout<<"Status pembeli: "<<cont.member[1].status<<endl;
            break;
        }
        case 002:
        {
            cout<<"Nama pembeli: "<<cont.member[2].name<<endl;
            cout<<"Status pembeli: "<<cont.member[2].status<<endl;
            break;
        }
        case 003:
        {
            cout<<"Nama pembeli: "<<cont.member[3].name<<endl;
            cout<<"Status pembeli: "<<cont.member[3].status<<endl;
            break;
        }
        case 004:
        {
            cout<<"Nama pembeli: "<<cont.member[4].name<<endl;
            cout<<"Status pembeli: "<<cont.member[4].status<<endl;
            break;
        }
        case 005:
        {
            cout<<"Nama pembeli: "<<cont.member[5].name<<endl;
            cout<<"Status pembeli: "<<cont.member[5].status<<endl;
            break;
        }
        default:
        {
            cout<<"Kode tidak ditemukan!"<<endl;
            goto kp;
        }
        }
    kb:
    cout<<endl;
    cout<<"Kode barang: BRG";
    cin>>id;
    switch(id)
    {
        case 001:
        {
            cout<<"Nama barang: "<<basket.unit[1].name<<endl;
            cout<<"Harga barang: "<<basket.unit[1].price<<endl;
            cout<<"Jumlah barang: ";
            cin>>n;
            total=basket.unit[1].price*n;
            adisc=disc*total;
            dtotal=total-adisc;
            break;
        }
        case 002:
        {
            cout<<"Nama barang: "<<basket.unit[2].name<<endl;
            cout<<"Harga barang: "<<basket.unit[2].price<<endl;
            cout<<"Jumlah barang: ";
            cin>>n;
            total=basket.unit[2].price*n;
            adisc=disc*total;
            dtotal=total-adisc;
            break;
        }
        case 003:
        {
            cout<<"Nama barang: "<<basket.unit[3].name<<endl;
            cout<<"Harga barang: "<<basket.unit[3].price<<endl;
            cout<<"Jumlah barang: ";
            cin>>n;
            dtotal=basket.unit[3].price*n;
            break;
        }
        case 004:
        {
            cout<<"Nama barang: "<<basket.unit[4].name<<endl;
            cout<<"Harga barang: "<<basket.unit[4].price<<endl;
            cout<<"Jumlah barang: ";
            cin>>n;
            dtotal=basket.unit[4].price*n;
            break;
        }
        case 005:
        {
            cout<<"Nama barang: "<<basket.unit[5].name<<endl;
            cout<<"Harga barang: "<<basket.unit[5].price<<endl;
            cout<<"Jumlah barang: ";
            cin>>n;
            total=basket.unit[5].price*n;
            adisc=disc*total;
            dtotal=total-adisc;
            break;
        }
        default:
        {
            cout<<"Kode tidak ditemukan!";
            goto kb;
        }
    }
    if(n>3)
    {
        dtotal=dtotal-300;
    }
    cout<<endl;
    cout<<"Subtotal: Rp"<<total<<endl;
    cout<<"Diskon: Rp"<<adisc<<endl;
    cout<<"Total: Rp"<<dtotal<<endl;
    cout<<endl;
    cout<<"Jumlah Bayar: Rp";
    cin>>money;
    returns=money-dtotal;
    cout<<"Kembali: Rp"<<returns;
    return 0;
}
