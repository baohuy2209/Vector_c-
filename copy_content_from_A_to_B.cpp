#include <iostream> 
#include <iomanip>
#include <fstream> 

using namespace std; 

int main() {
	// variable declaration 
	
	ofstream outfile; 
	ifstream infile; 
	
	char fname1[10] , fname2[20] ; 
	char ch, uch; 
	
	// user input
	
	cout<<"Enter a file name to be copied"<<endl; 
	cin>>fname1 ; 
	cout<<"Enter new file name "<<endl; 
	cin>>fname2 ; 
	
	infile.open(fname1); 
	if(infile.fail()){
		cerr<<"No such a file Exit";
		return 0; 
	}
	
	outfile.open(fname2) ; 
	if(outfile.fail()){
		cerr<<"Unable to create a file";
		return 0;
	}
	
	while(infile.eof()){
		ch = [char] infile.get(); 
		// luu du lieu 1 hang cua file vao bien   
		
		
		nch = [char] toupper(ch);   
		
		
		outfile.put(nch); 
		// dua du lieu vao file 
	}
	
	infile.close() ; 
	outfile.close() ; 
	
	
	return 0; 
}
