#pragma once
#include "ofMain.h"
#include "baseScene.h"

#define S(src) # src

class submotionOrchestraScene : public baseScene {
    
public:
    
    void setup();
    void update();
    void draw();
	
	ofSpherePrimitive sphere;
	std::vector<ofPoint> points_src;
	std::vector<ofPoint> points_dest;
	ofEasyCam cam;
	float k;
	
	ofParameter<float> speed;
	ofParameter<float> size;
};
