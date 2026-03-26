#include<iostream>

using namespace std;

class Shape{
	
	private:
	    string color;
	
	public:
	    void setColor(string c){
	        color = c;
	    }
	
	    string getColor(){
	        return color;
	    }
	
	    virtual float area() = 0;
	};

int main(){
	
	return 0;
}
