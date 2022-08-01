#include<bits/stdc++.h>
using namespace std;
void printArray(int size,int *arr)
{
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void bubbleSort(int size,int *arr)
{
    for(int pos = 1;pos<size;pos++){
        int flag = 0;
        //cout<<"Iteration no : "<<pos<<endl;
        for(int check = 0;check<size-pos;check++){
            if(arr[check] > arr[check+1]){
                swap(arr[check],arr[check+1]);
                flag = 1;
            }
            //printArray(size,arr);
        }
        if(flag == 0) break;
        cout<<endl;
    }
}
int main()
{
    int size;
    cin>>size;
    int *arr = new int[size]{0};
    for(int i = 0;i<size;i++){
        cin>>arr[i];
    }
    // before sort array element
    cout<<"Before sort : ";
    printArray(size,arr);

    // bubble sort implementation part
    bubbleSort(size,arr);

    // after sort array element
    cout<<"After sort : ";
    printArray(size,arr);




    return 0;
}
