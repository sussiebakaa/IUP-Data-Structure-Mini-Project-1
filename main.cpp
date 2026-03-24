#include <iostream>
#include <string>
using namespace std;
 
struct __bookQueue {
    string data[100];
    int front = 0, rear = 0;
 
    void enqueue(string name) { data[rear++] = name; cout << name << " masuk antrian.\n"; }
    void dequeue() {
        if (front == rear) { cout << "Antrian kosong!\n"; return; }
        cout << data[front++] << " dilayani.\n";
    }
    void display() {
        if (front == rear) { cout << "  (kosong)\n"; return; }
        for (int i = front; i < rear; i++) cout << "  " << i - front + 1 << ". " << data[i] << "\n";
    }
};
 
struct __bookStack {
    string data[100];
    int top = 0;
 
    void push(string info) { data[top++] = info; cout << "Dicatat: " << info << "\n"; }
    void pop() {
        if (top == 0) { cout << "Riwayat kosong!\n"; return; }
        cout << "Undo: " << data[--top] << "\n";
    }
    void display() {
        if (top == 0) { cout << "  (kosong)\n"; return; }
        for (int i = top - 1; i >= 0; i--) cout << "  " << top - i << ". " << data[i] << "\n";
    }
};
 
struct __removeBook {
    string data[100];
    int front = 50, rear = 50;
 
    void addFront(string title) { data[--front] = title; cout << title << " ditambah ke depan.\n"; }
    void addRear(string title)  { data[rear++]  = title; cout << title << " ditambah ke belakang.\n"; }
    void removeFront() {
        if (front == rear) { cout << "Daftar buku kosong!\n"; return; }
        cout << data[front++] << " dipinjam.\n";
    }
    void display() {
        if (front == rear) { cout << "  (kosong)\n"; return; }
        for (int i = front; i < rear; i++) cout << "  " << i - front + 1 << ". " << data[i] << "\n";
    }
};
 
int main() {
    __bookQueue antrian;
    __bookStack riwayat;
    __removeBook buku;
    int pilihan;
 
    do {
        cout << "\n SELAMAT DATANG DI PERPUSTAKAAN PRIKITIW\n"
             << "1. Tambah buku\n2. Pinjam buku\n3. Tambah peminjam\n"
             << "4. Layani peminjam\n5. Catat pengembalian\n6. Undo pengembalian\n"
             << "7. Lihat semua\n0. Keluar\nPilihan: ";
        cin >> pilihan; cin.ignore();
 
        string input;
        if      (pilihan == 1) { int p; cout << "Judul: "; getline(cin, input); cout << "1=depan 2=belakang: "; cin >> p; cin.ignore(); p == 1 ? buku.addFront(input) : buku.addRear(input); }
        else if (pilihan == 2) { buku.removeFront(); }
        else if (pilihan == 3) { cout << "Nama: "; getline(cin, input); antrian.enqueue(input); }
        else if (pilihan == 4) { antrian.dequeue(); }
        else if (pilihan == 5) { cout << "Nama - Judul: "; getline(cin, input); riwayat.push(input); }
        else if (pilihan == 6) { riwayat.pop(); }
        else if (pilihan == 7) {
            cout << "\nBuku:\n";    buku.display();
            cout << "Antrian:\n";   antrian.display();
            cout << "Riwayat:\n";   riwayat.display();
        }
    } while (pilihan != 0);
 
    cout << "Sampai jumpa!\n";
}