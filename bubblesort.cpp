#include <iostream>
using namespace std;

int arr[15];
int n;

void inputData(){

    while (true)
    {
        cout << "Masukan Jumlah Data:";
        cin >> n;

        if (n < 15){
            break;
        }
        else{
            cout << "Jumlah Data Maksimal 15" << endl;

        }
    }
    
    cout << "======================" << endl;
    cout << "Masukan Data" << endl;
    cout << "======================" << endl;
    cout << endl;

    for (int i = 0; i <n; i++)
    {
        cout << "Masukan Data ke-" << i + 1 << " = ";
        cin >> arr[i];
    }
}
void bubblesort()
{
    int pass = 1; // step 1
    do
    
    {
        for (int j = 0; j < n - 1 - pass; j++) //step 2
       {
        if(arr[j] > arr[j + 1]) //step 3
        {
            int temp;
            temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
    }
    
    pass = pass + 1; //step 4

       } while (pass <= n-1); //step 5
       
}
int main()
{
    inputData();
}