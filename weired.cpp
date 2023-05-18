#include <bits/stdc++.h>
using namespace std;

int weird_array(vector<int> arr) {
    unordered_map<int, int> freq;
    int max_freq = 0, n = arr.size();
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
        max_freq = max(max_freq, freq[arr[i]]);
    }
    if (max_freq == 1) return 0;
    int res = n;
    for (auto &[num, count] : freq) {
        if (count == max_freq) {
            int left = 0, right = 0;
            while (arr[right] != num) right++;
            while (right < n && arr[right] == num) {
                res = min(res, right - left + 1);
                right++;
            }
        }
    }
    return res;
}

int main() {
   // vector<int> arr = {13, 3, 1, 3, 31};
    //cout << weird_array(arr) << endl; // Output: 2

        int q;
    cin>>q;

    while(q--){

    int n;
    cin>>n;

    vector<int>v;
    for(int i=0;i<n;++i){
        int val;
        cin>>val;
        v.push_back(val);
    }
    cout<<weird_array(v)<<endl;

}
    return 0;
}