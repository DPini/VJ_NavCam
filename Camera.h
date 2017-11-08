#ifndef _CAMERA_INCLUDE
#define _CAMERA_INCLUDE

#include <glm/glm.hpp>

class Camera{
    public:
        void update(char* keys);
        glm::mat4 getProjectionMatrix();

    private:
        glm::vec3 VRP;
        glm::vec3 OBS;
        glm::vec3 UP;


};

#endif // _CAMERA_INCLUDE