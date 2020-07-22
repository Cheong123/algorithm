#include<iostream>

using namespace std;


template<typename T>//使用泛型模板
void selectionSort(T arr[], int n)
{
    for(int i = 0; i < n; ++i)
    {
        int minindex = i;
        for(int j = i+1; j < n; ++j)
        {
            if(arr[j] < arr[minindex])
                minindex = j;
        }
        swap(arr[minindex], arr[i]);
    }
}


int main()
{
    int arr[8] = {8,6,2,3,1,5,7,4};
    selectionSort(arr, 8);
    for(auto e : arr)
    {
        cout << e << " ";
    }
    cout << endl;
    return 0;
}
