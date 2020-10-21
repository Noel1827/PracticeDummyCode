#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

    int **averageStudentScores(int students[n][2])
    {
        int sArray[1001][2];

        for (int i = 0; i < n; i++)
        {
            sArray[students[i][0]][0]++;                 // update the count of each student
            sArray[students[i][0]][1] += students[i][1]; // updatethe total of each student
        }

        int size = 0;
        for (int i = 0; i < 1001; i++)
        {
            if (sArray[i][0] > 0)
                size++;
        }

        int returnArray = new int[size];

        for (int i = 0, j = 0; i < 1001; i++)
        {
            if (sArray[i][0] > 0){
                returnArray[j]= new int [n];
                returnArray[j][0] = i;
                returnArray[j++][1]

            }
        }
    }

    return 0;
}