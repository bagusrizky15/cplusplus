#include <iostream>

using namespace std;

// array antrian
int maksimalArray = 5, front = 0, back = 0;
string cari;
int ketemu = 0;

string antrianAtm[5];

bool isFullArray()
{
    if (back == maksimalArray)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isEmptyArray()
{
    if (back == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// enqueue / menambahkan data antrian
void enqueueArray(string data)
{
    if (isFullArray())
    {
        cout << "Antrian Penuh" << endl;
        /* code */
    }
    else
    {
        if (isEmptyArray())
        {
            antrianAtm[0] = data;
            front++;
            back++;
        }
        else
        {
            antrianAtm[back] = data;
            back++;
        }
    }
}

void dequeueArray()
{
    if (isEmptyArray())
    {
        cout << "Antrian Kosong";
        /* code */
    }
    else
    {
        for (int i = 0; i < back; i++)
        {
            antrianAtm[i] = antrianAtm[i + 1];
        }
        back--;
    }
}

int countArray()
{
    if (isEmptyArray())
    {
        return 0;
        /* code */
    }
    else if (isFullArray())
    {
        return maksimalArray;
    }
    else
    {
        return back;
    }
}

void destroyArray()
{
    if (isEmptyArray())
    {
        cout << "Antrian Kosong";
        /* code */
    }
    else
    {
        for (int i = 0; i < maksimalArray; i++)
        {
            antrianAtm[i] = "";
        }
        back = 0;
    }
}

void viewArray()
{
    cout << "Data antrian atm : " << endl;
    if (isEmptyArray())
    {
        cout << "Data Kosong";
    }
    else
    {
        for (int i = 0; i < maksimalArray; i++)
        {
            if (antrianAtm[i] != "")
            {
                cout << i + 1 << ". " << antrianAtm[i] << endl;
            }
            else
            {
                cout << i + 1 << ". "
                     << "kosong" << endl;
            }
        }
    }
    cout << "\n"
         << endl;
}

void cariArray()
{
    cout << "Masukan yang kata yang ingin kamu cari ";
    cin >> cari;
    for (int i = 0; i < maksimalArray; i++)
    {
        if (cari == antrianAtm[i])
        {
            ketemu = 1;
            cout << "Data ada di indeks ke " << i;
        }
    }
    if (ketemu == 0)
    {
        /* code */
           cout << "Data tidak ada";
    }
    
 
}

int main()
{
    int input;
    string sini;

mulai:
    cout << "Masukan pilihan \n 1.Tambah\n 2.Hapus\n 3.Tampil\n 4.Hitung\n 5.Reset\n 6.Cari\n : ";
    cin >> input;

    switch (input)
    {
    case 1:
        cout << "masukan data ";
        cin >> sini;
        enqueueArray(sini);
        goto mulai;
        break;
    case 2:
        dequeueArray();
        goto mulai;
        break;
    case 3:
        viewArray();
        goto mulai;
        break;
    case 4:
        cout << "Jumlah Antrian " << countArray();
        goto mulai;
        break;
    case 5:
        destroyArray();
        goto mulai;
        break;

    case 6:
        cariArray();
        goto mulai;
        break;

    default:
        cout << "menu tidak tersedia";
        goto mulai;
        break;
    }
}