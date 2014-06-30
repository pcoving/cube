//
//  CubeViewController.h
//  Cube
//
//  Created by Paul Covington on 9/18/13.
//  Copyright (c) 2013 Paul Covington. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <GLKit/GLKit.h>
#import <CoreMotion/CoreMotion.h>

@interface CubeViewController : GLKViewController
{
    GLuint vertexBuffer;
    float rotation;
    CMMotionManager * motionManager;
    CMAttitude * referenceAttitude;
    CMAttitude *attitude;
}

@property (strong, nonatomic) EAGLContext *context;
@property (strong, nonatomic) GLKBaseEffect *effect;

- (void)setUpGL;
- (void)tearDownGL;

@end
