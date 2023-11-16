#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> intVec(5);

    for (int i = 0; i < intVec.size(); i++)
        intVec[i] = i;

    cout << "Vector size: " << intVec.size() << endl;         // 논리적 크기
    cout << "Vector capacity: " << intVec.capacity() << endl; // 물리적 크기
    cout << "저장된 데이터: ";
    for (int i = 0; i < intVec.size(); i++)
        cout << intVec[i] << " ";

    cout << endl << endl << "1개 데이터 push_back" << endl;
    
    intVec.push_back(11);
    cout << "Vector size: " << intVec.size() << endl;         // 논리적 크기
    cout << "Vector capacity: " << intVec.capacity() << endl; // 물리적 크기
    cout << "저장된 데이터: ";
    for (int i = 0; i < intVec.size(); i++)
        cout << intVec[i] << " ";
        
    cout << endl << endl << "5개 데이터 push_back" << endl;
    for (int i = 1; i<=5; i++)
        intVec.push_back(i * 11);;
    cout << "Vector size: " << intVec.size() << endl;         // 논리적 크기
    cout << "Vector capacity: " << intVec.capacity() << endl; // 물리적 크기
    cout << "저장된 데이터: ";
    for (int i = 0; i < intVec.size(); i++)
        cout << intVec[i] << " ";
        
        
    cout << endl << endl << "3개 데이터 pop_back" << endl;
    for (int i = 0; i < 3; i++)
        intVec.pop_back();
    cout << "Vector size: " << intVec.size() << endl;         // 논리적 크기
    cout << "Vector capacity: " << intVec.capacity() << endl; // 물리적 크기
    cout << "저장된 데이터: ";
    for (int i = 0; i < intVec.size(); i++)
        cout << intVec[i] << " ";
        
    cout << endl;

    return 0;
}