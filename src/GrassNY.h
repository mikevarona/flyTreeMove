//
//  LeafNY.h
//  flyTree
//
//  Created by 朱静文 on 13-11-4.
//
//

#ifndef __flyGrass__GrassNY__
#define __flyGrass__GrassNY__

#include <iostream>
#include "ofMain.h"

class GrassNY
{
public:
    
    void initialize(float x, float y);
    void updateMe();
    void drawMe();
    
    ofPoint pos;
    ofColor color;
    float length;
    float born;
    float energy;
    
};

#endif /* defined(__flyTree__LeafNY__) */
