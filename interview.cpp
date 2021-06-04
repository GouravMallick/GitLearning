#include <iostream>
        using namespace std;
        int main() {
        int num;
        cin>>num;
        int len= to_string(num).length();
        int arr[10],lnum=0,max=0;
        for (int i =len-1;i>=0;i--)
        {
        arr[i] = num%10;
        num =num/10;    //to convert int into array
        }
        for (int i=0;i<len-2;i++)
        {
        if (arr[i] >arr[i+1])
            lnum = arr[i]*100+arr[i+1]*10+arr[i];
        if (lnum>max)
            max= lnum;  
        }
        cout<<max;
        return 0;
    }