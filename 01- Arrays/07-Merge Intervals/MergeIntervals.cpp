#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>>& intervals){
    if(intervals.empty()){
        return {};
    }

    //Sort by Start Time
    sort(intervals.begin(), intervals.end());

    vector<vector<int>> merged;
    merged.push_back(intervals[0]);

    for(int i = 1; i < intervals.size(); i++){
        //If no overlap, add Current Interval
        if(merged.back()[1] < intervals[i][0]){
            merged.push_back(intervals[i]);
        }
        else{
            //Overlap merge by Updating the end
            merged.back()[1] = max(merged.back()[1], intervals[i][1]);
        }
    }
    return merged;
}

void printIntervals(const vector<vector<int>>& intervals) {
    for (const auto& interval : intervals) 
    {
        cout << "[" << interval[0] << "," << interval[1] << "] ";
    }
    cout << endl;
}

int main() {
    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};

    vector<vector<int>> result = mergeIntervals(intervals);

    cout << "Merged Intervals: ";
    printIntervals(result);

    return 0;
}