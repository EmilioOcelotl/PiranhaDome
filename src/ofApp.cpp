#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofSetColor(255);
    player.load("videos/SampleHap.mov");
    
    sphere.setScale(.5);
    sphere.setResolution(50);
    sphere.setPosition(0, 0, 0);
    sphere.setOrientation(ofVec3f(90,0,0));

    domemaster.setup();
    domemaster.setCameraPosition(0,0,10);
    
    // Syphon
    
#if (defined(__APPLE__) && defined(__MACH__))
    client.setup();
    syphonON = 0;
#endif
    
}

//--------------------------------------------------------------
void ofApp::update(){
    player.play();
}

//--------------------------------------------------------------
void ofApp::draw(){
    for (int i=0; i<domemaster.renderCount; i++){
        domemaster.begin(i);
            drawScene();
        domemaster.end(i);
    }
    
    domemaster.draw();
}

//--------------------------------------------------------------
void ofApp::drawScene(){
    ofSetRectMode(OF_RECTMODE_CENTER);

    //sphere.drawWireframe();
    ofRotateZ(180);

    ofTranslate(0, 0, -20);
    ofScale(0.125, 0.125);
    //player.draw(0, 0);
    
    client.draw(0, 0);

}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    sphere.setPosition(ofMap(x, 0, 1024, -25, 25), ofMap(y, 0, 1024, -25, 25), 5);
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
