#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, m, k;
    int value1[60], value2[60],result;
    cin >> n >> m ;

    for(int i=0; i<m ; i++ ){
        cin >> value1[i] >> value2[i] ;
    }
    sort(value1,value1+m);
    sort(value2,value2+m);
    
    k = n/6;
    if(k==0){
        result = max(value1[0],value2[0]*n);
    }else{
        result = max(value1[0]* k,value2[0]*n);
    }
    cout << result <<endl;
    
}