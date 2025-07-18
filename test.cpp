
#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<vector<int>> groups(4);
        for (int i = 0; i < n; i++) {
            groups[i % 4].push_back(i);
        }
        
                cout << "Groups by remainder mod 4:" << endl;
        for (int i = 0; i < 4; i++) {
            cout << "  Remainder " << i << ": ";
            for (int num : groups[i]) {
                cout << num << " ";
            }
            cout << "(count: " << groups[i].size() << ")" << endl;
        }
        
        int count0 = groups[0].size();
        int count1 = groups[1].size();
        int count2 = groups[2].size();
        int count3 = groups[3].size();
        
        bool alice_wins = (count0 != count3) || (count1 != count2);
        
        if (alice_wins) {
            cout << "Alice" << endl;
        } else {
            cout << "Bob" << endl;
        }
        
        cout << endl;
    }
    
    return 0;
}