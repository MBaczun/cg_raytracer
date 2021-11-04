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
    // Create a text string, which is used to output the text file
    std::string myText;

    printf("Reading texture %s\n", texturePath.c_str());
    // Read from the text file
    ifstream MyReadFile(texturePath.c_str());

    // Use a while loop together with the getline() function to read the file line by line
    getline(MyReadFile, myText);
    getline(MyReadFile, myText);
    getline(MyReadFile, myText);
    getline(MyReadFile, myText);
    float maxVal = std::stof(myText.c_str()); //should be 255

    while (getline (MyReadFile, myText)) {
    // Output the text from the file
        float r = std::stof(myText.c_str())/maxVal;
        getline(MyReadFile, myText);
        float g = std::stof(myText.c_str())/maxVal;
        getline(MyReadFile, myText);
        float b = std::stof(myText.c_str())/maxVal;

        Vec3f* colour = new Vec3f(r,g,b);
        texture.push_back(colour);
    }
    // Close the file
    MyReadFile.close();
}

Vec3f* Material::getTexture(Vec2f p){
    int u = (p.x * texW);
    int v = (p.y * texH);
    // if (texW>700) printf("u: %d, v: %d\n", u, v);
    Vec3f* c = texture[u + (v*texW)];
    //printf("Colour: %f %f %f\n", c->x,c->y,c->z);
    return c;
}




} //namespace rt


