#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> vec={1,2,3};
    cout<<vec.size()<<endl;
    // cout<<vec[0]<<endl;
    // vector<int> myvec(3,0);
    // cout<<myvec.size()<<endl;

    //Iteration
    for(auto & val:vec){
        cout<<val<<endl;
    }
    return 0;
}