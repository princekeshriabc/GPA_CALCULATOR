#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, b;
    int Total_Credit_Score = 0;
    int Total_Credit = 0;
    cout << "Enter the no of course : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a;
        string s;
        cout << "Course credit " << i << ": ";
        cin >> a;
        cout << "Course grade " << i << ": ";
        cin >> s;
        if (s == "A")
        {
            b = 10;
        }
        else if (s == "A-")
        {
            b = 9;
        }
        else if (s == "B")
        {
            b = 8;
        }
        else if (s == "B-")
        {
            b = 7;
        }
        else if (s == "C")
        {
            b = 6;
        }
        else if (s == "C-")
        {
            b = 5;
        }
        else if (s == "D")
        {
            b = 4;
        }
        else
        {
            cout << "Invalid input grade!" << endl;
            return 0;
        }
        Total_Credit = Total_Credit + a;
        Total_Credit_Score = Total_Credit_Score + (b * a);
    }
    float c = Total_Credit_Score / Total_Credit;
    cout << "CGPA is :" << (float)c << endl;
    return 0;
}