#include <bits/stdc++.h>

using namespace std;

string feeOrUpfront(int n, int k, int x, int d, vector <int> p) {
    float sum_of_charges=0;
    for(int p_i=0; p_i<n; p_i++){
        float max;
        if(k>=float(x)*float(p[p_i])/100){
            max=k;
        }
        else{
            max=float(x)*float(p[p_i])/100;
        }
        sum_of_charges+=max;
    }
    if(float(d)<sum_of_charges){
        return "upfront";
    }
    else{
        return "fee";
    }
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int n;
        int k;
        int x;
        int d;
        cin >> n >> k >> x >> d;
        vector<int> p(n);
        for(int p_i = 0; p_i < n; p_i++){
        	cin >> p[p_i];
        }
        string result = feeOrUpfront(n, k, x, d, p);
        cout << result << endl;
    }
    return 0;
}
