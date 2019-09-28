
// Name: Dustin Chavez
// This program calculates and displays business expenses.

#include <iostream>
#include <iomanip>
#include <sstream>
int main()
{
  std::string location;
  std::string days;
  double meals;
  double hotel;
  double total;
  std::stringstream sshotel, ssmeals, sstotal;


  //finds info about trip
  std::cout << "where did you go on a business trip? ";
  getline(std::cin,location);
  std::cout << "How many days will the business trip be? ";
  std::cin >> days;
  std::cout << "How much was the cost of the hotel? ";
  std::cin >> hotel;
  std::cout << "how much was the meals? ";
  std::cin >> meals;
  std::cout << std::setprecision(2) << std::fixed;
  total = hotel + meals;
  // adds dollar sign to hotel meal and total
  sshotel << std::setprecision(2) << std::fixed << '$' << hotel;
  ssmeals <<std::setprecision(2) << std::fixed << '$' << meals;
  sstotal << std::setprecision(2) << std::fixed << '$' <<total;


  //creates chart for the business trip
  std::cout << std::setw(20) << "location" << std::setw(10) << "days" << std::setw(10) << "hotel" << std::setw(10) << "meals" << std::setw(10) << "total" << std::endl;
  std::cout <<std::setw(20) << location.substr(0,18) << std::setw(10) << days << std::setw(10) << sshotel.str() << std::setw(10) << ssmeals.str() << std::setw(10) << sstotal.str() << std::endl;
}
