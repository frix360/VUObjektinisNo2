#include <iostream>
#include <algorithm>
#include <iomanip>
#include <random>
#include <sstream>
#include <time.h>

using namespace std;

enum CalculationType { MEDIAN, AVERAGE };

const int MAX_RAND_HOMEWORK_GRADES = 20;
const int MIN_RAND_HOMEWORK_GRADES = 10;


void InsertToArray(int *&arr, int &length, int value) {
    int *tmp = new int[length+1];

    for (int i = 0; i < length; i++) {
         tmp[i] = arr[i];
    }

    tmp[length] = value;

    delete[] arr;

    arr = tmp;

    length++;
}


struct Student {
    string name;
    string surname;
    int* homeworkGrades;
    int gradesCount = 0;
    int exam = 0;

    void InputData() {
        cout << "Iveskite varda ir pavarde: ";
        cin >> name >> surname;
        cout << endl;


        homeworkGrades = new int[gradesCount];

        cout << "Ar sugeneruoti pazymius ir egzamino rezultata atsitiktinai (Y/N)? ";
        char c;
        cin >> c;

        if (toupper(c) == 'Y') {
            GenerateGrades();
        } else {
            InputGrades();

            do {
                cout << "Koks egzamino rezultatas? ";
                cin >> exam;
            } while (!(exam >= 1 && exam <= 10));
        }



    }

      void GenerateGrades() {
        mt19937 gen(time(NULL)); //Standard mersenne_twister_engine seeded with rd()
        uniform_int_distribution<> gradesCountRand(MIN_RAND_HOMEWORK_GRADES, MAX_RAND_HOMEWORK_GRADES);
        uniform_int_distribution<> gradesRand(1, 10);


        int gradesToGenerate = gradesCountRand(gen);

        for (int i = 0; i < gradesToGenerate; i++) {
            InsertToArray(homeworkGrades, gradesCount, gradesRand(gen));
        }


        exam = gradesRand(gen);

    }

    void InputGrades() {

        cout << "Iveskite pazymius (kad baigti ivedima, iveskite ne skaiciu)." << endl;

        int grade;

        while(cin >> grade)
        {
            if (!(grade >= 1 && grade <= 10)) {
                cout << "Pazymys turi buti nuo 1 iki 10, veskite toliau. " << endl;
                continue;
            }
            InsertToArray(homeworkGrades, gradesCount, grade);
        }

        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    float GetAverageOfHomeworkGrades() {
        int sum = 0;
        for (int i = 0; i < gradesCount; i++) {
            sum += homeworkGrades[i];
        }

        return (float)sum / gradesCount;
    }

    float GetMedianOfHomeworkGrades() {

        int sortedGrades[gradesCount];

        for (int i = 0; i < gradesCount; i++) {
            sortedGrades[i] = homeworkGrades[i];
        }

        sort(sortedGrades, sortedGrades + gradesCount);

        if (gradesCount % 2 == 0) {
            return (sortedGrades[gradesCount/2] + sortedGrades[gradesCount/2 - 1]) / (float)2;
        }
        else {
            return sortedGrades[gradesCount/2];
        }
    }

    float GetFinalGrade(CalculationType calcType) {
        switch (calcType) {
        case AVERAGE:
            return 0.4f  * GetAverageOfHomeworkGrades() + 0.6f * exam;
            break;
        case MEDIAN:
             return 0.4f  * GetMedianOfHomeworkGrades() + 0.6f * exam;
        }
    }
};
void printStudentsData(int n, Student *students, CalculationType calcType = AVERAGE);


int main()
{
    int studentsCount;

    string name, surname;

    cout << "Kiek bus mokiniu? ";
    cin >> studentsCount;

     while(cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<std::streamsize>::max(), '\n');

        cout << "Neteisinga ivestis. Veskite dar karta. ";
        cin >> studentsCount;
    }


    cout << endl;

    Student* students = new Student[studentsCount];

    for (int i = 0; i < studentsCount; i++) {
        students[i].InputData();
    }

    int choice;
    cout << "Kaip suskaiciuoti galutini rezultata?" << endl << "1 : Vidurkis" << endl << "2 : Mediana" << endl << "Iveskite pasirinkima: ";
    cin >> choice;

    CalculationType calcType = choice == 1 ? AVERAGE : MEDIAN;

    printStudentsData(studentsCount, students, calcType);

    return 0;
}


void printStudentsData(int n, Student *students, CalculationType calcType) {
    cout << "Vardas     Pavarde       Galutinis( " << (calcType == AVERAGE ? "Avg" : "Med" )<< " )"
    << endl
    << "-----------------------------------------------------------" << endl;



    for (int i = 0; i < n; i++) {
        cout << fixed << setprecision(2) << setw(10) << students[i].name <<  setw(12) <<students[i].surname <<  setw(20) << students[i].GetFinalGrade(calcType) << endl;
    }
}
