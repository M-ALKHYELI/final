#include <iostream>
#include <string>

using namespace std;

void swap(int& a, int& b)
{
    // Swaps two integers
    int temp = a;
    a = b;
    b = temp;
}

int* bubble_sort(int* arr, int size)
{
    // Implemenets recursive bubble sort
    if (size == 1)
        return arr;
    for (int i = 0; i < size - 1; i++)
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    return bubble_sort(arr, size - 1);
}

int main() {
    // you will ask user to enter the course dept, course num and course name.
    // From there, you will ask user to enter the name of the assignment. 
    // After asking the user to enter the name of the assignment, then you will ask the 
    // user to enter points possible of the assignment. From there, you will go ahead and 
    // enter the number of students that will be scored. Then, you will create a dynamic array
    // to inject the number of elements that will be used to recored the scores by using
    // this code: int *arr = new int(n); Then, using a loop, you will enter the score of each student,
    // which the loop should go on for the specified number of times as you have mentioned in the previous question.
    // From there, you will create a function that will be used to sort the scores in numerical order in
    // ascending format by using recursive bubble sort. In that function, you will make it a recursive function,
    // where the function needs to be called for several times until all elements of the array are sorted in alphabetical order.

    // Below is the code for the above description
    string course_dept, course_name;

    int course_num, points_possible, num_students;

    cout << "Enter the course dept: ";
    cin >> course_dept;
    cout << "Enter the course number: ";
    cin >> course_num;
    cout << "Enter the course name: ";
    cin >> course_name;
    cout << "Enter the number of students that will be scored: ";
    cin >> num_students;
    cout << "Enter the points possible: ";
    cin >> points_possible;

    int* arr = new int(num_students);
    for (int i = 0; i < num_students; i++)
    {
        cout << "Enter the score of student " << i + 1 << ": ";
        cin >> arr[i];
    }

    // sort the array using bubble sort recursively
    int* sorted_arr = bubble_sort(arr, num_students);

    // Calculate the average using the following formula
    // double average = ((total score, add all elements of array together)/(number of students * points possible)) * 100
    double total_score = 0;
    for (int i = 0; i < num_students; i++)
        total_score += sorted_arr[i];
    double average = (total_score / (num_students * points_possible)) * 100;

    cout << "\nCourse: " << course_dept << " " << course_num << ": " << course_name << endl;

    // print the scores in 1 line
    cout << "Scores: ";
    for (int i = 0; i < num_students; i++)
        cout << sorted_arr[i] << " ";

    cout << "\nThe average: " << average << "%" << endl;

    // Calculate the lowest score
    cout << "Lowest score: " << sorted_arr[0] << endl;

    // Calculate the highest score
    cout << "Highest score: " << sorted_arr[num_students - 1] << endl;

    // Print thanks message
    cout << "\nThank you for using the grade calculator!" << endl;

    return 0;
}
