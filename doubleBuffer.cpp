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

    char buffer1[BUFFER_SIZE] = {0};
    char buffer2[BUFFER_SIZE] = {0};
    char *currentBuffer = buffer1;
    char *nextBuffer = buffer2;
    int iteration = 1;

    size_t bytesRead = fread(currentBuffer, 1, sizeof(buffer1), file);
    while (bytesRead > 0)
    {

        size_t nextBytesRead = fread(nextBuffer, 1, sizeof(buffer2), file);

        if (currentBuffer == buffer1)
        {
            cout << "Buffer1 filled (Iteration " << iteration << "):" << endl;
        }
        else
        {
            cout << "Buffer2 filled (Iteration " << iteration << "):" << endl;
        }

        cout.write(currentBuffer, bytesRead);
        cout << "\n\n";
        iteration++;

        swap(currentBuffer, nextBuffer);
        bytesRead = nextBytesRead;
    }

    fclose(file);
    return 0;
}
