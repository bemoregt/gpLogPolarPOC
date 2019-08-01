#include "ofApp.h"
#include "fftm.hpp"

using namespace std;
using namespace cv;
using namespace ofxCv;
//--------------------------------------------------------------
void ofApp::setup(){

    cat1.allocate(276, 276, OF_IMAGE_COLOR);
    cat2.allocate(276, 276, OF_IMAGE_COLOR);
    cat1.load("cat.png");
    cat2.load("cat_part.png");
    cat3.allocate(276, 276, OF_IMAGE_COLOR);
    
    Mat im0 = toCv(cat1);
    Mat im1 = toCv(cat2);
    
    // As input we need equal sized images, with the same aspect ratio,
    // scale difference should not exceed 1.8 times.
    rr = LogPolarFFTTemplateMatch(im0, im1, 200, 100);
    
    
    toOf(im0, cat3);
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofSetColor(255);
    cat1.draw(0, 0, 276, 276);
    cat2.draw(276, 0, 276, 276);
    cat3.draw(100+276*2, 0, 276, 276);
    // Plot rotated rectangle, to check result correctness
    Point2f rect_points[4];
    rr.points(rect_points);
    for (int j = 0; j < 4; j++)
    {
        //cv::line(im0, rect_points[j], rect_points[(j + 1) % 4], cv::Scalar(255, 0, 0), 2, CV_AA);
        ofSetColor(255, 120, 0);
        ofSetLineWidth(2.0);
        ofDrawLine(100+rect_points[j].x+276*2, rect_points[j].y,
                   100+rect_points[(j+1)%4].x+276*2, rect_points[(j+1)%4].y);
    }
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

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
