/*
 *  CollisionData.h
 *  ofxBullet_v3
 *
 *  Created by Nick Hardeman on 5/25/11.
 *  Copyright 2011 Arnold Worldwide. All rights reserved.
 *
 */

#pragma once

#include "ofMain.h"

class ofxBulletUserData;

class ofxBulletCollisionData {
public:
	int numContactPoints;
	ofxBulletUserData* userData1;
	vector<ofVec3f>	worldContactPoints1;
	const btRigidBody* body1;
	
	ofxBulletUserData* userData2;
	vector<ofVec3f>	worldContactPoints2;
	vector<ofVec3f> normalsOnShape2;
	const btRigidBody* body2;
};