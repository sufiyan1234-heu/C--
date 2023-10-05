#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int BUFFER_SIZE = 1024;

char buffer1[BUFFER_SIZE];
char buffer2[BUFFER_SIZE];
char *readBuffer = buffer1;
char *processBuffer = nullptr;

int main()
{
    int state = 0;
    char lex[1024] = {0};
    int li = 0;

    const char *filename = "text.txt";
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        perror("Error opening the text.\n");
        return EXIT_FAILURE;
    }

    int bytesRead;
    while ((bytesRead = fread(readBuffer, 1, BUFFER_SIZE, file)) > 0)
    {
        processBuffer = readBuffer;

        for (int i = 0; i < bytesRead; i++)
        {
            char character = processBuffer[i];
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

        readBuffer = (readBuffer == buffer1) ? buffer2 : buffer1;
    }

    if (li > 0)
    {
        cout << "Found lexeme: " << lex << endl;
    }

    fclose(file);
    return 0;
}
