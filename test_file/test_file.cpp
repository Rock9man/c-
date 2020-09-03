#include <iostream>
#include <fstream>

using namespace std;

int main(){
    char data[100];
    ofstream outfile;
    outfile.open("after.dat");

    cout << "Waiting to the file" << endl;
    cout << "Enter your name:";
    cin.getline(data,100);
    outfile << data << endl;

    cout << "Enter your age:";
    cin.getline(data,100);
    outfile << data << endl;

    cout << "Enter your sex:";
    cin.getline(data,100);
    outfile << data << endl;

    outfile.close();

    ifstream infile;
    infile.open("after.dat");
    infile >> data;
    cout <<"your info: " << endl;
    cout <<"your name is "<< data << endl;
    infile >> data;
    cout <<"your age is "<< data << endl;
    infile >> data;
    cout <<"your sex is "<< data << endl;
    infile.close();
    cout << "Hello word" << endl;
    return 0;
}
