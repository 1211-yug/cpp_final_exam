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

int main(){
	
	return 0;
}