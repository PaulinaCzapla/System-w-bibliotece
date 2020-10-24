﻿
#include <iostream>
#include "Menu.h"
//#include "List.h"
//
//#include "Book.h"
//#include "CD.h"
//
//#include "Movie.h"
#include "Resource.h"
#include "Node.h"
//#include "Node.cpp"
//#include "List.cpp"
//
//#include "File.h"
//#include "Library.h"
//#include "FileBorrowed.h"
//#include "FileLibrary.h"
//#include "FilePersonalData.h"
#include"Person.h"
std::ostream& operator<< (std::ostream& output, Resource const& data)
{
	Text text;
	std::cout << " " << data.ID << " " << data.title << " " << data.authors_name << " rok wydania:" << data.release_date << " ";

	if (data.is_available)
	{
		text.display_green(" Dostepny. ");
		std::cout << std::endl << std::endl;
	}

	else
	{
		text.display_red(" Niedostepny. ");
		std::cout << std::endl << std::endl;
	}
	return output;
}

std::ostream& operator<< (std::ostream& output, Date const& date)
{
	if (date.day == 0 || date.month == 0)
		std::cout << " " << date.year;
	else if (date.day < 10 && date.month < 10)
		std::cout << " 0" << date.day << ".0" << date.month << "." << date.year;
	else if (date.day < 10)
		std::cout << " 0" << date.day << "." << date.month << "." << date.year;
	else if (date.month < 10)
		std::cout << " " << date.day << ".0" << date.month << "." << date.year;

	return output;
}

std::ostream& operator<< (std::ostream& output, Person const& data)
{
	Text text;
	std::cout << " " <<data.ID << " " << data.name << " " << data.birth_date << " " << data.address << " " << data.phone_number;

	//if (this->books)
	//{
	//	std::cout << std::endl << std::endl;
	//	std::cout << " Wypozyczone ksiazki: " << std::endl;
	//	books->display_list();
	//}
	//if (this->books)
	//{
	//	std::cout << std::endl << std::endl;
	//	std::cout << " Wypozyczone plyty: " << std::endl;
	//	cds->display_list();
	//}
	//if (this->books)
	//{
	//	std::cout << std::endl << std::endl;
	//	std::cout << " Wypozyczone filmy: " << std::endl;
	//	movies->display_list();
	//}
	return output;
}

template <typename T>
bool operator==(T& o, std::string id)
{
	return false;
}
//bool operator ==(const Person& person, const std::string& id)
//{
//	if (id.compare(person.ID) == 0)
//		return true;
//	else
//		return false;
//}

//bool operator ==(const Person& person, const Person& person2)
//{
//	if (person.ID == person.ID)
//		return true;
//	else
//		return false;
//}

int main()
{
//	FileLibrary file_library1(FILENAME_MAIN_LIBRARY);
//
//	Menu menu;
//
//
//
//
//
//
//	List<Movie> movies; //Book(std::string, std::string, Date*,std::string = "brak", bool = true);
//	Date date(10, 10, 2000);
//	Movie movie(movies.size(), " ktos df ", date, " cos tam", false);
//	Node<Movie>* node = new Node<Movie>(movie);
//	movies.push_front(node);
//	movies.display_list();
//
//	Library biblioteka;
//
//
//	Date dat;
//	List<Book> books;
//	List<CD> cds;
//	std::cout << dat;
}
