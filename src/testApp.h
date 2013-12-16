#pragma once

#include "ofMain.h"
#include"LeafSH.h"
#include "LeafNY.h"
#include "ofxSpacebrew.h"
#include"Particle.h"
#include"GrassSH.h"
#include "GrassNY.h"

class testApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    ofImage branch,branchback,sunNY,sunSH;
    vector<LeafSH> leafSH;
    vector<LeafNY> leafNY;
    vector<GrassSH> grassSH;
    vector<GrassNY> grassNY;
    int lightSH,lightNY;
    int noiseSH, noiseNY;
    int timeSH,timeNY,time;
    float timepercentSH, timepercentNY;
    int hourSH, minuteSH, secondSH,hourNY,minuteNY,secondNY;
    float angleSH,angleNY,r, sunSHx, sunSHy, sunNYx, sunNYy;
    float sunRadiusSH,sunRadiusNY,sunSHPrev,sunNYPrev;
    ofTrueTypeFont font;
    ofColor color;
    
    ofVideoGrabber cam;
    bool bIsFrameNew;
    ofPixels thisFrame;
    ofPixels lastFrame;
    ofPixels diffImage;
    
    int movementSum;
    
    Spacebrew::Connection spacebrew;
    void onMessage( Spacebrew::Message & msg );
    int line1,line2;
    
};
