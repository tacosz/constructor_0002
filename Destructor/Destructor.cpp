#include <iostream>
using namespace std;
#include <string>

class angka
{
private:
    int *arr;
    int panjang;
public:
    angka(int); //constructor
    ~angka(); //destructor
    void cetakData();
    void isiData();
};
//Definisi member function
angka::angka(int i) //constructor
{
    panjang = i;
    arr = new int[i];
    isiData();
}
int main()
{
    std::cout << "Hello World!\n";
}
