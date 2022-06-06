#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
using namespace std;


bool IsLoggedIn() {
	//Varibles 
	string username, un, pw, password;

	cout << "Ingresar nombre de usuario: "; cin >> username;
	cout << "Ingresar Contrasenia: "; cin >> password;

	ifstream read("C:\\" + username + ".txt");
	getline(read, un);
	getline(read, pw);

	if (un == username && pw == password)
	{
		return true;
	}
	else {
		return false;
	}
}


bool IsLoggedIf() 
{
	//Varibles 
	string username, un, pw, password;

	cout << "Select a username: "; cin >> username;
	cout << "Select a password: "; cin >> password;

	ifstream read("C:\\" + username + ".txt");
	getline(read, un);
	getline(read, pw);

	if (un == username && pw == password)
	{
		return true;
	}
	else {
		return false;
	}


}


void spanish() {
	cout << "Bienvenido a Programa Multiple ";
	//Variables
	int a = 1;

	for (int i = 0; i <= 2; i++) {
		cout << "(Valor 1,2,3): "<< endl;
		cout << "1: Hora" << endl;
		cout << "2: Calculadora" << endl;
		cout << "3: Salir" << endl;
		cout << "Valor: ";	
		cin >> a;

		if (a == 1) {
			//Variables
			int seg = 0;
			int min = 0;
			int hors = 0;
			bool ciclo = true;
			int g;

			for (int i = 0; i <= 5; i++) {
				cout << "1: Ajustar Hora" << endl;
				cout << "2: Ver Hora" << endl;
				cout << "3: Salir" << endl;
				cout << "Valor: ";
				cin >> g;

				if (g == 1) {
					cout << "Valor Hora: ";
					cin >> hors;
					cout << "Valor minutos: ";
					cin >> min;
					cout << "Valor segundos: ";
					cin >> seg;
				}
				else if (g == 2) {
					while (ciclo = true) {
						system("cls");
						cout << "Hora: " << hors << ":" << min << ":" << seg << " hs" << endl;
						Sleep(1000);
						seg++;
						if (seg == 60) {
							min++;
							seg = 0;
						}
						if (min == 60) {
							hors++;
							min = 0;
						}
						if (hors == 13) {
							hors = 1;
							seg = 0;
							min = 0;
						}

					}
				}

				else if (g == 3) {
					exit(0);
					break;
				}
				else {
					cout << "Fatal Error. Saliendo";
					exit(0);
					break;
				}

			}
		}

		else if (a == 2) {
		
			//Variables
			int b, c;
			char sim;
			float res;
			cout << "Calculadora Simple" << endl;
			cout << "Valor A: ";
			cin >> b;
			cout << "Simbolo: ";
			cin >> sim;
			cout << "Valor B: ";
			cin >> c;

			if (sim == '+') {
				res = b + c;
				cout << "Tu Resultado es: " << res << endl;
			}
			else if (sim == '-') {
				res = b - c;
				cout << "Tu Resultado es: " << res << endl;
			}
			else if (sim == '*') {
				res = b * c;
				cout << "Tu Resultado es: " << res << endl;
			}
			else if (sim == '/') {
				res = b / c;
				cout << "Tu Resultado es: " << res << endl;
			}



			else {
				cout << "Tu Cuenta es erronea." << endl;
				cout << "Intentelo nuevamente." << endl;
			}

		}

		else if(a == 3 )
		{
			exit(0);
			break;

		}

		else {
			cout << "Error digito" << endl;
		}


	}

}

