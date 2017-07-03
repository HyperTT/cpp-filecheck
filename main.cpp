#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main ()
{
    ifstream data_store;
    int line_num=0;
    string line;
    string file;
    cout<<"Enter filename\n";
    cin>>file;
    data_store.open(file.c_str());
    if (!data_store)
    {
        cout<<"File not found\n";
        return 0;
    }
    while(!data_store.eof())
    {
        line_num++;
        getline(data_store,line);
        cout<<line_num<<": "<<line<<endl;
    }
    data_store.close();

    return 0;
}
