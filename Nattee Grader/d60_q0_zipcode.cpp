#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
class Letter{
public:
    string name;
    string address;
    string province;
    string district;
    int zip;
    bool operator < (const Letter& other) const {
    //**Begin Insert**
    return zip == other.zip ? (address == other.address ? (district == other.district ? (province == other.province ? name < other.name : province < other.province) : district < other.district) : address < other.address) : zip < other.zip;

    //**End Insert**
    }
};
class ZipInfo{
public:
    int zip;
    string province;
    string district;
};
void correctZipAndSortLetters(vector<ZipInfo>& zipinfo, vector<Letter>& letters) {
    //**Begin Insert**
    map< pair<string, string>,int> zipmap;
    for(auto &c : zipinfo){
        zipmap[make_pair(c.district, c.province)] = c.zip;
    }
    for(auto &c : letters){
        c.zip = zipmap[make_pair(c.district, c.province)];
    }
    sort(letters.begin(),letters.end());

    //**End Insert**
}

int main() {
    int nzip;
    cin>>nzip;
    vector<ZipInfo> zipinfo;
    for (int i = 0; i < nzip; i++) {
    ZipInfo z;
    cin>>z.zip>>z.district>>z.province;
    zipinfo.push_back(z);
    }
    int n;
    cin>>n;
    vector<Letter> letters;
    for (int i = 0; i < n; i++) {
    Letter l;
    cin>>l.name>>l.address>>l.district>>l.province>>l.zip;
    letters.push_back(l);
    }
    correctZipAndSortLetters(zipinfo, letters);
    for (auto& l:letters) {
    cout<<l.name<<" "<<l.address<<" "<<l.district<<" "<<l.province<<" "<<l.zip<<endl;
    }
}