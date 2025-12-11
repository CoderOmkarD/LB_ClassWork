#include <iostream>

using namespace std;

template <class T>
T Add(T No1, T No2)
{
    T Ans;
    Ans = No1 + No2;
    return Ans;
}
int main()
{
    int iValue1 = 11, iValue2 = 21, iRet = 0;
    float fValue1 = 11.5f, fValue2 = 21.5f, fRet = 0.0f;
    double dValue1 = 11.34, dValue2 = 21.92, dRet = 0.0;

    iRet = Add(iValue1, iValue2);
    cout << "Addition of int " << iRet << "\n";

    fRet = Add(fValue1, fValue2);
    cout << "Addition of float " << fRet << "\n";

    dRet = Add(dValue1, dValue2);
    cout << "Addition of double " << dRet << "\n";

    return 0;
}