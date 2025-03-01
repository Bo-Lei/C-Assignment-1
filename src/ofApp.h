#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		int numbers[5]; // Use an array to store 5 random numbers
		void generateRandomNumbers(); // Generate random numbers
		void bubbleSort(); // Bubble Sort
		void insertionSort(); // Insertion Sort
		void mergeSort(); // Merge Sort
		void quickSort(int left, int right); // Quick Sort
		int partition(int left, int right); // Partition functions
		void shuffleNumbers(); // Shuffling Algorithm

};
