#pragma once
#include <iostream>
#include <iomanip>
#include "clsInputValidate.h"
#include "clsScreen.h"
#include "clsAddNewBook.h"
#include "clsDeleteBook.h"
#include "clsUpdateBook.h"
#include "clsFindBook.h"
#include "clsListBooks.h"
using namespace std;

class clsAdminLoginScreen : clsScreen
{
private:
	enum enAdminMenueOptions {
		eAddNewBook = 1 ,eDeleteBook = 2 , eUpdateBook = 3 , eFindBook = 4 , 
		eListBooks = 5 , eMainMenue = 6
	};
	static short _ReadAdminMenueOption()
	{
		short Choice = 0;
		cout << "\n" << setw(37) << left << "" << "\tPlease Enter a Choice between[1-6] : ";
		Choice = clsInputValidate::ReadShortNumberBetween(1, 6, "Please Enter a Choice between[1 - 6] : ");
		return Choice;

	}
	static void _ShowAddNewBookScreen()
	{
		/*cout << "\nAdd New Book Will Be Here.";*/
		clsAddNewBook::ShowAddNewBookScreen();
	}
	static void _ShowDeleteBookScreen()
	{
		/*cout << "\nDelete Book Will Be Here.";*/
		clsDeleteBook::ShowDeleteBookScreen();
	}
	static void _ShowUpdateBookScreen()
	{
		/*cout << "\nUpdate Book Will Be Here.";*/
		clsUpdateBook::ShowUpdateBookScreen();
	}
	static void _ShowFindBookScreen()
	{
		/*cout << "\nFind Book Will Be Here .";*/
		clsFindBook::ShowFindBookScreen();
	}
	static void _ShowListBooksScreen()
	{
		/*cout << "\nList Books Will Be Here ...";*/
		clsListBooks::ShowListBooksScreen();
	}
	static void _ShowMainMenueScreen()
	{
		cout << "\nMain Menue Screen Will Be Here .";
	}
	static void _GoBackToAdminMenue()
	{
		cout << "\nPress Any Key To Go Back To Admin Menue.";
		system("pause>0");
		ShowAdminLoginScreen();
	}
	static void _PerformeAdminMenueChoice(enAdminMenueOptions Option)
	{
		switch (Option)
		{
		case enAdminMenueOptions::eAddNewBook:
			system("cls");
			_ShowAddNewBookScreen();
			_GoBackToAdminMenue();
			break;
		case enAdminMenueOptions::eDeleteBook:
			system("cls");
			_ShowDeleteBookScreen();
			_GoBackToAdminMenue();
			break;
		case enAdminMenueOptions::eUpdateBook:
			system("cls");
			_ShowUpdateBookScreen();
			_GoBackToAdminMenue();
			break;
		case enAdminMenueOptions::eFindBook:
			system("cls");
			_ShowFindBookScreen();
			_GoBackToAdminMenue();
			break;
		case enAdminMenueOptions::eListBooks:
			system("cls");
			_ShowListBooksScreen();
			_GoBackToAdminMenue();
			break;
		case enAdminMenueOptions::eMainMenue:
			system("cls");
			_ShowMainMenueScreen();
			break;
		}
	}

public:
	static void ShowAdminLoginScreen()
	{
		system("cls");
		_DrawHeaderScreen("\tAdmin Login Screen");
		cout << "\n" << setw(37) << left << "" << "==========================================\n";
		cout << "\n" << setw(37) << left << "" << "\t\tAdmin Menue\n";
		cout << "\n" << setw(37) << left << "" << "==========================================\n";
		cout << "\n" << setw(37) << left << "" << "\t[1] Add New Book .";
		cout << "\n" << setw(37) << left << "" << "\t[2] Delete Book.";
		cout << "\n" << setw(37) << left << "" << "\t[3] Update Book .";
		cout << "\n" << setw(37) << left << "" << "\t[4] Find Book .";
		cout << "\n" << setw(37) << left << "" << "\t[5] List Books .";
		cout << "\n" << setw(37) << left << "" << "\t[6] Main Menue .";
		cout << "\n" << setw(37) << left << "" << "==========================================\n";
		_PerformeAdminMenueChoice((enAdminMenueOptions)_ReadAdminMenueOption());
	}
};

