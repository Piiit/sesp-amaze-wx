#ifndef MAZEMAP_H
#define MAZEMAP_H

#define MAP_WIDTH 60
#define MAP_HEIGHT 60

struct Node {
    bool startPoint;
    bool endPoint;
    bool current;
    bool discovered;
    char customState;
};

struct MazeMap {
    Node node[MAP_WIDTH][MAP_HEIGHT];
};

#endif // MAZEMAP_H
