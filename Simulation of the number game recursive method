//Simulation of the binary game(recursion)
#include <iostream>
using namespace std;

void binary_val(long long int low,long long int high)
{
    char val;
    long long int mid=(low+high)/2;
    cout<<"Is the number:"<<" "<<mid<<endl;
    cout<<"If yes, type 'Y' else type 'N'"<<endl;
    cin>>val;
    if(val=='Y')
    {
        cout<<"Yaay! The number you chose is:"<<" "<<mid<<endl;
        return;
    }
    else
    {
        cout<<"Is the number greater than:"<<" "<<mid<<endl;
        cout<<"If yes, type 'Y' else type 'N'"<<endl;
        cin>>val;
        if(val=='Y')
        {
            binary_val(mid+1,high);
        }
        else
        {
            binary_val(low,mid);
        }
    }
}

int main()
{
    long long int low,high;
    cout<<"Enter the range of elements:"<<endl;
    cin>>low>>high;
    binary_val(low,high);
    return 0;
}
