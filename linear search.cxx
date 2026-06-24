#include<iostream>
using namespace std;
int linearsearch(int arr[] , int size , int target)
{
    for(int i=0 ; i<size ; i++)
    {
        if( arr[i] == target)
        {
            return i ;
        }
    }
    return -1;
}
int main()
{
    int arr[5] = {5 , 15, 25 , 35 , 45};
    cout<<"the possition of target is = "<<linearsearch(arr , 5 , 35);
}