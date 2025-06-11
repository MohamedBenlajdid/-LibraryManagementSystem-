#pragma once
#include <iostream>
#include <iomanip>
#include "clsBook.h"
#include "clsScreen.h"
#include "clsInputValidate.h"
#include "clsListBooks.h"
#include "clsFindBook.h"

class clsMemberLoginScreen : protected clsScreen
{
private:
	enum enMemberMenueOptions {
		eListBooks = 1 , eFindBook = 2 , eBorrowBook = 3 , eReturnBook = 4 ,
		eBuyBook = 5 , eMainMenue = 6
	};
	static short _ReadMemberMenueChoice()
	{
		short Choice = 0;
		cout << "\n" << setw(37) << left << "" << "\tPlease Enter a Choice between[1-6] : ";
		Choice = clsInputValidate::ReadShortNumberBetween(1, 6, "Please Enter a Choice between[1 - 6] : ");
		return Choice;
	}
	static void _ShowListBooksScreen()
	{
		/*cout << "\nList Books Will Be Here ...";*/
		clsListBooks::ShowListBooksScreen();
	}
	static void _ShowFindBookScreen()
	{
		/*cout << "\nFind Book Will Be Here ...";*/
		clsFindBook::ShowFindBookScreen();
	}
	static void _ShowBorrowBookScreen()
	{
		cout << "\nBorrow Book Will Be Here ...";
	}
	static void _ShowReturnBookScreen()
	{
		cout << "\nReturn Book Will Be Here ...";
	}
	static void _ShowBuyBookScreen()
	{
		cout << "\nBuy Book Will Be Here ...";
	}
	static void _ShowMainMenueScreen()
	{
		cout << "\nMain Menue Will Be Here ...";
	}
	static void _GoBackToMemeberMenue()
	{
		cout << "\nPress Any Key To Go Back To Member Menue ...";
		system("pause>0");
		ShowMemberLoginScreen();
	}
	static void _PerformeMemberMenueOption(enMemberMenueOptions Option)
	{
		switch (Option)
		{
		case enMemberMenueOptions::eListBooks:
			system("cls");
			_ShowListBooksScreen();
			_GoBackToMemeberMenue();
			break;
		case enMemberMenueOptions::eFindBook:
			system("cls");
			_ShowFindBookScreen();
			_GoBackToMemeberMenue();
			break;
		case enMemberMenueOptions::eBorrowBook:
			system("cls");
			_ShowBorrowBookScreen();
			_GoBackToMemeberMenue();
			break;
		case enMemberMenueOptions::eReturnBook:
			system("cls");
			_ShowReturnBookScreen();
			_GoBackToMemeberMenue();
			break;
		case enMemberMenueOptions::eBuyBook:
			system("cls");
			_ShowBuyBookScreen();
			_GoBackToMemeberMenue();
			break;
		case enMemberMenueOptions::eMainMenue:
			system("cls");
			_ShowMainMenueScreen();
			break;
		}
	}
public:
	static void ShowMemberLoginScreen()
	{
		system("cls");
		_DrawHeaderScreen("\tMember Login Screen");
		cout << "\n" << setw(37) << left << "" << "==========================================\n";
		cout << "\n" << setw(37) << left << "" << "\t\tMember Menue\n";
		cout << "\n" << setw(37) << left << "" << "==========================================\n";
		cout << "\n" << setw(37) << left << "" << "\t[1] List Books .";
		cout << "\n" << setw(37) << left << "" << "\t[2] Find Book.";
		cout << "\n" << setw(37) << left << "" << "\t[3] Borrow Book .";
		cout << "\n" << setw(37) << left << "" << "\t[4] Return Book .";
		cout << "\n" << setw(37) << left << "" << "\t[5] Buy Book .";
		cout << "\n" << setw(37) << left << "" << "\t[6] Main Menue .";
		cout << "\n" << setw(37) << left << "" << "==========================================\n";
		_PerformeMemberMenueOption((enMemberMenueOptions)_ReadMemberMenueChoice());
	}
};

