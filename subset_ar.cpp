#include <iostream>
#include <bitset>
using namespace std;

int main() {
    bitset<10> mySet;
    mySet.set(3);
    mySet.set(5);
    mySet.set(7);
    cout << "The elements of the set are: ";
    for(int i=0;i<mySet.size();i++) {
        if(mySet.test(i)) {
            cout<<i<<" ";
        }
    }
    cout << endl;
    if(mySet.test(7)) {
        cout<<"7 is present in the set"<<endl;
    }
    else {
        cout<<"7 is not present in the set"<<endl;
    }
    mySet.reset(3);
    cout << "The updated set is: ";
    for(int i=0;i<mySet.size();i++){
        if(mySet.test(i)){
            cout<<i<<" ";
        }
    }
    cout<<endl;
return 0;
}
