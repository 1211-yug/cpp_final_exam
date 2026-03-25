#include<iostream>

using namespace std;

class Shap{
	
	private:
		
		string color;
		int  area;
		
	public:
		
		void display(){
			
			cout << "===================" << endl;
			cout << "Color :- " << color << endl;
			cout << "Area :- " << area << endl;
			cout << "===================" << endl;
						
		}
		
};

class Cricle : public Shap{
	
	void Round(){
			
			int a;
			
			cout << "Round" << endl << endl;
			
			cout << "Enter Color :- ";
			cin >> color;
			
			cout << "Enter Area :- ";
			cin >> a;
			
			area = 3.14 * a * a; 
			
			cout << endl;
			
		}
	
};

class Rectangle : public Shap{
	
	void Rectangle(){
			
			int length, width;
			
			cout << "Rectangle" << endl << endl;
			
			cout << "Enter Color :- ";
			cin >> color;
			
			cout << "Enter length :- ";
			cin >> length;
			
			cout << "Enter width :- ";
			cin >> width;
			
			area = length * width;
			
			cout << endl;
			
		}
	
};

int main(){
	
	
	
	
	return 0;
}