#include<iostream>

using namespace std;

template <class T>
T my_max(T a, T b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main(int argc, char const *argv[])
{
    int result = my_max<int>(4, 5);
    cout << "Greater value is: " << result << endl;
    return 0;
}
