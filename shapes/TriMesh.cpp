/*
 * TriMesh.cpp
 *
 *
 */
#include "TriMesh.h"


namespace rt{

    TriMesh::TriMesh():Shape(){}
    TriMesh::~TriMesh(){}

    TriMesh::TriMesh(std::string ply_file, Vec3f pos, float scale, int vs, int fs, Material* m):Shape(m) {
        this->pos = pos;
        this->scale = scale;
        this->v_count = vs;
        this->f_count = fs;
        this->populateVertices(ply_file);
    }

    void TriMesh::populateVertices(std::string file) {
        float minX, minY, minZ = INFINITY;
        float maxX, maxY, maxZ = -INFINITY;

        std::string line;
        printf("Reading PLY model %s\n", file.c_str());
        ifstream MyReadFile(file.c_str());
        // skip to start of vertices

        int c = 0;
        while (!(line.compare("end_header")==0)) {
            getline (MyReadFile, line);
        }
        
        printf("Parsing vertices...\n");
        // parse vertices
        for (int i=0; i<v_count; i++) {
            getline (MyReadFile, line);
            Vec3f* vertex = getVectorFromLine(line, pos, scale);
            vertices.push_back(vertex);
            maxX = std::max(maxX, vertex->x);
            maxY = std::max(maxY, vertex->y);
            maxZ = std::max(maxZ, vertex->z);
            minX = std::min(minX, vertex->x);
            minY = std::min(minY, vertex->y);
            minZ = std::min(minZ, vertex->z);
        }
        corner = Vec3f(minX, minY, minZ);
        whd = Vec3f(maxX-minX, maxY-minY, maxZ-minZ);

        printf("Parsing faces...\n");
        // parse faces
        std::vector<Shape*> faces;
        while (getline (MyReadFile, line)) {
            Vec3f* corners = getVectorFromLine(line, Vec3f(0), 1);
            Triangle* triangle = new Triangle(vertices[corners->x],vertices[corners->y], vertices[corners->z]);
            faces.push_back(triangle);
        }
        bvh = new BVH(faces);

        MyReadFile.close();
    }

    Vec3f* TriMesh::getVectorFromLine(std::string s, Vec3f pos, float scale) {
        vector<string> words{};
        int index = 0;
        while ((index = s.find(" ")) != string::npos) {
            words.push_back(s.substr(0, index));
            s.erase(0, index + 1);
        }
        int l = words.size();
        Vec3f* v = new Vec3f(atof(words[l-3].c_str())*scale+pos.x, atof(words[l-2].c_str())*scale+pos.y, atof(words[l-1].c_str())*scale+pos.z);
        // printf("%f", atoi(words[l-2].c_str()));
        // printf("%f", scale);
        // printf("%f", pos.y);
        // printf("%f", atoi(words[l-2].c_str())*scale+pos.y);
        printf("v: %f %f %f\n",v->x, v->y, v->z);
        // int a = 10 / 0;
        return v;
    }

    Hit TriMesh::intersect(Ray ray) {
        Hit h = bvh->intersect(ray);
        h.shape = this;
        return h;
    }

    Vec3f TriMesh::getCorner(){
        return corner;
    }
	Vec3f TriMesh::getWHD(){
        return whd;
    }


} //namespace rt


