#include<iostream>

using namespace std;

class Rectangle{
	
	private:
		
	    float length, width;
	
	public:
		
		void setValues(float l, float w){
	        length = l;
	        width = w;
	    }
	
	    float getLength(){
	        return length;
	    }
	
	    float getWidth(){
	        return width;
	    }
	    float area(){
			return length * width;
	    }
	    
};

int main(){
	
	Rectangle r;
	r.setValues(5,3);
	
	cout << "=================" << endl;
	cout << "Length :- " << r.getLength() << endl;
	cout << "Width :- " << r.getWidth() << endl;
	cout << "area :- " << r.area() << endl;
	cout << "=================" << endl;
}