#ifndef _CAMERA_INCLUDE
#define _CAMERA_INCLUDE

#include <glm/glm.hpp>

class Camera{
    public:
        void update();
        glm::mat4 getProjectionMatrix();

    private:
        glm::vec3 VRP;
        glm::vec3 OBS;
        glm::vec3 UP;
        glm::mat4 projection;
        int actual_cam;


};

#endif // _CAMERA_INCLUDE