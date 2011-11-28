#include "testApp.h"

const int numBalls = 10;

//--------------------------------------------------------------
void testApp::setup(){
	
	// setup
	ofSetLogLevel(OF_LOG_VERBOSE);
    
    grid = new MetaBallGrid(640,480,1,1);
    
    for(int i=0;i<numBalls;i++) {
        grid->addBall(round(ofRandom(640)),round(ofRandom(480)),ofRandom(300)+200);
    }
    
  
  
        
    
}

//--------------------------------------------------------------
void testApp::update(){
    grid->update();
  //    grid->descGrid();
}

//--------------------------------------------------------------
void testApp::draw(){
    //ofEnableSmoothing();
    ofEnableAlphaBlending();
    glEnable(GL_POINT_SMOOTH);
   glPointSize(3);
    
    ofBackground(0, 0, 0);
    ofSetColor(255, 255, 255);
    grid->drawGrid(50,200);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}