//
//  GrassSH.cpp
//  flyTree
//
//  Created by 朱静文 on 13-11-4.
//
//

#include "GrassSH.h"
// ----------------------------------
void GrassSH::initialize(float x, float y)
{
    length = ofRandom(-10,-90);
    
    born = ofGetElapsedTimef();
    
    pos.set(ofRandom(ofGetWidth()) ,ofGetWindowHeight());
    
    color.setHsb(ofRandom(35,45),255,255);
    
    energy = 0;
}

// ----------------------------------
void GrassSH::updateMe()
{
    //To let the Grass die out with time
    float age = ofGetElapsedTimef() - born;
    color.a = ofMap(age,0,200,200,0);
    
    //To let the Grass born with a speed
    energy = 0.9f * energy + 0.1f * 1.0f;
    
}

// ----------------------------------
void GrassSH::drawMe()
{
    //To draw the square leaves
    ofSetColor(color);
    ofSetRectMode(OF_RECTMODE_CORNER);
    ofRect(pos.x, pos.y, 2, length*energy);
}