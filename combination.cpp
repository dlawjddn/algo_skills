#include <iostream>
using namespace std;
int lim=0, check=0, arr[20];
void find_out(int idx, int num)
{
    if(idx==check)
    {
        for(int a=1; a<=check; a++)
        cout<<arr[a]<<" ";
        cout<<"\n";
        return ;
    }
    else
    {
        idx++;
        for(int k=num+1; k<=lim; k++)
        {
            arr[idx]=k;
            num=k;
            find_out(idx, num);
        }
    }
}
void com(int lim, int check)
{
    for(int i=1; i<=lim; i++)
    {
        int idx=1, num=i;
        arr[idx]=num;
        find_out(idx, num);
    }
}
int main()
{
    cin>>lim>>check;
    com(lim, check);
}
