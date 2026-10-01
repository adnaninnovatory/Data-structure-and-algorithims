#include <iostream>
using namespace std;
int main() {
    // cout << "Hello, World!" << endl;

// g++ main.cpp -o main.exe; .\main.exe





// 1
// 21
// 321
// 4321
// 54321


//    for(int i = 0; i < n; i++) {
    //         for(int j=i+1; j>0; j--){
        //             cout << j;
        //         }
        //         cout << endl;
        //     }
        
        
        
    //     char n = 'D';
    //   for(char i = 'A'; i < n; i++) {
    //     if (i=='A')
    //     {        
    //         cout << i << endl;  
    //     }
        
    //     for(char j=i+1; j>='A'; j--){
    //         cout << j;
    //     }
    //     cout << endl;
    // }








    int n=5;
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j =0; j < i+1; i--)
        {
            cout << num;
            num++;
        
        }
        cout << endl;
    
    }
    
    return 0;
}

