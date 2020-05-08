#pragma once

#include "Repo.h"
#include "Watchlist.h"

class MainMenu
{
	friend class Repo;
	friend class Watchlist;

private:
	Repo mainRepo;
	Watchlist mainWatch;

public:

	MainMenu();

	void startMainMenu();
};