// C++の引数渡しは全て値渡しなので、データを変更したいならポインタで参照渡し
#include <iostream>
using namespace std;

void ChangeToShohwa(int x)
{
    if(1926 < x && x < 1989)
        x -= 1925;
    else
        x = 0;
}

void Shohwa()
{
    int nYear;

    cout << "西暦を入力して下さい > ";
    cin >> nYear;

    ChangeToShohwa(nYear);
    if(nYear)
        cout << "その年は昭和 " << nYear
             << " 年です。" << endl;
    else
        cout << "その年は昭和ではありません。" << endl;
}

int main()
{
    Shohwa();
    Shohwa();
    return 0;
}