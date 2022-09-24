class Solution {
public:
    int removeElement(vector<int>& a, int v) {
        int c=0;
        for(int i=0;i<a.size();i++){
            if(a[i]==v) c++;
            else a[i-c]=a[i];
        }
        return a.size()-c;
    }
};