#include <iostream>

using namespace std;

struct Buku
{
    string judul, pengarang;
    int tahun;
    Buku *next;
};
int main()
{
    Buku *head, *tail, *cur, *newNode, *del, *before;

    //single linked list
    void createSingleLinkedList(string judul, string pengarang, int tahun){
        head = new Buku();
        head->judul = judul;
        head->pengarang = pengarang;
        head->tahunTerbit = tahun;
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
    
}
