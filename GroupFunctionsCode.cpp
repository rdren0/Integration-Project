#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
int Flavor();
int group2();
double group3(int);
int group4();
double group5();

int main(void)
{
	Flavor();
		
	cout << "The total income is " << group5();	
	system("pause");
	return 0;
}


///My First Function/////////////////////////////////////////////////////////////////////
int Flavor()
{
	int NumFlavor;

	cout << " Please make your flavor selection from the following:" << endl;
	cout << "" << endl;
	cout << " 1. Vanilla         6.Pistachio" << endl;
	cout << " 2. Chocolate       7.Neopolitan" << endl;
	cout << " 3. Strawberry      8.Birthday" << endl;
	cout << " 4. Mint Chip       9.Cheesecake" << endl;
	cout << " 5. Peanut Butter   10.Dulce de Leche" << endl;
	cin >> NumFlavor;

	switch (NumFlavor) {
	case 1:
		cout << " Vanilla selected. " << endl;
		break;

	case 2:
		cout << " Chocolate selected. " << endl;
		break;

	case 3:
		cout << " Strawberry  selected. " << endl;
		break;

	case 4:
		cout << " Mint Chip selected. " << endl;
		break;

	case 5:
		cout << " Peanut Butter selected. " << endl;
		break;

	case 6:
		cout << " Pistachio selected. " << endl;
		break;

	case 7:
		cout << " Neopolitan selected. " << endl;
		break;

	case 8:
		cout << " Birthday selected. " << endl;
		break;

	case 9:
		cout << " Cheesecake selected. " << endl;
		break;

	default:
		cout << " Dulce de Leche selected. " << endl;
		break;
	}
	return NumFlavor;
}
/////////////////////////////////////////////////////////////////////////////
int group2()
{
	int count = 0;
	int count2 = 0;
	//int num;
	int rtnum;
	while (count <= 10) {
		//num = Flavor();
		rtnum = group3(Flavor());
		count++;
	}

		return rtnum;
}
double group3(int n) {
	switch(n % 10) {
	case 0: return 1.54;
	case 1: return 1.4;
	case 2: return 6.13;
	case 3: return 4.63;
	case 4: return 2.45;
	case 5: return 1.23;
	case 6: return 0.75;
	case 7: return 1.15;
	case 8: return 1.25;
	}
	return 2.13;
}
///My Second Function///////////////////////////////////////////////////////////////////
int group4()
{
	int grp2num;
	grp2num = group2();

	while (grp2num < 1 || grp2num > 10)
	{
		cout << "Invalid Response" << endl;
		cout << "Try another flavor" << endl;
		cin >> grp2num;
	}
	cout << "" << endl;
	return grp2num;
}
/////////////////////////////////////////////////////////////////////////////////////////////
double group5() {

	char cont;
	float grp4Num, grp3Num, total=0;
	cout << "Do you want another order? y/n " << endl;
	cin >> cont;
	while (cont != 'n') {
		grp4Num = group4();
		grp3Num = group3(grp4Num);
		total += grp4Num + grp3Num;
		cout << "Do you want another order? y/n" << endl;
		cin >> cont;
	}
	return total;
}
