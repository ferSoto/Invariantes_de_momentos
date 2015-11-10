/**
* Program to get the moment invariants of images.
*/
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include "Headers/Image.h"
#include "Headers/Moments.h"

using namespace std;

int main(int argc, char const *argv[])
{
	/**
	* Options:
	* 1.- Invariants for translation
	* 2.- Invariants for scaling
	* 3.- Invariants for rotation
	*/
	////////////////////////////////////////////////////////////////////////
	/**
	* Each case has his own read format.
	* 1.- Begins with 1, then two integers (heigh and widthg) and finally 
	* 	  the matrix of the image.
	* 2.- This option receives the number 2, then 2 integer and the image 
	*     matrix (twice, the two images from different distance.)
	* 3.- Option 3 begins with 1, next two integers (heigh and width)
	*     and the image matrix (for times cause we're going to work with
	*     four images).
	* 4.- Receives the all 7 images in the same format as before.
	* Each option will print the moments for each image or their euler's 
	* characteristics.
	*/
	///////////////////////////////////////////////////////////////////////
	/**
	* To use this program easily, redirect the input from text files.
	*/
	int option;
	cin>>option;
	switch(option){
		case 1:
			//Cool code stuffs
		break;
		case 2:
			//Cool code stuffs
		break;
		case 3:
			//Cool code stuffs
		break;
		case 4:
			//Even cooler code stuffs
		break;
		default:
			//Not so awesome cool code
		break;
	}
	return 0;
}