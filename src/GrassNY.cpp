//
//  LeafNY.cpp
//  flyTree
//
//  Created by 朱静文 on 13-11-4.
//
//

#include "GrassNY.h"
// ----------------------------------
void GrassNY::initialize(float x, float y)
{
    length = ofRandom(-15,-75);
    
    born = ofGetElapsedTimef();
    
    pos.set(ofRandom(ofGetWidth()) ,ofGetWindowHeight());
    
    color.setHsb(ofRandom(77,160),255,255);
    
    energy = 0;
}

// ----------------------------------
void GrassNY::updateMe()
{
    //To let the grass die out with time
    float age = ofGetElapsedTimef() - born;
    color.a = ofMap(age,0,200,200,0);
    
    //To let the grass born with a speed
    energy = 0.9f * energy + 0.1f * 1.0f;
    
}

// ----------------------------------
void GrassNY::drawMe()
{
    //To draw grass
    ofSetColor(color);
    ofSetRectMode(OF_RECTMODE_CORNER);
    ofRect(pos.x, pos.y, 2, length*energy);
}
