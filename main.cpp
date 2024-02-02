#include <iostream>
#include<vector>
using namespace std;
int peakindex(vector<int>arr,int n)
{
    int start=0;
    int end=n-1;
    int mid=start+((end-start)/2);
    while(start<=end)
    {
        if(arr[mid]<arr[mid+1])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=start+((end-start)/2);
    }
    return mid;
}

int main() {
        vector<int>arr;
        int size;
        int values;
        int ansr;
        cout<<"Enter the size of the array"<<endl;
        cin>>size;
        cout<<"Let's fill the array "<<endl;
        for(int x=0;x<size;x++) {
            cin >> values;
            arr.push_back(values);
        }
        ansr=peakindex(arr,size);
        cout<<"The peak index of this mountain array is "<<ansr<<endl;

    }



