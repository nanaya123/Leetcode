#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


int main(){
   vector<string> strs;
   strs.push_back("eat");
   strs.push_back("tea");
   strs.push_back("tan");
    strs.push_back("ate");
    strs.push_back("nat");
   strs.push_back("bat"); 
   for (int i=0;i<strs.size();i++){
      cout << strs[i] << endl;}
    vector< vector<string > > res;
    unordered_map< string, vector<string> > hash;
   for (int i=0;i<strs.size();i++){
    string tmp = strs[i];
    sort(tmp.begin(), tmp.end());
hash[tmp].push_back(strs[i]);
    
}
  // cout << hash["eat"] << endl;
   //cout << hash["tea"] << endl;
   //cout << hash['bat'] << endl;

return 0;
}
