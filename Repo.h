#pragma once

#include "Movie.h"

class Repo
{

private:

	vector<Movie> repo;

public:

	Repo();

	void store(string title, string genre, int year, int likes, string trailer);

	void remove(string title);

	void updateLikes(string title);

	void updateTrailer(string title, string trailer);

	void updateGenre(string title, string genre);

	void updateYear(string title, int year);

	bool search_to_genre(string genre);

	void getRepo();
};