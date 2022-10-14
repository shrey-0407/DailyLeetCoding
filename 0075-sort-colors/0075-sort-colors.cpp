class Solution {
public:
    void sortColors(vector<int>& a) {
        int l=0,hi=a.size()-1,mid=0;
        
        while(mid<=hi){
            switch(a[mid]){
                case 0:
                    swap(a[l++],a[mid++]);
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(a[mid],a[hi--]);
                    break;
            }
        }
    }
};