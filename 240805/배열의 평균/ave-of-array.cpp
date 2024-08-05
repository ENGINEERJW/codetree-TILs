#include <iostream>
#include<iomanip>

using namespace std;

int main() {

    int array[2][4];
    float lowAverage=0;
    float columnAverage=0;
    float average=0;
    cout << fixed;
    cout.precision(1);
    for(int j=0; j<2;j++)
    {
        //2차원 배열 저장.
        for(int i=0; i<4;i++)
        {
            cin>>array[j][i];
        }
    }
    //가로 평균 구하기 
    for(int j=0;j<2;j++)
    {
        for(int i=0; i<4; i++)
        {
            lowAverage+=array[j][i];

        }
        cout<<lowAverage/4<<" "; 
        lowAverage=0;
    }
    cout<<endl;
        //세로 평균
        for(int i=0;i<4;i++)
    {
        for(int j=0; j<2; j++)
        {
            columnAverage+=array[j][i];

        }
        cout<<columnAverage/2.0<<" "; 
        columnAverage=0;
    }
    //전체 평균
       for(int j=0;j<2;j++)
    {
        for(int i=0; i<4; i++)
        {
            average+=array[j][i];

        }
    }
    cout<<endl;

    cout<<average/8.0;

    // 여기에 코드를 작성해주세요.
    return 0;
}