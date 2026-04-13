#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;   // ptr points to arr[0]

    cout << "Using pointer arithmetic:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "*(ptr+" << i << ") = " << *(ptr + i) << endl;
    }

    // alternative: increment ptr
    ptr = arr;
    for (int i = 0; i < 5; i++, ptr++)
        cout << *ptr << " ";

    return 0;
}

// #include <iostream>
// using namespace std;
// int main() {
//     int n = 5;
//     int *arr = new int[n];  // dynamic array on heap

//     // assign values
//     for (int i = 0; i < n; i++)
//         arr[i] = (i + 1) * 10;

//     // print values
//     for (int i = 0; i < n; i++)
//         cout << "arr[" << i << "] = " << arr[i] << endl;

//     delete[] arr;   // use delete[] for arrays!
//     arr = nullptr;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int *ptr = new int;   // allocate on heap
//     *ptr = 99;

//     cout << "Value: " << *ptr << endl;

//     delete ptr;           // free memory — always!
//     ptr = nullptr;        // avoid dangling pointer
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void swap(int *a, int *b) {
//     int temp = *a;   // temp = value at a
//     *a = *b;          // value at a = value at b
//     *b = temp;        // value at b = temp
// }

// int main() {
//     int x = 5, y = 10;
//     cout << "Before: x=" << x << " y=" << y << endl;
//     swap(&x, &y);
//     cout << "After:  x=" << x << " y=" << y << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int num = 42;
//     int *ptr = &num;          // pointer stores address of num

//     cout << "Value:   " << num    << endl;
//     cout << "Address: " << &num   << endl;
//     cout << "Via ptr: " << *ptr   << endl;  // dereference
//     cout << "Ptr val: " << ptr    << endl;  // address stored in ptr
//     return 0;
// }
