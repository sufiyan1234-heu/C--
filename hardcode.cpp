#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int BUFFER_SIZE = 1024;

class BufferManager
{
private:
    char buffer1[BUFFER_SIZE];
    char buffer2[BUFFER_SIZE];
    char *readBuffer;
    char *processBuffer;
    FILE *file;
    int bytesRead;
    int currentIndex;

public:
    BufferManager(const char *filename) : readBuffer(buffer1), processBuffer(nullptr), bytesRead(0), currentIndex(0)
    {
        file = fopen(filename, "r");
        if (file == NULL)
        {
            perror("Error opening the text.\n");
            exit(EXIT_FAILURE);
        }
        loadBuffer();
    }

    ~BufferManager()
    {
        fclose(file);
    }

    bool loadBuffer()
    {
        bytesRead = fread(readBuffer, 1, BUFFER_SIZE, file);
        swapBuffers();
        currentIndex = 0;
        return bytesRead > 0;
    }

    void swapBuffers()
    {
        processBuffer = readBuffer;
        readBuffer = (readBuffer == buffer1) ? buffer2 : buffer1;
    }

    char getNextChar()
    {
        if (currentIndex >= bytesRead)
        {
            if (!loadBuffer())
            {
                return EOF;
            }
        }
        return processBuffer[currentIndex++];
    }
};

int main()
{
    int state = 0;
    char lex[1024] = {0};
    int li = 0;

    BufferManager bufferManager("text.txt");

    char character;
    while ((character = bufferManager.getNextChar()) != EOF)
    {
        switch (state)
        {
        case 0:
            if (character == '+')
            {
                state = 1;
                lex[li++] = character;
            }
            break;
        case 1:
            if (character == '+')
            {
                state = 2;
                lex[li++] = character;
            }
            else if (character == '=')
            {
                state = 3;
                lex[li++] = character;
            }
            else
            {
                state = 0;
                cout << "Found lexeme: " << lex << endl;
                li = 0;
                memset(lex, 0, sizeof(lex));
            }
            break;
        case 2:
            cout << "Found lexeme: " << lex << endl;
            state = 0;
            li = 0;
            memset(lex, 0, sizeof(lex));
            break;
        case 3:
            cout << "Found lexeme: " << lex << endl;
            state = 0;
            li = 0;
            memset(lex, 0, sizeof(lex));
            break;
        default:
            state = 0;
            li = 0;
            memset(lex, 0, sizeof(lex));
            break;
        }
    }

    if (li > 0)
    {
        cout << "Found lexeme: " << lex << endl;
    }

    return 0;
}
