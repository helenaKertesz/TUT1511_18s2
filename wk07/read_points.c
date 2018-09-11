#include <stdio.h>

#define MAX_POINTS 100

struct point {
    double x;
    double y;
};

// read points into an array, return number of points read
int read_points(struct point p[MAX_POINTS]);
// return point closest to origin
struct point closest_to_origin(int n_points, struct point p[n_points]);
// return euclidean distance between two points
double distance(struct point p, struct point q);

int main(void){

    (struct point) points[MAX_POINTS];
    int num_read = read_points(points);

    return 0;
}


// read points into an array, return number of points read
int read_points(struct point p[MAX_POINTS]){
	// points given in form (x,y)
	int i = 0;

	while( scanf("(%lf,%lf)", &(p[i].x), &(p[i].y) ) != EOF ){
	    i++;
	}
	
	return 0;
}


// return point closest to origin
struct point closest_to_origin(int n_points, struct point p[n_points]){
	return p[0];
}

// return euclidean distance between two points
double distance(struct point p, struct point q){
}

// What if I wanted a function to change a point?
void change(){
    // add 1 to the x and y values
}
