/*
 * Material.cpp
 *
 */
#include "Material.h"


namespace rt{

Material::Material(Vec3f dif, float ks, float kd, float specular, float kr, std::string texturePath, int texW, int texH):Material(dif, ks, kd, specular, kr){
    this->texW = texW;
    this->texH = texH;
    hasTex = true;

    std::string line;
    printf("Reading texture %s\n", texturePath.c_str());

    ifstream TextureFile(texturePath.c_str());

    getline(TextureFile, line);
    getline(TextureFile, line);
    getline(TextureFile, line);
    getline(TextureFile, line);
    float maxVal = std::stof(line.c_str()); //should be 255

    while (getline (TextureFile, line)) {
        float r = std::stof(line.c_str())/maxVal;
        getline(TextureFile, line);
        float g = std::stof(line.c_str())/maxVal;
        getline(TextureFile, line);
        float b = std::stof(line.c_str())/maxVal;

        Vec3f* colour = new Vec3f(r,g,b);
        texture.push_back(colour);
    }
    TextureFile.close();
}

Vec3f* Material::getTexture(Vec2f p){
    int u = (p.x * texW);
    int v = (p.y * texH);
    Vec3f* c = texture[u + (v*texW)];
    return c;
}




} //namespace rt


