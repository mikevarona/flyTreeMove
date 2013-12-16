//
//  GrassSH.h
//  flyTree
//
//  Created by 朱静文 on 13-11-4.
//
//

#ifndef __flyTree__GrassSH__
#define __flyTree__GrassSH__

#include <iostream>
#include "ofMain.h"

class GrassSH
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

#endif /* defined(__flyTree__GrassSH__) */
