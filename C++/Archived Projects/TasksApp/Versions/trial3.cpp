// All works just beautification pending :D

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

vector<string> taskList;
const string fileName = "tasks.txt";

void addTask()
{
    string task;
    cout << "Enter task: ";
    cin.ignore();
    getline(cin, task);
    taskList.push_back(task);
    cout << "Task added." << endl;
}

void deleteTask()
{
    int taskNumber;
    cout << "Enter task number: ";
    cin >> taskNumber;
    taskNumber--;
    if (taskNumber >= 0 && taskNumber < taskList.size())
    {
        taskList.erase(taskList.begin() + taskNumber);
        cout << "Task deleted." << endl;
    }
    else
    {
        cout << "Invalid task number." << endl;
    }
}

void listTasks()
{
    cout << "Tasks:" << endl;
    for (int i = 0; i < taskList.size(); i++)
    {
        cout << i + 1 << ". " << taskList[i] << endl;
    }
}

void clearTasks()
{
    taskList.clear();
    cout << "All tasks cleared." << endl;
}

void loadTasks()
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

void saveTasks()
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
}

int main()
{
    loadTasks();
    while (true)
    {
        system("cls");
        cout << "Todo List" << endl;
        cout << "1. Add task" << endl;
        cout << "2. Delete task" << endl;
        cout << "3. List tasks" << endl;
        cout << "4. Clear all tasks" << endl;
        cout << "5. Quit" << endl;
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
            break;
        }
        cout << "Press enter to continue...";
        cin.ignore();
        cin.get();
    }
    return 0;
}
