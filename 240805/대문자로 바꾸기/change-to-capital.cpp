#include <iostream>
using namespace std;

int main() {
char trasferVal='A'-'a';
char array[5][3];
//소문자 입력
for(int i=0; i<5;i++)
{
    for(int j=0;j<3;j++)
    {
        cin>>array[i][j];
    }
}
//대문자로 변환하여 출력
for(int i=0; i<5;i++)
{
    for(int j=0;j<3;j++)
    {
        cout<<char(array[i][j]+trasferVal)<<" ";
    }
    cout<<"\n";
    
}
    // 여기에 코드를 작성해주세요.
    return 0;
}