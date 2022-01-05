#include <iostream>
#include <string>
#include <conio.h>//For password entering
using namespace std;
struct Location
{
	string City;
	string Street_Name;
};
struct ApartmentInstallments
{
	int Apartment_ID;
	int Down_Payment;
	int Installment_Years;
};
struct ApartmentInfo
{
	int Apartment_ID;
	Location gps;
	int Price;
	string View;
	string Payment_Method;
	ApartmentInstallments Inst[10];
};
struct ApartmentOwner
{
	int Owner_ID;
	string Name;
	string Password[20];
	string Phone;
	string Email;
	ApartmentInfo Info[10];
};
ApartmentOwner owr[10];
ApartmentInstallments inst[10];
void Thanks_Statment()
{
		cout << endl;
		for (size_t i = 0; i < 120; i++)
		{
			cout << "*";
		}
		cout << "\n\t\t\t\t    Thank you for choosing AqarMap!\n";
		for (size_t i = 0; i < 120; i++)
		{
			cout << "*";
		}
		cout << endl;
}
void Decleration()
{
	//First Owner[0]:Zahran
	{
		owr[0].Name = "Zahran";
		owr[0].Owner_ID = 1;
		{
			owr[0].Password[0] = { "2" };
			owr[0].Password[1] = { "1" };
			owr[0].Password[2] = { "5" };
			owr[0].Password[3] = { "4" };
			owr[0].Password[4] = { "8" };
			owr[0].Password[5] = { "7" };
			owr[0].Password[6] = { "a" };
			owr[0].Password[7] = { "b" };
			owr[0].Password[8] = { "c" };
		}
		owr[0].Phone = "01554117202";
		owr[0].Email = "mohamedzaahran1@gmail.com";
	}
	//First Cash Apartment Info[0] for Owner[0]:Zahran
	{
		owr[0].Info[0].Apartment_ID = 1;
		owr[0].Info[0].Price = 1500000;
		owr[0].Info[0].View = "Garden";
		owr[0].Info[0].Payment_Method = "Cash";
		owr[0].Info[0].gps.City = "Nasr City";
		owr[0].Info[0].gps.Street_Name = "Ahmed Fakhry";
	}
	//Second Installment[0] Apartment Info[1] for Owner[0]:Zahran
	{
		owr[0].Info[1].Apartment_ID = 2;
		owr[0].Info[1].Price = 1000000;
		owr[0].Info[1].View = "Main Street";
		owr[0].Info[1].Payment_Method = "Installment";
		owr[0].Info[1].gps.City = "Tagmoo Khames";
		owr[0].Info[1].gps.Street_Name = "Street 17";
		owr[0].Info[1].Inst[0].Apartment_ID = owr[0].Info[1].Apartment_ID;
		owr[0].Info[1].Inst[0].Down_Payment = 500000;
		owr[0].Info[1].Inst[0].Installment_Years = 5;
	}
	//Third Cash Apartment Info[2] for Owner[0]:Zahran
	{
		owr[0].Info[2].Apartment_ID = 3;
		owr[0].Info[2].Price = 5000000;
		owr[0].Info[2].View = "Pool";
		owr[0].Info[2].Payment_Method = "Cash";
		owr[0].Info[2].gps.City = "Tagmoo Khames";
		owr[0].Info[2].gps.Street_Name = "Street 15";
	}
	//Second Owner[1]:Ahmed
	{
		owr[1].Name = "Ahmed";
		owr[1].Owner_ID = 2;
		{
			owr[1].Password[0] = { "1" };
			owr[1].Password[1] = { "2" };
			owr[1].Password[2] = { "3" };
			owr[1].Password[3] = { "4" };
			owr[1].Password[4] = { "5" };
			owr[1].Password[5] = { "6" };
			owr[1].Password[6] = { "7" };
			owr[1].Password[7] = { "8" };
		}
		owr[1].Phone = "01002016543";
		owr[1].Email = "az6661379@gmail.com";
	}
	//Fourth Installment[1] Apartment Info[3] for Owner[1]:Ahmed
	{
		owr[1].Info[3].Apartment_ID = 4;
		owr[1].Info[3].Price = 400000;
		owr[1].Info[3].View = "Side";
		owr[1].Info[3].Payment_Method = "Installment";
		owr[1].Info[3].gps.City = "Omraneya";
		owr[1].Info[3].gps.Street_Name = "Ahmed Fakhry";
		owr[1].Info[3].Inst[1].Apartment_ID = owr[1].Info[2].Apartment_ID;
		owr[1].Info[3].Inst[1].Down_Payment = 60000;
		owr[1].Info[3].Inst[1].Installment_Years = 10;
	}
	//Fifth Cash Apartment Info[4] for Owner[1]:Ahmed
	{
		owr[1].Info[4].Apartment_ID = 5;
		owr[1].Info[4].Payment_Method = "Cash";
		owr[1].Info[4].Price = 675000;
		owr[1].Info[4].View = "Garden";
		owr[1].Info[4].gps.City = "Nasr City";
		owr[1].Info[4].gps.Street_Name = "Hafez Ramadan";
	}
	//Sixth Installment[2] Apartment Info[5] for Owner[1]:Ahmed
	{
		owr[1].Info[5].Apartment_ID = 6;
		owr[1].Info[5].Price = 1500000;
		owr[1].Info[5].View = "Main Street";
		owr[1].Info[5].Payment_Method = "Installment";
		owr[1].Info[5].gps.City = "Omraneya";
		owr[1].Info[5].gps.Street_Name = "Hafez Ramadan";
		owr[1].Info[5].Inst[2].Apartment_ID = owr[1].Info[5].Apartment_ID;
		owr[1].Info[5].Inst[2].Down_Payment = 400000;
		owr[1].Info[5].Inst[2].Installment_Years = 7;
	}
}
void Add_Ads(ApartmentOwner owr[], int x)
{
	cout << "\nHow many advertisements do you want to advertise? You can advertise up to 4 advertisements.\n";
	int n; cin >> n;
	while (n <= 0 || n > 4)
	{
		cout << "Invalid input, please input a valid number: "; cin >> n;
	}
	int k = -1; // For installment array
	int l; //For pressing 1 or 2
	string o;
	for (int i = 0; i < n; i++)
	{
		//For typing 1st, 2nd, 3rd, 4th, etc....
		if (n > 1)
		{
			if (i == 0)
				o = "st";
			else if (i == 1)
				o = "nd";
			else if (i == 2)
				o = "rd";
			else
				o = "th";
		}
		//If more than one apartment, type 1st apartment, 2nd apartment and so on...
		if (n > 1)
		{
			cout << "\n" << i + 1 << o << " apartment:\n\n";
		}
		cout << "Enter the payment method: ";
		cout << "Press (1) for Cash\t\t\t\tPress (2) for Installment\n";
		cin >> l;
		while (l <= 0 || l > 2)
		{
			cout << "Invalid input, please try again\n";
			cin >> l;
		}
		if (l == 1)
		{
			cout << "Enter the price: "; cin >> owr[x].Info[6 + i].Price;
			owr[x].Info[6 + i].Payment_Method = "Cash";
		}
		else if (l == 2)
		{
			k = k + 1;
			cout << "Enter the price: "; cin >> owr[x].Info[4 + i].Price;
			owr[x].Info[6 + i].Payment_Method = "Installment";
			owr[x].Info[6 + i].Inst[2 + k].Apartment_ID = owr[x].Info[6 + i].Apartment_ID;
			cout << "Enter the down payment: "; cin >> owr[x].Info[6 + i].Inst[3 + k].Down_Payment;
			cout << "Enter the number of years: "; cin >> owr[x].Info[6 + i].Inst[3 + k].Installment_Years;
		}
		cout << "Enter the view: ";
		//Line 170 -> 175 to enter spaces in view, city & street names
		cin.ignore();
		getline(cin, owr[x].Info[6 + i].View);
		cout << "Enter the city: ";
		getline(cin, owr[x].Info[6 + i].gps.City);
		cout << "Enter the street name: ";
		getline(cin, owr[x].Info[6 + i].gps.Street_Name);
		owr[x].Info[6 + i].Apartment_ID = 7 + i;
		cout << "\nYour apartment ID is " << owr[x].Info[6 + i].Apartment_ID << endl;
	}
	//For thanks statment
	Thanks_Statment();
}
void Edit_Ads(ApartmentOwner owr[], int x)
{
	//ID of the apartment and the new data
	int ID, new_price, new_down_payment, new_years;
	int n;
	cout << "How many advertisements do you want to edit?\n"; cin >> n;
	//Old data
	int old_price, old_down_payment, old_years;
	string o;
	bool valid = 0;
	int j;
	bool again = 1;
	for (size_t i = 0; i < n; i++)
	{
		if (again)//For repeating the loop of editing apartments if the last apartment ID is correct
		{
			if (n > 1)
			{
				cout << "\n" << i + 1 << o << " apartment:\n\n";
			}
			cout << "Enter the apartment ID: "; cin >> ID;
		}
		//For typing 1st, 2nd, 3rd, 4th, etc....
		if (n > 1)
		{
			if (i == 0)
				o = "st";
			else if (i == 1)
				o = "nd";
			else if (i == 2)
				o = "rd";
			else
				o = "th";
		}
		for (j = 0; j < 10; j++)
		{
			if (owr[x].Info[j].Apartment_ID == ID)
			{	
				again = 1;//To repeat editing apartments if there are more than one selected
				valid = 1;//Means that the ID entered is a stored apartment ID
				cout << "What is the new price?\n"; cin >> new_price;
				old_price = owr[x].Info[j].Price;
				owr[x].Info[j].Price = new_price;
				if(owr[x].Info[j].Payment_Method == "Installment")
				{
					for (size_t k = 0; k < 10; k++)
					{
						if (owr[x].Info[j].Inst[k].Apartment_ID == ID)
						{
							cout << "What is the new down payment?\n"; cin >> new_down_payment;
							old_down_payment = owr[x].Info[j].Inst[k].Down_Payment;
							owr[x].Info[j].Inst[k].Down_Payment = new_down_payment;
							cout << "What is the new number of years?\n"; cin >> new_years;
							old_years = owr[x].Info[j].Inst[k].Installment_Years;
							owr[x].Info[j].Inst[k].Installment_Years = new_years;
							cout << "\nOld price: " << old_price << endl;
							cout << "New price: " << new_price << endl;
							cout << "\nOld down payment: " << old_down_payment << endl;
							cout << "New down payment: " << new_down_payment << endl;
							cout << "\nOld number of years: " << old_years << endl;
							cout << "New number of years: " << new_years << endl;
						}
					}
				}
				else if (owr[x].Info[j].Payment_Method == "Cash")
				{
					cout << "\nOld price: " << old_price << endl;
					cout << "New price: " << new_price << endl;
				}
				break;
			}
		}
		if (!valid)//If the ID isn't an existing apartment ID
		{
			again = 0;
			cout << "No apartment with such ID exists, please enter a valid apartment ID: ";
			cin >> ID;
			i = i - 1;//To repeat from the first
			j = 0;
		}
	}
	//for thanks statment
	Thanks_Statment();
}
void Search_Location(ApartmentOwner owr[])
{
	string City;
	string Street_Name;
	int l;
	int q;
	cout << "Press (1) to enter Street name\t\t\tPress (2) to enter City\n";
	cin >> l;
	while (l <= 0 || l > 2)
	{
		cout << "Invalid input, please try again: "; cin >> l;
	}
	if (l == 1)
	{
		q = 1;//Street name only
		cout << "Enter Street name: ";
		cin.ignore();
		getline(cin, Street_Name);
		cout << "Press (1) to enter City\t\t\tPress (2) to search by Street name only\n";
		cin >> l;
		while (l <= 0 || l > 2)
		{
			cout << "Invalid input, please try again: "; cin >> l;
		}
		if (l == 1)
		{
			q = 2;//Street name & City
			cout << "Enter City: ";
			cin.ignore();
			getline(cin, City);
		}
	}
	else if (l == 2)
	{
		q = 3;//City only
		cout << "Enter City: ";
		cin.ignore();
		getline(cin, City);
		cout << "Press (1) to enter Street name\t\t\tPress (2) to search by City only\n";
		cin >> l;
		while (l <= 0 || l > 2)
		{
			cout << "Invalid input, please try again: "; cin >> l;
		}
		if (l == 1)
		{
			q = 4;//Street name & City
			cout << "Enter Street name: ";
			cin.ignore();
			getline(cin, Street_Name);
		}
	}
	int c = 0;//For inputting dashs (-----------) if there are more than one apartment
	bool Found = 0;
	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 6; j++)
		{
			if (q == 1)
			{
				if (owr[i].Info[j].gps.Street_Name == Street_Name && owr[i].Info[j].gps.Street_Name != "")
				{
					Found = 1;
					c++;
					//For inputting dashs (-----------) if there are more than one apartment
					if (c >= 2)
						cout << "----------------------\n";
					if (c == 1)
						cout << "\nApartments offered in this location are:\n\n";
					cout << "Apartment number " << c << ":\n";
					cout << "Price: " << owr[i].Info[j].Price << endl;
					cout << "View: " << owr[i].Info[j].View << endl;
					cout << "Payment method: " << owr[i].Info[j].Payment_Method << endl;
					cout << "Owner name: " << owr[i].Name << endl;
					cout << "Owner phone: " << owr[i].Phone << endl;
				}
			}
			else if (q == 2 || q == 4)
			{
				if (owr[i].Info[j].gps.Street_Name == Street_Name && owr[i].Info[j].gps.City == City
					&& owr[i].Info[j].gps.Street_Name != "" && owr[i].Info[j].gps.City != "")
				{
					Found = 1;
					c++;
					if (c >= 2)
						cout << "----------------------\n";
					if (c == 1)
						cout << "\nApartments offered in this location are:\n\n";
					cout << "Apartment number " << c << ":\n";
					cout << "Price: " << owr[i].Info[j].Price << endl;
					cout << "View: " << owr[i].Info[j].View << endl;
					cout << "Payment method: " << owr[i].Info[j].Payment_Method << endl;
					cout << "Owner name: " << owr[i].Name << endl;
					cout << "Owner phone: " << owr[i].Phone << endl;
				}
			}
			else if (q == 3)
			{
				if (owr[i].Info[j].gps.City == City && owr[i].Info[j].gps.City != "")
				{
					Found = 1;
					c++;
					if (c >= 2)
						cout << "----------------------\n";
					if (c == 1)
						cout << "\nApartments offered in this location are:\n\n";
					cout << "Apartment number " << c << ":\n";
					cout << "Price: " << owr[i].Info[j].Price << endl;
					cout << "View: " << owr[i].Info[j].View << endl;
					cout << "Payment method: " << owr[i].Info[j].Payment_Method << endl;
					cout << "Owner name: " << owr[i].Name << endl;
					cout << "Owner phone: " << owr[i].Phone << endl;
				}
			}
		}
	}
	if (!Found)
	{
		cout << "\nSorry, no advertisements found.\n";
	}
	//For thanks statment
	Thanks_Statment();
}
void Search_Price(ApartmentOwner owr[])
{
	int From, To;
	cout << "\nEnter price range\n";
	cout << "From: "; cin >> From;
	cout << "To: "; cin >> To;
	cout << endl;
	int c = 0;//For inputting dashs (-----------) if there are more than one apartment
	bool Found = 0;
	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 6; j++)
		{
			if (owr[i].Info[j].Price >= From && owr[i].Info[j].Price <= To
				&& owr[i].Info[j].Price != 0)
			{
				Found = 1;
				c++;
				//For inputting dashs (-----------) if there are more than one apartment
				if (c >= 2)
					cout << "----------------------\n";
				if (c == 1)
					cout << "\nApartments offered in this location are:\n\n";
				cout << "Apartment number " << c << ":\n";
				cout << "Price: " << owr[i].Info[j].Price << endl;
				cout << "View: " << owr[i].Info[j].View << endl;
				cout << "Payment method: " << owr[i].Info[j].Payment_Method << endl;
				cout << "Owner name: " << owr[i].Name << endl;
				cout << "Owner phone: " << owr[i].Phone << endl;
			}
		}
	}
	if (!Found)
	{
		cout << "Sorry, no advertisements found.\n";
	}
	//For thanks statment
	Thanks_Statment();
}
void Search_Payment(ApartmentOwner owr[])
{
	cout << "\nPress (1) to search for \"Cash\"\t\t\t Press (2) to search for \"Installment\"\n";
	int n;
	cin >> n;
	while (n <= 0 || n > 2)
	{
		cout << "Invalid input, please try again\n"; cin >> n;
	}
	bool Found = 0;
	int c = 0;//For inputting dashs (-----------) if there are more than one apartment
	int k = -1;
	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 6; j++)
		{
			if (n == 1)
			{
				if (owr[i].Info[j].Payment_Method == "Cash" && owr[i].Info[j].Payment_Method != "")
				{
					Found = 1;
					c++;
					//For inputting dashs (-----------) if there are more than one apartment
					if (c >= 2)
						cout << "----------------------\n";
					if (c == 1)
						cout << "\nApartments offered in this location are:\n\n";
					cout << "Apartment number " << c << ":\n";
					cout << "Price: " << owr[i].Info[j].Price << endl;
					cout << "View: " << owr[i].Info[j].View << endl;
					cout << "Payment method: " << owr[i].Info[j].Payment_Method << endl;
					cout << "Owner name: " << owr[i].Name << endl;
					cout << "Owner phone: " << owr[i].Phone << endl;
				}
			}
			else if (n == 2)
			{
				if (owr[i].Info[j].Payment_Method == "Installment" && owr[i].Info[j].Payment_Method != "")
				{
					k++;
					Found = 1;
					c++;
					//For inputting dashs (-----------) if there are more than one apartment
					if (c >= 2)
						cout << "----------------------\n";
					if (c == 1)
						cout << "\nApartments offered in this location are:\n\n";
					cout << "Apartment number " << c << ":\n";
					cout << "Price: " << owr[i].Info[j].Price << endl;
					cout << "View: " << owr[i].Info[j].View << endl;
					cout << "Payment method: " << owr[i].Info[j].Payment_Method << endl;
					cout << "Down payment: " << owr[i].Info[j].Inst[k].Down_Payment << endl;
					cout << "Installment years: " << owr[i].Info[j].Inst[k].Installment_Years << endl;
					cout << "Owner name: " << owr[i].Name << endl;
					cout << "Owner phone: " << owr[i].Phone << endl;
				}
			}
		}
	}
	if (!Found)
	{
		cout << "\nSorry, no advertisements found.\n";
	}
	//For thanks statment
	Thanks_Statment();
}
void Search_View(ApartmentOwner owr[])
{
	string View;
	cout << "\nEnter the view: ";
	cin.ignore();
	getline(cin, View);
	bool Found = 0;
	int c = 0;//For inputting dashs (-----------) if there are more than one apartment
	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 6; j++)
		{
			if (owr[i].Info[j].View == View && owr[i].Info[j].View != "")
			{
				Found = 1;
				c++;
				//For inputting dashs (-----------) if there are more than one apartment
				if (c >= 2)
					cout << "----------------------\n";
				if (c == 1)
					cout << "\nApartments offered in this location are:\n\n";
				cout << "Apartment number " << c << ":\n";
				cout << "Price: " << owr[i].Info[j].Price << endl;
				cout << "View: " << owr[i].Info[j].View << endl;
				cout << "Payment method: " << owr[i].Info[j].Payment_Method << endl;
				cout << "Owner name: " << owr[i].Name << endl;
				cout << "Owner phone: " << owr[i].Phone << endl;
			}
		}
	}
	if (!Found)
	{
		cout << "\nSorry, no advertisements found.\n";
	}
	//For thanks statment
	Thanks_Statment();
}
void SignUp(ApartmentOwner owr[], int x)
{
	cout << "\nPlease, enter your name: "; cin >> owr[x].Name;
	while (owr[x].Name == owr[0].Name || owr[x].Name == owr[1].Name)
	{
		cout << "This name is already used, please enter another name: ";
		cin >> owr[x].Name;
	}
	cout << "Enter a password which is not less than 8 characters: ";
	//Password entering
	{
		bool Done = 0;
		int o = 0;//Counter: To count if the password is >= 8 characters or not
		string pass;
		int i = -1;
		while (!Done)
		{
			i = i + 1;
			pass = _getch();//Works as cin
			owr[x].Password[i] = pass;
			while (pass != "\r")
			{
				o++;//To count how many characters are entered
				cout << "*";
				i = i + 1;
				pass = _getch();
				owr[x].Password[i] = pass;
			}
			if (o < 8)
			{
				cout << "\nYour password seems weak, please enter an 8 characters password: ";
				o = 0;
				i = -1;
				//Those 2 lines to repeat the operation of entering the password again
			}
			else
			{
				Done = 1;//To exit the while loop
			}
		}
	}
	cout << "\nEnter your email address: "; cin >> owr[x].Email;
	//Line 609 -> 615
	//To check if @ is in the email, if not the user must re-enter the email
	int f;
	f = owr[x].Email.find("@");
	while(f == -1)
	{
		cout << "Please input a valid email address: "; cin >> owr[x].Email;
		f = owr[x].Email.find("@");
	}
	while (owr[x].Email == owr[0].Email || owr[x].Email == owr[1].Email)
	{
		cout << "Email address already registered, please enter another email: "; cin >> owr[x].Email;
	}
	cout << "Enter your phone number: "; cin >> owr[x].Phone;
	while (owr[x].Phone == owr[0].Phone || owr[x].Phone == owr[1].Phone)
	{
		cout << "Phone number already registered, please enter another number: "; cin >> owr[x].Phone;
	}
	owr[x].Owner_ID = 3;
	cout << "\nYour owner ID is " << owr[x].Owner_ID << endl;
	Add_Ads(owr, x);
}
void Login()
{
	string Name;
	string ch;
	string x[20];
	int attempts = 0;
	bool verified = 0;
	int z;
	cout << "\nName: "; cin >> Name;
	//If the entered name doesn't exist in the declaration
	while (Name != owr[0].Name && Name != owr[1].Name)
	{
		cout << "There is no account with this name, please rewrite the name again or press (2) to register.\n";
		cin >> Name;
		if (Name == "2")
		{
			SignUp(owr, 2);
			exit(0);//To exit the program after registeration and adding advertisements.
		}
	}
	if (Name == owr[0].Name || Name == owr[1].Name) {
		if (Name == owr[0].Name)
			z = 0;
		else
			z = 1;
		do
		{
			attempts++;
			int c = 0;//Counter for: if the entered character equals to a character in the same place of the saved password in declaration
			int i = -1;
			int m = 0;//Counter for: counting the number of characters in the saved password in the declaration
			int a = 0;//Counter for: counting the number of the entered characters
			cout << "Password: ";
			ch = _getch();//Works like cin, but _getch() enters character by character
			a++;
			i = i + 1;
			x[i] = ch;
			//If the entered character equals to the character in the same place of the saved password in declaration
			if (x[i] == owr[z].Password[i]) {
				c++;
			}
			while (ch != "\r")//While not pressed on the enter (not finished typing the password)
			{
				i = i + 1;
				cout << "*";//To make the password entered in asterisks ( ******** )
				ch = _getch();
				a++;
				x[i] = ch;
				if (x[i] == owr[z].Password[i]) {
					c++;
				}
			}
			for (size_t i = 0; i < 20; i++)
			{
				if (owr[z].Password[i] == "")//To avoid empty arrays in the counter
					break;
				m++;
			}
			//If c (number of correct entered characters) = a - 1 (number of entered characters) then login successfully
			//a - 1 because pressing on 'enter' increases the (a) counter by 1
			/*
			* For example: the saved password is 12345678
			* If i entered 12345678999
			* The number of correct characters and their order equal to the saved password, but the whole entered characters not equal to the saved password.
			*/
			if (c == a - 1 && c == m)
			{
				verified = 1;
				cout << "\nLogin successfully!" << endl;
				break;
			}
			else
			{
				if (attempts == 1)
					cout << "\nWrong password.\nYou have 2 tries left\n";
				else if (attempts == 2)
					cout << "\nWrong password.\nYou have 1 try left\n";
				else
					break;
			}
		} while (attempts <= 3);
		//If not logged in successfully
		if (!verified) {
			cout << "\nLogin failed, please try again later." << endl;
			//Thanks statment
			{
				for (size_t i = 0; i < 120; i++)
				{
					cout << "*";
				}
				cout << "\n\t\t\t\t    Thank you for choosing AqarMap!\n";
				for (size_t i = 0; i < 120; i++)
				{
					cout << "*";
				}
				cout << endl;
			}
		}
		else //If logged in successfully
		{
			cout << "\nPress (1) to add advertisements\t\t\t\t\t\t\tPress (2) to edit advertisements\n\n";
			int s; cin >> s;
			while (s <= 0 || s > 2)
			{
				cout << "Invalid input, please try again:\n";
				cin >> s;
			}
			if (s == 1)
				Add_Ads(owr, z);
			else if (s == 2)
				Edit_Ads(owr, z);
		}
	}
	
}
int main() 
{
	system("color 7d");
	Decleration();
	cout << "\n\n\t\t\t\t       ----------------------";
	cout << "\n\t\t\t\t       | Welcome to AqarMap |\n\t\t\t\t       ----------------------\n\n";
	cout << "Press (1) for Owner\t\t\t\t\t\t\t\tPress (2) for Client\n\n";
	int n;
	cin >> n;
	while (n <= 0 || n > 2)
	{
		cout << "Invalid input, please try again\n";
		cin >> n;
	}
	if (n == 1)
	{
		cout << "\nPress (1) to Login\t\t\t\t\t\t\t\tPress (2) to Sign Up\n\n";
		cin >> n;
		while (n <= 0 || n > 2)
		{
			cout << "Invalid input, please try again\n"; cin >> n;
		}
		if (n == 1)
		{
			Login();
		}
		else if (n == 2)
		{
			SignUp(owr, 2);
		}
	}
	else if (n == 2)
	{
		cout << "\nPress (1) to search by location\nPress (2) to search with certain price range\nPress (3) to search by payment method\nPress (4) to search by view\n";
		int n;
		cin >> n;
		while (n <= 0 || n > 4)
		{
			cout << "Invalid input, please try again\n"; cin >> n;
		}
		switch (n)
		{
		case 1: Search_Location(owr);
			break;
		case 2: Search_Price(owr);
			break;
		case 3: Search_Payment(owr);
			break;
		case 4: Search_View(owr);
			break;
		}
	}
	return 0;
}