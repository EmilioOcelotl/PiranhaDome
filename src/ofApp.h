#pragma once

#include "ofMain.h"
#include "ofxDomemaster.h"
#include "ofxHapPlayer.h"
#include "ofxOsc.h"
#include "ofxXmlSettings.h"


#if (defined(__APPLE__) && defined(__MACH__))
#include "ofxSyphon.h"
#endif

class ofApp : public ofBaseApp{

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
        void drawScene();
    
        ofxXmlSettings XML;
        ofxOscReceiver reciever;
        ofxOscSender sender;

        ofxDomemaster domemaster;
        ofSpherePrimitive sphere;
        ofxHapPlayer player;
    
    int domeCamDistance;
    int syphoneDistance; 
    
        int portIn;
        int portOut;
#if (defined(__APPLE__) && defined(__MACH__))
    ofxSyphonClient client;
    bool syphonON;
#endif
    
};
