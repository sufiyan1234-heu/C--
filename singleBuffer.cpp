#include <iostream>
#include <cstdio>
using namespace std;

const int BUFFER_SIZE = 120;

int main()
{
    FILE *file = fopen("code.txt", "rb");
    if (!file)
    {
        cerr << "Unable to open file." << endl;
        return 1;
    }

    char buffer[BUFFER_SIZE] = {0};
    int iteration = 1;
    size_t bytesRead;

    for (bytesRead = fread(buffer, 1, sizeof(buffer), file); bytesRead > 0; bytesRead = fread(buffer, 1, sizeof(buffer), file))
    {
        cout << "Buffer filled (Iteration " << iteration << "):" << endl;
        cout.write(buffer, bytesRead);
        cout << "\n\n";
        iteration++;
    }

    fclose(file);
    return 0;
}
