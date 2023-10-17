#include <iostream>
using namespace std;

class NamedObj {
    char*   name;
    int     id;
    static int nConstr;
    static int nDestr;
    
    public:
    NamedObj(const char* s);
    ~NamedObj();
    
    void display() const {
        cout << "ID: " << id << " --> name: " << name << endl;
    }
    static int nObj() {
        return nConstr - nDestr;
    }
};