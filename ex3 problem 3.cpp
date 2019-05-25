#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	
	//i=the elements
	int i, j, size;
	char letters[100];
	
	cout<< "enter array size";
	cin >> size;
	for (i=1; i<=size; i++)
	cin >> letters[i];
	
	for(i=1; i<=size; i++)
	    for (j=1; j<=size; j++)
	if (letters[i]>letters[j])
	swap (letters[i], letters[j]);
	
	for (i=1; i<=size; i++)
	cout <<letters[i]<< "";
	
		_getch();
	return 0;
}
