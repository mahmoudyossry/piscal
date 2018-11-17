#include <iostream>

using namespace std;

int Pascal_Tri(int row, int col)
{
    if (row==col || col==0)
        return 1 ;
    else
    {
        return Pascal_Tri(row-1,col)+Pascal_Tri(row-1,col-1);
    }

}
int main()
{
    int row ;
    cout<<"Enter number of row : ";
    cin>>row;
    for(int i=0 ; i<row ; i++)
    {
        for(int k= row - i - 1  ; k>0 ; k--)
        {
            cout<<" ";
        }
        for(int j=0 ; j<= i ; j++)
        {
            cout<<Pascal_Tri(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
