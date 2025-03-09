#include <iostream>


bool check_prime(int number){
    if (number <=1){
        return false;
    }
    for(int i=2; i*i <= number; i++){
	    if (number % i == 0){
		    return false;
	    }
    }

    return true;
}


int main(){
	int number = 13;
	bool is_prime = check_prime(number);
	std::cout << std::boolalpha << number << " is prime: " << is_prime << "\n";
	return 0;

}


