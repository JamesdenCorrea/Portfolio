#include<iostream>
using namespace std;
int main ()
{
    int score[5], n, i, max, min;
    double ave;
    cout << "Enter 5 scores: ";
    cin>>n;
    for (i = 0; i < 5; i++)
        cin >> score[i];
    max = score[0];
    for (i = 0; i < n; i++)
    {
        if (max < score[i])
            max = score[i];
    }
    min = score[0];
    for (i = 0; i < n; i++)
    {
        if (min > score[i])
            min = score[i];
    }
    cout << "Highest Score : " << max<<endl;
    cout << "Lowest Score : " << min;
    return 0;
}
