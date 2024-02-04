#include <iostream>
#include<algorithm>

#define MAX_N 100

using namespace std;
int n;
int a[MAX_N],b[MAX_N];
bool Equal()
{
    for(int i=0; i<n; i++)
        if(a[i] != b[i])
            return false;
    return true;

}
int main() {
    int n=0;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }    
    for(int i=0; i<n; i++)
    {
        cin>>b[i];

    }
    sort(a,a+n);
    sort(b,b+n);
   if(Equal())
        printf("Yes");
    else 
        printf("No");

    
    
    
    
    return 0;
}