void ingles() {
	cout << "Welcome to Multiple Program ";
	//Variables
	int a = 1;

	for (int i = 0; i <= 2; i++) {
		cout << "(Value 1,2,3,4): " << endl;
		cout << "1- login and register" << endl;
		cout << "2- Time" << endl;
		cout << "3- Calculator" << endl;
		cout << "4- Exit" << endl;
		cout << "Value: ";
		cin >> a;

		if (a == 1) 
		{
		

			int choice;
			cout << "1: Register\n2: Login\n Value: "; cin >> choice;
			if (choice == 1)
			{
				string username, password;

				cout << "Select a username: "; cin >> username;
				cout << "Select a password: "; cin >> password;

				ofstream file;
				file.open("C:\\" + username + ".txt");
				file << username << endl << password;
				file.close();


			}
			else if (choice == 2)
			{
				bool status = IsLoggedIn();

				if (!status)
				{
					cout << "False Login!" << endl;
					system("PAUSE");
					exit(0);
				}
				else
				{
					cout << "Succesfully logged in!" << endl;
					system("PAUSE");
					exit(1);
				}
			}
		}

		else if (a == 2) {
			//Variables
			int seg = 0;
			int min = 0;
			int hors = 0;
			bool ciclo = true;
			int g;

			for (int i = 0; i <= 5; i++) {
				cout << "1: Adjust time" << endl;
				cout << "2: See time" << endl;
				cout << "3: Exit" << endl;
				cout << "Value: ";
				cin >> g;

				if (g == 1) {
					cout << "Hour value: ";
					cin >> hors;
					cout << "Minute value: ";
					cin >> min;
					cout << "Seconds value: ";
					cin >> seg;
				}
				else if (g == 2) {
					while (ciclo = true) {
						system("cls");
						cout << "Time: " << hors << ":" << min << ":" << seg << " hs" << endl;
						Sleep(1000);
						seg++;
						if (seg == 60) {
							min++;
							seg = 0;
						}
						if (min == 60) {
							hors++;
							min = 0;
						}
						if (hors == 13) {
							hors = 1;
							seg = 0;
							min = 0;
						}

					}
				}

				else if (g == 3) {
					exit(0);
					break;
				}
				else {
					cout << "Error. exit";
					exit(0);
					break;
				}

			}


		}
		
		else if (a == 3)
		{
			//Variables
			int b, c;
			char sim;
			float res;
			cout << "Calculator easy" << endl;
			cout << "Value A: ";
			cin >> b;
			cout << "Symbol: ";
			cin >> sim;
			cout << "Value B: ";
			cin >> c;

			if (sim == '+') {
				res = b + c;
				cout << "Your result is: " << res << endl;
			}
			else if (sim == '-') {
				res = b - c;
				cout << "Your result is: " << res << endl;
			}
			else if (sim == '*') {
				res = b * c;
				cout << "Your result is: " << res << endl;
			}
			else if (sim == '/') {
				res = b / c;
				cout << "Your result is: " << res << endl;
			}



			else {
				cout << "Your account is wrong." << endl;
				cout << "Try again." << endl;
			}

		}

		else if (a == 4) {
			exit(0);
			break;
		}

		else {
			cout << "Digit error" << endl;
		}
	}
}


int main() {
	
	int span = 0;

	cout << " Welcome! (Value 1,2)" << endl;
	cout << "1: Spanish" << endl;
	cout << "2: English" << endl;
	cout << "Value: ";
	cin >> span;

	if (span == 1) {

		int choice;
		cout << "1: Registrarse\n2: Inicio Session\nValor: "; cin >> choice;
		if (choice == 1)
		{
			string username, password;

			cout << "Nombre de Usuario: "; cin >> username;
			cout << "Contrasenia: "; cin >> password;

			ofstream file;
			file.open("C:\\" + username + ".txt");
			file << username << endl << password;
			file.close();
			
			main();

		}
		else if (choice == 2)
		{
			bool status = IsLoggedIn();

			if (!status)
			{
				cout << "Falso Inicio session!" << endl;
				system("PAUSE");
				return 0;
			}
			else
			{
				cout << "Incio de Session Correcto!" << endl;
				spanish();
			}
		}
	}

	else if (span == 2) {
		int choice;
		cout << "1: Registrarse\n2: Inicio Session\nValor: "; cin >> choice;
		if (choice == 1)
		{
			string username, password;

			cout << "Nombre de Usuario: "; cin >> username;
			cout << "Contrasenia: "; cin >> password;

			ofstream file;
			file.open("C:\\" + username + ".txt");
			file << username << endl << password;
			file.close();

			main();

		}
		else if (choice == 2)
		{
			bool status = IsLoggedIn();

			if (!status)
			{
				cout << "Falso Inicio session!" << endl;
				system("PAUSE");
				return 0;
			}
			else
			{
				cout << "Incio de Session Correcto!" << endl;
				ingles();
			}
		}
		
		
		
	}
	else {
		cout << "Error en Lenguaje/Language error" << endl;
	}

	return 0;
}


