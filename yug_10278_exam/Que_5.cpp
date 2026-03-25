#include <iostream>

using namespace std;

class Animal{
	
	public:
	    virtual void sound() = 0;
	    virtual void move() = 0;
	    
};

class Dog : public Animal{
	
	public:
		
	    void sound(){
	        cout << "Dog barks" << endl;
	    }
	
	    void move(){
	        cout << "Dog runs" << endl;
	    }
};

class Bird : public Animal{
	
	public:
		
	    void sound(){
	        cout << "Bird chirps" << endl;
	    }
	
	    void move(){
	        cout << "Bird flies" << endl;
	    }
};

int main(){
	
    Animal* animals[2];

    Dog d;
    Bird b;

    animals[0] = &d;
    animals[1] = &b;

    for (int i=0 ; i<2 ; i++){
    	
        animals[i]->sound();
        animals[i]->move();
        
    }

    return 0;
}