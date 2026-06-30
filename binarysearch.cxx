#include<iostream>
using namespace std;
int binarysearch(int arr[] , int size  , int target)
{
    int start = 0 ;
    int end = size - 1;
    while(start<=end)
    {
        int mid = (start +end)/2;
        if(target > arr[mid])
        {
            start = mid+1;
        }
        else if(target<arr[mid])
        {
            end = mid -1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}
int main()
{
            int arr[6] = {1,2,3,4,5,6};
            cout<<"position of target is "<<binarysearch(arr , 6 , 4);
}
            