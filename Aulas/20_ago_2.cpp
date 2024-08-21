#include <iostream>
#include <string>

using namespace std;

struct Coordenadas
{
    int x;
    int y;
};

int main()
{
	//array de vertices
    Coordenadas vertices[3];
    
    vertices[0].x = 2;
    vertices[0].y = 5;
    
    vertices[1].x = 7;
    vertices[1].y = 9;
    
    vertices[2].x = 8;
    vertices[2].y = 1;
    
    for (int i = 0; i < 3; ++i)
    {
    	cout << "Cordenadas: {X, Y} " << i + 1
    		<< ": (" << vertices[i].x << ", "
    		<< vertices[i].y << ")" << endl;
	}
    
    return 0;
}