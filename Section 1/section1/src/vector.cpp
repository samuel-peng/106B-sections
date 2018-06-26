#include <iostream>
#include "console.h"
#include "vector.h"
using namespace std;
Vector<int> removeConsecutiveDuplicates(Vector<int> v) {
    int i = 0;
    while(i < v.size()){
        if(v[i] == v[i + 1]) {
            v.remove(i);
            continue;
        }
        i++;
    }
    return v;
}
Vector<int> initVec(){
    int n, temp;
    Vector<int> res;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp;
        res.add(temp);
    }
    return res;
}
int main() {
    cout<<removeConsecutiveDuplicates(initVec());
    return 0;
}
