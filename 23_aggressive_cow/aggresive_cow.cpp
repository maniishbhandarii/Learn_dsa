#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int>& vec, int cows, int minAllowedDist){ //O(n)
    int cow = 1, lastPos = vec[0];

    for (int i = 1; i < vec.size(); i++)
    {
        if((vec[i] - lastPos) >= minAllowedDist){
            cow++;
            lastPos = vec[i];
        }
        if(cow == cows) return true;
    }
    return false;
    
}

int getDistance(vector<int> vec, int cows){ // O(nlogn + log(range) * n)
    sort(vec.begin(), vec.end()); //nlogn
    int n = vec.size();
    int s = 0, e = vec[n-1] - vec[0];
    int ans = -1;
    while(s<=e){ //log(range) * n
        int m = s + (e-s)/2;
        if(isPossible(vec,cows,m)){
            ans = m;
            s = m + 1;
        }
        else{
            e = m - 1;
        }
    }
    return ans;

}

int main()
{
    vector<int> vec = {1, 2, 8, 4, 9};
    int cows = 3;
    int result = getDistance(vec, cows);
    cout<<"Answer: "<<result;
    return 0;
}