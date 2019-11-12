#include <iostream>
#include <iomanip>
#include <map>
using namespace std;

int main(){

    int n;
    cout << fixed << setprecision(2);
    map<string,pair<float,int>> teacher, course;

    cin >> n;
    for(int i=0; i<n; i++){
        string courseID,name;
        float score;
        cin >> courseID >> name >> score;

        if(teacher.find(name) == teacher.end()) teacher[name] = make_pair(score,1);
        else teacher[name] = make_pair(teacher[name].first+score, teacher[name].second+1);

        if(course.find(courseID) == course.end()) course[courseID] = make_pair(score,1);
        else course[courseID] = make_pair(course[courseID].first+score, course[courseID].second+1);
    }

    for(const auto &c : course){
        cout << c.first << " " << c.second.first/c.second.second << endl;
    }

    for(const auto &c : teacher){
        cout << c.first << " " << c.second.first/c.second.second << endl;
    }
    return 0;
}