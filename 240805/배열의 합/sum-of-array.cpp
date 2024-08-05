#include <iostream>
using namespace std;

int main() {
    int arry[4][4];
    int sum=0;
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4;j++)
        {
            cin>>arry[i][j];
            sum=sum+arry[i][j];

        }
        cout<<sum<<endl;
        sum=0;

    }

    // 여기에 코드를 작성해주세요.
    return 0;
}