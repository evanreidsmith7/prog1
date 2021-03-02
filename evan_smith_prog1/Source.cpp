
#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

/*to do: Read and understand the problem. The main() function and stubs for other major
functions done.
complete and test the read_questions( ) and read_answers( ) functions.
*/

int read_questions(string qr_array[50][5]) {
    string temp;
    ifstream q_r;
    int numq = 0;

    q_r.open("questions.txt");

    if (!q_r)
    {
        cout << "failed to open input file" << endl;
        return -1;
    }


    while (getline(q_r, temp))
    {
        while (temp.length() == 0)
            getline(q_r, temp);
            qr_array[numq][0] = temp;

            for (int i = 1; i < 5; i++)
            {
                getline(q_r, qr_array[numq][i]);
            }
                numq++;     
    }

    q_r.close();

    for (int i = 0; i < numq; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            switch (j)
            {
            case 0: cout << "Question #" << i + 1 << ": ";
                break;
            case 1: cout << "a. ";
                break;
            case 2: cout << "b. ";
                break;
            case 3: cout << "c. ";
                break;
            case 4: cout << "d. ";
                break;
            default: cout << "error";
            }
            cout << qr_array[i][j] << endl;
        }
        cout << endl;

    }



    return 0;
}

int read_answers()
{
    ifstream answersf;
    char answers[5];
    answersf.open("answers.txt");
    int i = 0;

    if (!answersf)
    {
        cout << "failed to open input file" << endl;
        return -1;
    }

    
    while (!answersf.eof())
    {
        answersf >> answers[i];
        i++;
    }










}


int main() {
    string array[50][5];
    read_questions(array);












    return 0;
}

