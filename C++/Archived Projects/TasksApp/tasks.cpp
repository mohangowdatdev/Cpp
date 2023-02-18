// All works just beautification pending :D

#include <iostream>  // Basic IO
#include <fstream>   // File handling
#include <vector>    // Vector data type
#include <windows.h> // Sleep

using namespace std;

// Vector data type
vector<string> taskList;
const string fileName = "tasks.txt";

// Used to list all Tasks
void listTasks()
{
    cout << endl;
    cout << "----------------------------" << endl;
    cout << "Tasks:" << endl;
    cout << "------" << endl;
    for (int i = 0; i < taskList.size(); i++)
    {
        cout << i + 1 << ". " << taskList[i] << endl;
    }
    cout << "----------------------------" << endl;
    cout << endl;
    cout << "[ Press Enter ]";
    cin.get();
    cin.ignore();
}

// Used to add more tasks onto the list
void addTask()
{
    cout << "----------------------------" << endl;
    string task;
    cout << "Task : ";
    cin.ignore();
    getline(cin, task);
    taskList.push_back(task);
    cout << endl;
    cout << "Task added." << endl;
    cout << "----------------------------" << endl;
    cout << endl;
    Sleep(3000);
}

// Used to delete any finished task
void deleteTask()
{
    cout << endl;
    cout << "----------------------------" << endl;
    cout << "Tasks:" << endl;
    cout << "------" << endl;
    for (int i = 0; i < taskList.size(); i++)
    {
        cout << i + 1 << ". " << taskList[i] << endl;
    }
    cout << endl;
    cout << "----------------------------" << endl;
    int taskNumber;
    cout << "Enter task number: ";
    cin >> taskNumber;
    taskNumber--;
    if (taskNumber >= 0 && taskNumber < taskList.size())
    {
        taskList.erase(taskList.begin() + taskNumber);
        cout << endl;
        cout << "Task deleted." << endl;
    }
    else
    {
        cout << endl;
        cout << "Invalid task number." << endl;
    }
    cout << "----------------------------" << endl;
    cout << endl;
    Sleep(3000);
}

// Used to clear the entire task list
void clearTasks()
{
    taskList.clear();
    cout << endl;
    cout << "All tasks cleared." << endl;
    cout << endl;
    Sleep(3000);
    cout << endl;
}

// On starting of execution loads all tasks from file
void loadTasks() // Reads existing tasks from file
{
    ifstream file(fileName.c_str());
    if (file.is_open())
    {
        string task;
        while (getline(file, task))
        {
            taskList.push_back(task);
        }
        file.close();
    }
}

// Used to store all tasks onto file on program execution
void saveTasks() // Writes new tasks onto the file
{
    ofstream file(fileName.c_str());
    if (file.is_open())
    {
        for (int i = 0; i < taskList.size(); i++)
        {
            file << taskList[i] << endl;
        }
        file.close();
    }
    cout << endl;
    cout << "Tasks Updated :) " << endl;
    Sleep(3000);
    system("cls");
}

// Main function
int main()
{
    loadTasks();
    while (true)
    {
        system("cls");
        cout << "-------------------------------" << endl;
        cout << "|-- Productivity To-do Mate --|" << endl;
        cout << "-------------------------------" << endl;
        cout << "| 1. Add task                 |" << endl;
        cout << "| 2. Delete task              |" << endl;
        cout << "| 3. List tasks               |" << endl;
        cout << "| 4. Clear all tasks          |" << endl;
        cout << "| 5. Quit (To Save)           |" << endl;
        cout << "-------------------------------" << endl;
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            addTask();

            break;
        case 2:
            deleteTask();

            break;
        case 3:
            listTasks();

            break;
        case 4:
            clearTasks();
            break;
        case 5:
            saveTasks();
            return 0;
        default:
            cout << "Invalid choice Please make a valid choice." << endl;
            Sleep(3000);
            break;
        }
    }
    return 0;
}
