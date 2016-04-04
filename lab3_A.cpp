#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <cstdlib>

using namespace std;



int main(){

int size , total_weight ;
size = total_weight = 0 ;

ifstream inFile("file.in" ,ios::in);
if(!inFile){cerr<<"Failded opening infile"<<endl; exit(1);} 

inFile>>size;
vector<int> weightOfEach(size);

for(int i = 0 ; i< size ; ++i){
	inFile >> weightOfEach.at(i); 
}
sort(weightOfEach.begin() ,weightOfEach.end() ) ;

for(int i = size -1 ; i  > size - 6 ; --i){
	total_weight = total_weight + weightOfEach.at(i) ;
}

cout<<total_weight<<endl;

return 0;

}