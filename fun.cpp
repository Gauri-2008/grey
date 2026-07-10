#include <iostream>
#include <vector>
#include <string>

struct Task{
    std::string name;
    bool complete;
};

void displayTasks(const std::vector<Task>& Tasks) {
    if (Tasks.empty()) {
        std::cout << "You have no tasks. Good Job!!!!! Keep it up!\n";
    } 
    else {
        std::cout << "\nYour tasks:\n";
        for (int i = 0; i < Tasks.size(); ++i) {
            std::cout << i + 1 << ". " << (Tasks[i].complete ? "[Done]" : "[Pending]") << " " << Tasks[i].name << std::endl;
        }
    }
}
    
int main() {
    std::vector<Task> Tasks;
    int choice;
    char choice2;

    do{
        std::cout << "*******~Welcome to the Task Manager!~ *********\n";
        std::cout << "This is a simple task manager that allows you to add, view, mark as complete, and delete tasks. \n";
        std::cout << "Get ready to manage your tasks efficiently! \n";

        do {
            std::cout << "\nWHAT WOULD YOU LIKE TO DO?: \n";
            std::cout << "-> 1. Add Task \n";
            std::cout << "-> 2. View Tasks \n";
            std::cout << "-> 3. Mark Task as Complete \n";
            std::cout << "-> 4. Delete Tasks \n";
            std::cout << "-> 5. Exit \n";
            std::cout << "Enter your choice: \n";
            std::cin >> choice;
            std::cin.ignore(); // Clear the input buffer

            switch (choice) {
                case 1: {
                    Task t;
                    
                    std::cout << "Enter task: ";
                    getline(std::cin, t.name);
                    t.complete = false;
                    Tasks.push_back(t);
                    std::cout << "Task added. \n";
                    break;
                }
                case 2: {
                    
                    if (Tasks.empty()) {
                        std::cout << "You have no tasks. Good Job!!!!! Keep it up!\n";
                    } 
                    else {
                        displayTasks(Tasks);
                    }
                    break;
                }

                case 3: {
                    int num;
                    std::cout << "Enter task number to mark as complete: \n";
                    std::cin >> num;
                    std::cin.ignore(); // Clear the input buffer

                    if (num > 0 && num <= Tasks.size()) {
                        Tasks[num - 1].complete = true;
                        std::cout << "Task marked as complete. \n";
                    } 
                    else {
                        std::cout << "Invalid task number. \n";
                    }
                    break;
                }
                
                case 4: {
                    int  num;
                    std::cout << "Enter task number to delete: ";
                    std::cin >> num;
                    std::cin.ignore(); // Clear the input buffer
                    if (num > 0 && num <= Tasks.size()) {
                        Tasks.erase(Tasks.begin() + num - 1);
                        std::cout << "Task deleted.\n";
                    } 
                    else {
                        std::cout << "Invalid task number. \n";
                    }
                    break;
                }
                
                default: {
                    std::cout << "Thank you for using the Task Manager! Hope to see you soon again \n";
                }
            }
        }while (choice != 5);

        std::cout << "Would u like to use the Task Manager again? (y/n): \n";   
        std::cin >> choice2;
        std::cin.ignore(); // Clear the input buffer

    }while (choice2 == 'y' || choice2 == 'Y');

    std::cout << "Exiting the program. Goodbye! Hope to see you soon!\n";

    return 0;
}