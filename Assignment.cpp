#include <iostream>
using namespace std;
int main()
{
    // int arr[7]={1,2,3,4,5,6,7};
    int m,n,c=0;
    cout << "Enter number of rows : ";
    cin >> m ;
    cout << "Enter number of columns: ";
    cin >>n;
    int arr[m][n];
    cout << "Enter array elements \n";
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin >> arr[i][j];
    cout << "Array elements are: \n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            cout << arr[i][j] << " ";
        cout << "\n";
    }
    return 0;
}
