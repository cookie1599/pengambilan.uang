#include <iostream>
#include <cmath>
using namespace std ;

int main() {
	//deklarasi
	int deposit, withdraw ;
	int saldo ;
	int amount ;
	cout << "deposit : " ;
	cin >> saldo ;
	cout << "withdraw : " ;
	cin >> amount ;
	
	cout << "deposit = saldo + amount " << endl ;
	cout << "withdraw = saldo - amount " << endl ;
	
	//rumus 

	deposit=saldo+amount ;
	withdraw=saldo-amount ;
	

	//output

	cout << "deposit : " << deposit << endl ;
	
	cout << "withdraw : " << withdraw << endl ;

}
