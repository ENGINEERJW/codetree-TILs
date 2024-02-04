//요구사항: 단어 수 n, 사전순 정렬 후 출력 
#include <iostream>
#include<string>
#include <algorithm>
#include<functional>
using namespace std;

int main() {
    int n=0;
    cin>>n;
    string words[n];
    cin>>words;
    
    sort(words,words+n);
    for(int i=0; i<n; i++)
        cout<<words[i]<<endl;
  
    return 0;
}