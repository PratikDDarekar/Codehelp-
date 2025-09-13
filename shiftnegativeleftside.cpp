#include <iostream>
using namespace std;
void ShiftNegativeLeft(int arr[],int size);
int main()
{
    int arr[]={23,-7,0,12,-10,-11,40,60};
    int size=sizeof(arr)/sizeof(arr[0]);

    ShiftNegativeLeft(arr, size);
}

// void ShiftNegativeLeft(int arr[],int size)
// {
//     int i=0;
//     int j=size-1;

//     while(i<j)
//     {
//         if(arr[i]>0 && arr[j]<0)
//         {
//             swap(arr[i],arr[j]);
//             i++;
//             j--;
//         }
//         if(arr[i]<0)
//         {
//             i++;
//         }
//           if(arr[j]>0)
//         {
//             j--;
//         }
//     }

//     for(int i=0;i<size;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }

// void ShiftNegativeLeft(int arr[],int size)
// {
//     int i=0;
//     int j=size-1;

//     while(i<j)
//     {         
//         while(arr[i]<0 && i<j)
//         {
//             i++;
//         }
//           while(arr[j]>0 && i<j)
//         {
//             j--;
//         }
//            swap(arr[i],arr[j]);
//             i++;
//             j--;
//     }

//     for(int i=0;i<size;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }

void ShiftNegativeLeft(int arr[],int size)
{
    int i=0;
    int j=0;

    while(i<size)
    {         
        if(arr[i]<0){
        swap(arr[i],arr[j]);
        j++;
        }
        i++;
    }

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

