#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>
#include <algorithm>
using std::endl;
using std::rand;
using std::cout;
using std::cin;

int main() {
    int l=0,sum = 0, k1=0, k2=0, n=0, arr[10];
    cout << "Task 1" << endl;
    std::srand(std::time(nullptr));
    for (int i = 0; i <= 9; i++) {
        arr[i] = std::rand() % 21 - 10;
        cout << arr[i] << endl;
    }
    cout << "Results: " << arr[0] - arr[8] - arr[5] << endl;
    cout << "Task 2" << endl;
    cout << "#1" << endl;
    cout << "n=" << endl;
    cin >> n;
    int *b = new int[n];
    for (int i = 0; i <= (n - 1); i++) {
        cout << "b[" << i << "]= " << endl;
        cin >> b[i];
    }
    for (int i = 0; i <= (n - 1); i++) {
        cout << "b[" << i << "]= " << b[i] << endl;
    }
    cout << "#2" << endl;
    for (int i = 0; i <= (n - 1); i++) {
        if (b[i] % 2 == 0) {
            b[i] = pow(b[i], 2);
            cout << "b[" << i << "]= " << b[i] << endl;
            
        }
    }
    cout << "#3" << endl;
    cout << "Enter k1: ";
    cin >> k1;
    cout << "Enter k2: ";
    cin >> k2;
    for (int i = k1 - 1; i <= k2 - 1; i++) {
        sum += b[i];
    }
    cout << "sum=" << sum << endl;
    delete[] b;
    cout << "Task 3" << endl;
    int m, x;
    cout << "enter m:" << endl;
    cin >> m;
    std::vector<int> arr3;
    for (int i = 0; i <= (m - 1); i++) {
        cout << "x=";
        cin >> x;
        arr3.push_back(x);
    } cout<<"#1"<< endl;
    for (int i : arr3) {
        cout  <<i << endl;
    }
    arr3.push_back(18);
    cout << "#2" << endl;
    for (int i : arr3) {
        cout  << i << endl;
    }
    cout << "#3" << endl;
    float u;
    for (float i : arr3) {
        u=static_cast<float>(i) / arr3.back();
        cout  << u << endl;
    }
    cout << "#4" << endl;
    for(int i=0; i < m; i++)
    {   if (arr3[i]>0)
        {
        arr3.erase(arr3.begin()+i);
            break;
        }
    }
    for(int i=0; i <m; i++) cout<<arr3[i]<<" "<<endl;
    cout << "Task 4"<< endl;
    cout << "#1" << endl;
    std::string j;
    cout << "j=" << endl;
    cin.ignore(10,'\n');
    getline(cin, j);
    cout << j << endl;
    cout << "#2" << endl;
    cout << j.length()<< endl;
    for( int i : j) {
        if ((i == 'A') || (i == 'A') || (i == 'E') || (i == 'e') || (i == 'I') || (i == 'i') || (i == 'O') ||
                (i == 'o') || (i == 'U') || (i == 'u')) {
            l++;
        }
    }
    cout << (j.length() / static_cast<float>(l)) << endl;
    cout << "#3" << endl;
    int l1,l2;
    cout << "l1: " << endl;
    cin >> l1;
    cout << "l2: ";
    cin >> l2;
    cout << j.substr(l1-1,l2-l1+1) << endl;
    cout << "#4 " << endl;
    std::string in = "Can you can a can as a canner can can a can?";
    std::string d;
    cin >> d;
    for (int i = 0; i<=19; i++)
    {
        if ((in.substr(i, 3) == "Can")) {
            in.erase(i, 3);
            in.insert(i, d);
        }
        if ((in.substr(i, 3) == "can")) {
            in.erase(i, 3);
            in.insert(i, d);
        }
    }
    for (int i = 29; i<=in.length(); i++){
        if (in.substr(i,3) == "can")  {
            in.erase(i,3);
            in.insert(i, d);
        }
    }
    std::string k =in.substr(0,1);
    transform(k.begin(), k.end(), k.begin(), toupper);
    in.erase(0,1);
    in.insert(0,k);
    cout << in << endl;
    return 0;
    
}
