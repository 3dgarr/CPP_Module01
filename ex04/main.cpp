#include <fstream>
#include <iostream>
#include "Replace.hpp"
int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "--> ./exec <filename> <replacement> <replacer>" << std::endl;
		return (1);
	}

	Replace	replace(argv[1], argv[2], argv[3]);

	replace.startTask();

}


// #include <fstream>
// #include <iostream>
// using namespace std;
 
// int main () {
//    char data[100];

//    // open a file in write mode.
//    ofstream outfile;
//    outfile.open("afile.dat");

//    cout << "Writing to the file" << endl;
//    cout << "Enter your name: "; 
//    cin.getline(data, 100);

//    // write inputted data into the file.
//    outfile << data << endl;

//    cout << "Enter your age: "; 
//    cin >> data;
//    cin.ignore();
   
//    // again write inputted data into the file.
//    outfile << data << endl;

//    // close the opened file.
//    outfile.close();

//    // open a file in read mode.
//    ifstream infile; 
//    infile.open("afile.dat"); 
 
//    cout << "Reading from the file" << endl; 
//    infile >> data; 

//    // write the data at the screen.
//    cout << data << endl;
   
//    // again read the data from the file and display it.
//    infile >> data; 
//    cout << data << endl; 

//    // close the opened file.
//    infile.close();

//    return 0;
// }