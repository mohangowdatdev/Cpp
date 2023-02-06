#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void addTask(vector<string> &tasks)
{
    cout << "Enter task: ";
    string task;
    getline(cin, task);
    tasks.push_back(task);
}

void listTasks(vector<string> &tasks)
{
    cout << "To-Do List:" << endl;
    for (int i = 0; i < tasks.size(); i++)
    {
        cout << i + 1 << ". " << tasks[i] << endl;
    }
}

void saveTasks(vector<string> &tasks)
{
    ofstream file;
    file.open("tasks.txt");
    for (int i = 0; i < tasks.size(); i++)
    {
        file << tasks[i] << endl;
    }
    file.close();
}

void loadTasks(vector<string> &tasks)
{
    ifstream file;
    file.open("tasks.txt");
    string task;
    while (getline(file, task))
    {
        tasks.push_back(task);
    }
    file.close();
}

int main()
{
    vector<string> tasks;
    loadTasks(tasks);
    char choice;
    while (true)
    {
        cout << endl;
        cout << "a. Add Task" << endl;
        cout << "l. List Tasks" << endl;
        cout << "q. Quit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice)
        {
        case 'a':
            addTask(tasks);
            break;
        case 'l':
            listTasks(tasks);
            break;
        case 'q':
            saveTasks(tasks);
            return 0;
        default:
            cout << "Invalid choice." << endl;
            break;
        }
    }
    return 0;
}
