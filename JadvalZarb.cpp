#include <iostream>
#include <iomanip>


using namespace std;
int main()
{
    int  factor1, factor2 , n,m;
    cout << "enter n--> ";
    cin >> n;
    cout << "enter m--> ";
    cin >> m;

    cout << "\n\n\n        ";
    for( factor2 = 1 ; factor2 <= m ; ++factor2 )
        cout << setw(5) << factor2;

    cout << "\n        "<< "---------------------------------------------------" << endl;



    for( factor1 = 1 ; factor1 <= n ; ++factor1 )
    {
        cout << setw(6) << factor1 << " |";
        for( factor2 = 1 ; factor2 <= m ; ++factor2 )
            cout << setw(5) << factor1 * factor2;
        cout << endl;
    }
    cout << "\n\n\n";

    return 0;
}
