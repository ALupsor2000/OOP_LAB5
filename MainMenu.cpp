#include <iostream>
#include "MainMenu.h"

using namespace std;

MainMenu::MainMenu()
{
	this->mainRepo = Repo();
	this->mainWatch = Watchlist();
}

void MainMenu::startMainMenu()
{
	bool run = true;
	while (run)
	{
		int mode;
		string password = "1234", passw;
		cout << "1.Administrator mode   2.User mode   3.Exit" << endl;
		cout << "Choose your mode: ";
		cin >> mode;
		if (mode == 1)
		{
			int passc = 0;
			cout << "Password is: 1234" << endl;
			cout << "Please enter password to continue: ";
			cin >> passw;
			while ((passw != password) && (passc < 3))
			{
				cout << "Incorrect password! Please retype: ";
				cin >> passw;
				passc++;
			}
			if (passc > 3)
			{
				break;
			}
			int adminMode = 0;
			while (adminMode != 5)
			{
				cout << "Welcome to admin mode!  Now choose what you want to do" << endl;
				cout << "This are your options: " << endl;
				cout << "1. Add new movie" << endl;
				cout << "2. Delete movie" << endl;
				cout << "3. Update movie" << endl;
				cout << "4. Show movie list" << endl;
				cout << "5. Exit" << endl;
				cin >> adminMode;
				if (adminMode == 1)
				{
					string title;
					cout << "Type title: ";
					cin >> title;
					string genre;
					cout << "Type genre: ";
					cin >> genre;
					int year;
					cout << "Type year: ";
					cin >> year;
					int likes;
					cout << "Type likes: ";
					cin >> likes;
					string link;
					cout << "Type trailer link: ";
					cin >> link;
					mainRepo.store(title, genre, year, likes, link);
				}
				else if (adminMode == 2)
				{
					string title;
					cout << "Type title of the movie you want to delete: ";
					cin >> title;
					mainRepo.remove(title);
				}
				else if (adminMode == 3)
				{
					string title;
					cout << "Title of movie you want to update: ";
					cin >> title;
					int adminModeEdit;
					cout << "What do you want to edit?" << endl;
					cout << "1. Year" << endl;
					cout << "2. Genre" << endl;
					cout << "3. Trailer Link" << endl;
					cin >> adminModeEdit;
					if (adminModeEdit == 1)
					{
						int year;
						cout << "New year: ";
						cin >> year;
						mainRepo.updateYear(title, year);
					}
					else if (adminModeEdit == 2)
					{
						string genre;
						cout << "New genre: ";
						cin >> genre;
						mainRepo.updateGenre(title, genre);
					}
					else if (adminModeEdit == 3)
					{
						string link;
						cout << "New link: "; 
						cin >> link;
						mainRepo.updateTrailer(title, link);
					}
				}
				else if (adminMode == 4)
				{
					mainRepo.getRepo();
				}
				else if (adminMode == 5)
				{
					break;
				}
				else { cout << "Invalid mode!"; };
			}
		}
		else if (mode == 2)
		{
			int userMode = 0;
			while (userMode != 4)
			{
				cout << "Welcome to user mode!  Now choose what you want to do" << endl;
				cout << "This are your options: " << endl;
				cout << "1. Watch movie after genre" << endl;
				cout << "2. Delete from watchlist" << endl;
				cout << "3. Show watchlist" << endl;
				cout << "4. Exit" << endl;
				cin >> userMode;
				if (userMode == 1)
				{
					string genre;
					cout << "Type genre: ";
					mainRepo.search_to_genre(genre);
				}
				else if (userMode == 2)
				{
					int like;
					string title;
					cout << "Type title of the movie you want to delete: ";
					cin >> title;
					cout << "Liked this movie?     1.YES     2.NO" << endl;
					cout << "Choose your option: ";
					cin >> like;
					if (like == 1)
					{
						mainRepo.updateLikes(title);
					}
					mainWatch.remove(title);
				}
				else if (userMode == 3)
				{
					mainWatch.getList();
				}
				else if (userMode == 4)
				{
					break;
				}
				else { cout << "Invalid mode!"; };
			}

		}
		else if (mode == 3)
		{
			run = false;
		}
		else
		{
			cout << "Invalid choise !!! Please retype the mode!" << endl;
		}
	}
}

int main()
{
	MainMenu m = MainMenu();

	m.startMainMenu();
	return 0;
}