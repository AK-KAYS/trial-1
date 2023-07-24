#include <iostream>
#include <fstream>
using namespace std;
int main (){
int sales[] = {180,300,200,250,270};
ofstream dataFile;
dataFile.open("sales.txt");
if (!dataFile)
cout << "Error opening data file\n";
else // output daily sales to a file
{ for (int day = 0; day < 5; day++)
dataFile << sales[day]<<endl;
dataFile.close();
}
return 0;
}
