#include <iostream>

using namespace std;

struct Buku
{
    string judul, pengarang;
    int tahunTerbit;
    Buku *next;
};

    Buku *head, *tail, *cur, *newNode, *del, *before;

    //single linked list
    void createSingleLinkedList(string judul, string pengarang, int tB)
    {
        head = new Buku();
        head->judul = judul;
        head->pengarang = pengarang;
        head->tahunTerbit = tB;
        head->next = NULL;
        tail = head;
    }

    //print single linked list
    int countSingleLinkedList(){
    cur = head;
    int jumlah = 0;
    while (cur != NULL)
    {
        jumlah++;
        cur = cur->next;
    }
    return jumlah;
    };
    
    //tambah awal single linked list
    void addFirst(string judul, string pengarang, int tB){
        newNode = new Buku();
        newNode->judul = judul;
        newNode->pengarang = pengarang;
        newNode->tahunTerbit = tB;
        newNode->next=head;
        head = newNode;
    }

    void printSingleLinkedList(){
        cout << "Jumlah data "<< countSingleLinkedList() << endl;
        cur = head;
        while (cur != NULL)
        {
            cout << "Judul Buku " << cur->judul << endl;
            cout << "Pengarang Buku " << cur->pengarang << endl;
            cout << "Tahun " << cur->tahunTerbit << endl;

            cur = cur->next;
        }
        
    }



    int main(){
        createSingleLinkedList("Kata", "Gaga", 2020);
        printSingleLinkedList();


        createSingleLinkedList("Kata", "Bagus", 2020);
        printSingleLinkedList();


        createSingleLinkedList("Kata", "Yiha", 2020);
        printSingleLinkedList();
    }

