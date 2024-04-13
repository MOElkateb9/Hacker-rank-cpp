using namespace std;
#include <iostream>
#include <unordered_set>
#include <algorithm>
#include <math.h>
#include <stack>
#include <string>
#include <iomanip>
#include <vector>
#include <queue>
#include <deque>
#include <map>
#include <set>

#define loopf(i ,s ,e)        for (int i = s ; i <e; i++)
#define size_arr(arr)         sizeof arr / sizeof arr[0]
#define all(s)                s.begin() , s.end()
#define endl                  '\n'
#define Endl                  '\n'
#define ll                    long long int
#define clr(x,val)          memset(x,val,sizeof(x))
#include <climits>
#include <unordered_map>
#define ONLINE_JUDGE
#define pi 3.14159265358979323846



void tower_of_hanoi(int n, char from, char to, char temp) {
    if (n == 1) {
        cout << "Move disk 1 from " << from << " to " << to << endl;
        return;
    }

    tower_of_hanoi(n - 1, from, temp, to);
    cout << "Move disk " << n << " from " << from << " to " << to << endl;
    tower_of_hanoi(n - 1, temp, to, from);
}

int main() {
    int num_disks;

    cout << "Enter the number of disks: ";
    cin >> num_disks;

    
    long long moves = pow(2, num_disks) - 1;

    cout << "Total number of moves : " << moves << endl;

    tower_of_hanoi(num_disks, 'A', 'C', 'B');

    return 0;
}


