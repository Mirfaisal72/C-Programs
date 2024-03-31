#include <iostream>
using namespace std;
class circle{
	protected:
		int xc ,yc ,radius;
		color fillcolor;
		fstyle fillstyle;
		
	public:
		void set_data(int x, int y, int r , color fc , fstyle fs){
			xc = x;
			yc = y;
			radius = r;
			fillcolor = fc;
			fillstyle = fs;
		}		
	    void draw(){
	    	set_color(fillcolor);
	    	set_fill_style(fillstyle);
	    	draw_circle(xc,yc,radius);
		}
};

int main(){
	init_graphics();
	
	circle c1,c2,c3;
	
	c1.set_data(15,7,5,cblue,X_fill);
	c2.set_data(41,12,7,cRed,O_fill);
	c3.set_data(65,18,4,cGreen,Medium_fill);
	
		c1.draw();
		c2.draw();
		c3.draw();
		return -1;	
}
