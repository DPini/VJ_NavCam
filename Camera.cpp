#include "Camera.h"
#include <cmath>
#include <glm/glm.hpp>

Camera::Camera(){
    projection = glm::perspective(45.f / 1800.f * PI, float(640) / float(480), 0.1f, 100.f);
    actual_cam = 0;
}

glm::mat4 Camera::getProjectionMatrix() return projection;

void Camera::update(){
    //Game::instance().getSpecialKey(GLUT_KEY_LEFT)
    int prev_cam = actual_cam;
    if (Game::instance().getSpecialKey(GLUT_KEY_1)){
        OBS = glm::vec3(-5,-2,5);
        VRP = OBS + glm::vec3(2,2,0);
        VUP = glm::vec3(0,0,1);
        actual_cam = 1;
    }

    if ( actual_cam != prev_cam ) glm::lookAt();
}

