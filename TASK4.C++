//TASK4.C++
// To-Do List Manager in C++




#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task {
    string description;
    bool completed;

    Task(string desc) : description(desc), completed(false) {}
};

vector<Task> tasks;

void addTask() {
    string desc;
    cin.ignore();
    cout << "Enter task description: ";
    getline(cin, desc);
    tasks.push_back(Task(desc));
    cout << "Task added successfully!\n";
}

void viewTasks() {
    if (tasks.empty()) {
        cout << "No tasks to show.\n";
        return;
    }

    cout << "\nTo-Do List:\n";
    for (size_t i = 0; i < tasks.size(); ++i) {
        cout << i + 1 << ". [" << (tasks[i].completed ? "X" : " ") << "] "
             << tasks[i].description << "\n";
    }
}

void markTaskCompleted() {
    int num;
    viewTasks();
    if (tasks.empty()) return;

    cout << "Enter the task number to mark as completed: ";
    cin >> num;

    if (num < 1 || num > tasks.size()) {
        cout << "Invalid task number.\n";
        return;
    }

    tasks[num - 1].completed = true;
    cout << "Task marked as completed!\n";
}

void removeTask() {
    int num;
    viewTasks();
    if (tasks.empty()) return;

    cout << "Enter the task number to remove: ";
    cin >> num;

    if (num < 1 || num > tasks.size()) {
        cout << "Invalid task number.\n";
        return;
    }

    tasks.erase(tasks.begin() + num - 1);
    cout << "Task removed successfully!\n";
}

void showMenu() {
    cout << "\n--- To-Do List Manager ---\n";
    cout << "1. Add Task\n";
    cout << "2. View Tasks\n";
    cout << "3. Mark Task as Completed\n";
    cout << "4. Remove Task\n";
    cout << "5. Exit\n";
    cout << "Choose an option: ";
}

int main() {
    int choice;

    do {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1: addTask(); break;
            case 2: viewTasks(); break;
            case 3: markTaskCompleted(); break;
            case 4: removeTask(); break;
            case 5: cout << "Exiting To-Do List Manager. Goodbye!\n"; break;
            default: cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 5);

    return 0;
}
