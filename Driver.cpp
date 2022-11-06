// Ryad Alla (40227731)

#include "dataManager.h"

int main()
{
	//Creating dates
	Date* d1 = new Date(1, 2, 2020);
	Date* d2 = new Date(23, 6, 1998);
	Date* d3 = new Date(8, 11, 2001);
	Date* d4 = new Date(29, 9, 2018);
	Date* d5 = new Date(18, 5, 1999);
	

	//Creating new cars 
	NewCar* newcar1 = new NewCar( 112233, 2021, "blue", 4, 43000);
	NewCar* newcar2 = new NewCar( 223344, 2021, "grey", 5, 120000);
	NewCar* newcar3 = new NewCar( 444555, 2021, "black", 4, 34000);
	NewCar* newcar4 = new NewCar(998811, 2021, "green",2, 50000);

	
	//Creating used cars 
	UsedCar* usedcar1 = new UsedCar(334400, 2001, "blue", 4, 4000, "Mercedes", 101293);
	UsedCar* usedcar2 = new UsedCar(111777, 2003, "grey", 4, 5000, "Infinity", 90394);
	UsedCar* usedcar3 = new UsedCar(668903, 2004, "black", 4, 6000,"Lexus", 79287);
	UsedCar* usedcar4 = new UsedCar(123334, 2005, "white", 4, 7000,"BMW", 78323);
	
	

	//creating clients 
	Client* client1 = new Client("John", d2, "H2K90Q", "sedan");
	Client* client2 = new Client("George", d3, "K9UW3E", "4x4");
	Client* client3 = new Client("Mohammed", d5, "M8NSD2", "coupe");
	Client* client4 = new Client("Peter", d5, "O09UBH", "sedan");

	cout << "_________________________________________" << endl;
	//creating sales person
	SalesPerson* sales1 = new SalesPerson("Kim",d2,"2018", 60000);
	SalesPerson* sales2 = new SalesPerson("Taylor", d4,"2019", 90000);
	
	

	//creating purchase contracts
	PurchaseContract* purchase1 = new PurchaseContract(client1, sales1, usedcar1, d1);
	PurchaseContract* purchase2 = new PurchaseContract(client2, sales2,  usedcar4, d1);
	PurchaseContract* purchase3 = new PurchaseContract(client3, sales2, newcar1, d4);
	PurchaseContract* purchase4 = new PurchaseContract(client4, sales1, newcar4, d4);
	
	

	dataManager* manager = new dataManager();
	//inserting new and used cars 
	if (manager->insertNewCar(newcar1))
		cout << "\nNew car 1 has been inserted. " << endl;
	else
		cout << "\nNew car 1 has not been inserted. " << endl;
	if (manager->insertNewCar(newcar2))
		cout << "New car 2 has been inserted. " << endl;
	else
		cout << "New car 2 has not been inserted. " << endl;
	if (manager->insertNewCar(newcar3))
		cout << "New car 3 has been inserted. " << endl;
	else
		cout << "New car 3 has not been inserted. " << endl;
	if (manager->insertNewCar(newcar4))
		cout << "New car 4 has been inserted. " << endl;
	else
		cout << "New car 4 has not been inserted. " << endl;

	cout << "\n_________________________________________" << endl;
	//inserting used cars 
	if (manager->insertUsedCar(usedcar1))
		cout << "\nUsed car 1 has been inserted. " << endl;
	else
		cout << "Used car 1 has not been inserted. " << endl;
	if (manager->insertUsedCar(usedcar2))
		cout << "Used car 2 has been inserted. " << endl;
	else
		cout << "Used car 2 has not been inserted. " << endl;
	if (manager->insertUsedCar(usedcar3))
		cout << "Used car 3 has been inserted. " << endl;
	else
		cout << "Used car 3 has not been inserted. " << endl;
	if (manager->insertUsedCar(usedcar4))
		cout << "Used car 4 has been inserted. " << endl;
	else
		cout << "Used car 4 has not been inserted. " << endl;
	cout << "\n_________________________________________" << endl;
	//insert salesPerson
	if (manager->insertSalesPerson(sales1))
		cout << "\nKim has been inserted. " << endl;
	else
		cout << "Kim has not been inserted. " << endl;
	if (manager->insertSalesPerson(sales2))
		cout << "Taylor has been inserted. "<< endl;
	else
		cout << "Taylor has not been inserted. " << endl;


	cout << "\n_________________________________________" << endl;

	//looking for available new and used cars 
	if (manager->checkAvailabilityNew(*newcar1))
	{
		cout << "\nNew car " << newcar1->getUniqueID() << " is available. " << endl;
	}
	else {
		cout << "New car " << newcar1->getUniqueID() << " is not available. " << endl;
	}
	if (manager->checkAvailabilityNew(*newcar2))
	{
		cout << "New car " << newcar2->getUniqueID() << " is available. " << endl;
	}
	else {
		cout << "New car " << newcar2->getUniqueID() << " is not available. " << endl;
	}
	if (manager->checkAvailabilityNew(*newcar3))
	{
		cout << "New car " << newcar3->getUniqueID() << " is available. " << endl;
	}
	else {
		cout << "New car " << newcar3->getUniqueID() << " is not available. " << endl;
	}
	if (manager->checkAvailabilityNew(*newcar4))
	{
		cout << "New car " << newcar4->getUniqueID() << " is available. " << endl;
	}
	else {
		cout << "New car " << newcar4->getUniqueID() << " is not available. " << endl;
	}
	//used
	if (manager->checkAvailabilityUsed(*usedcar1))
	{
		cout << "Used car " << usedcar1->getUniqueID() << " is available. " << endl;
	}
	else {
		cout << "Used car " << usedcar1->getUniqueID() << " is not available. " << endl;
	}
	if (manager->checkAvailabilityUsed(*usedcar2))
	{
		cout << "Used car " << usedcar2->getUniqueID() << " is available. " << endl;
	}
	else {
		cout << "Used car " << usedcar2->getUniqueID() << " is not available. " << endl;
	}
	if (manager->checkAvailabilityUsed(*usedcar3))
	{
		cout << "Used car " << usedcar3->getUniqueID() << " is available. " << endl;
	}
	else {
		cout << "Used car " << usedcar3->getUniqueID() << " is not available. " << endl;
	}
	if (manager->checkAvailabilityUsed(*usedcar4))
	{
		cout << "Used car " << usedcar4->getUniqueID() << " is available. " << endl;
	}
	else {
		cout << "Used car " << usedcar4->getUniqueID() << " is not available. " << endl;
	}


	cout << "\n_________________________________________" << endl;
	//inserting purchase contracts
	if (manager->insertPurchaseContract(purchase1)) //1
		cout << "\nPurchase contract 1 has been inserted. " << endl;
	else
		cout << "\nPurchase contract 1 has not been inserted. " << endl;
	if (manager->insertPurchaseContract(purchase2)) //2
		cout << "Purchase contract 2 has been inserted. " << endl;
	else
		cout << "Purchase contract 2 has not been inserted. " << endl;
	if (manager->insertPurchaseContract(purchase3)) //3
		cout << "Purchase contract 3 has been inserted. " << endl;
	else
		cout << "Purchase contract 3 has not been inserted. " << endl;
	if (manager->insertPurchaseContract(purchase4)) //4
		cout << "Purchase contract 4 has been inserted. " << endl;
	else
		cout << "Purchase contract 4 has not been inserted. " << endl;
	cout << "\n_________________________________________" << endl<< endl;


	//checking availability after purchases
	cout << "\nChecking car availability after purchases: " << endl << endl;
	if (manager->checkAvailabilityNew(*newcar1))
	{
		cout << "New car 1 is available. " << endl;
	}
	else {
		cout << "New car 1 is not available. " << endl;
	}
	if (manager->checkAvailabilityNew(*newcar2))
	{
		cout << "New car 2 is available. " << endl;
	}
	else {
		cout << "New car 2 is not available. " << endl;
	}
	if (manager->checkAvailabilityNew(*newcar3))
	{
		cout << "New car 3 is available. " << endl;
	}
	else {
		cout << "New car 3 is not available. " << endl;
	}
	if (manager->checkAvailabilityNew(*newcar4))
	{
		cout << "New car 4 is available. " << endl;
	}
	else {
		cout << "New car 4 is not available. " << endl;
	}

	//used cars
	if (manager->checkAvailabilityUsed(*usedcar1))
	{
		cout << "Used car 1 is available. " << endl;
	}
	else {
		cout << "Used car 1 is not available. " << endl;
	}
	if (manager->checkAvailabilityUsed(*usedcar2))
	{
		cout << "Used car 2 is available. " << endl;
	}
	else {
		cout << "Used car 2 is not available. " << endl;
	}
	if (manager->checkAvailabilityUsed(*usedcar3))
	{
		cout << "Used car 3 is available. " << endl;
	}
	else {
		cout << "Used car 3 is not available. " << endl;
	}
	if (manager->checkAvailabilityUsed(*usedcar4))
	{
		cout << "Used car 4 is available. " << endl;
	}
	else {
		cout << "Used car 4 is not available. " << endl;
	}
	cout <<  endl << endl;
	//Printing cars 5years old or more and print cars 100k miles +
	cout << "list of cars older than3 years : " << endl;
	manager->printAge(3);
	cout << endl << "list of cars under 90k miles: " << endl;
	manager->printMilage(90000);

	cout << "\n_________________________________________" << endl << endl;
	cout << "INFO ABOUT CONTRACT 1 : " << endl << endl;
	purchase1->print(*purchase1);
	cout << "\n_________________________________________" << endl << endl;
	cout << "\nINFO ABOUT CONTRACT 2 : " << endl << endl;
	purchase2->print(*purchase2);
	cout << "\n_________________________________________" << endl << endl;
	cout << "INFO ABOUT CONTRACT 3 : " << endl << endl;
	purchase3->print(*purchase3);
	cout << "\n_________________________________________" << endl << endl;
	cout << "\nINFO ABOUT CONTRACT 4 : " << endl << endl;
	purchase4->print(*purchase4);


	cout << "\n_________________________________________" << endl << endl;
	//destructor
	cout << "Destructors called. " << endl;
	delete d1, d2, d3, d4;
	delete usedcar1, usedcar2, usedcar3, usedcar4;
	delete newcar1, newcar2, newcar3, newcar4;
	delete sales1, sales2;
	delete client1, client2, client3, client4;
	delete purchase1, purchase2;
	
	return 0;
}

