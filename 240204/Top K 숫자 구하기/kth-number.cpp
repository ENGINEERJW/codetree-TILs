//원소의 수 N, 구하고자 하는 번째 수 k
#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    int n=0;
    int k=0;
    cin>>n;
    cin>>k;
    int num[n];
    for(int i=0; i<n; i++)
    {
        cin>>num[i];
    }
    sort(num, num+n);
    cout<<num[k-1];
    

    
    
    
    
    return 0;
}