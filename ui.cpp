#include <iostream>
#include "controlModule.cpp"
using namespace std;

class UIModule {
public:
    ControlModule control;

    void addProductControl() {
        const char* productID = "1234";
        const char* productName = "New Product";
        control.addProduct(productID, productName);
    }

    void addUserControl() {
        const char* userID = "user123";
        const char* userName = "John Doe";
        const char* userPhone = "1234567890";
        const char* userEmail = "johndoe@example.com";
        control.addUser(userID, userName, userPhone, userEmail);
    }

     void handleAddChangeRequest() {
        // Simplified example; would normally involve fetching and passing real data
        ChangeItem changeItem(1, "New Feature", nullptr, nullptr);
        User user("U001", "John Doe", "1234567890", "email@example.com");
        Release release;
        control.addChangeRequest(changeItem, user, release);
    }

    // Handlers for Updates Menu
    void handleUpdateUser() {
        const char* userID = "U001";
        const char* newPhone = "9876543210";
        const char* newEmail = "newemail@example.com";
        control.updateUser(userID, newPhone, newEmail);
    }

    void handleUpdateSingleIssue() {
        cout << "Update single issue handled." << endl;
        // Similar implementation for updating issues, using methods from ControlModule
    }

    // Handlers for Display Menu
    void handleRemainingItemsReport() {
        cout << "Generating Remaining Items Report..." << endl;
        // ControlModule would handle generating and displaying the report
    }

    void handleUsersToBeNotifiedReport() {
        cout << "Generating Users to Be Notified Report..." << endl;
        // Similar implementation for report generation
    }

    void handleStatusOfChangeItems() {
        cout << "Generating Status of Change Items Report..." << endl;
        // Similar implementation for report generation
    }

    void run() {
        int choice;
        do {
            displayMainMenu();
            cout << "Enter Selection: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    displayAddMenu();
                    break;
                case 2:
                    displayUpdatesMenu();
                    break;
                case 3:
                    displayDisplayMenu();
                    break;
                case 0:
                    cout << "Thank you for using the JAWS Issue Tracker program." << endl;
                    break;
                default:
                    cout << "Invalid selection. Please enter a valid option." << endl;
                    break;
            }
            
        } while (choice != 0);
    }

private:
    void displayMainMenu() {
        cout << "Main Menu:" << endl;
        cout << "1) Add" << endl;
        cout << "2) Updates" << endl;
        cout << "3) Display" << endl;
        cout << "0) Quit" << endl;
    }

    void displayAddMenu() {
        int choice;

        do {
            cout << "\nAdd Menu:" << endl;
            cout << "1) Add Product" << endl;
            cout << "2) Add Release" << endl;
            cout << "3) Add Change Request" << endl;
            cout << "0) Return to Main Menu" << endl;
            cout << "Enter Selection: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    addProductControl();
                    break;
                case 2:
                    addReleaseControl();
                    break;
                case 3:
                    addChangeRequestControl();
                    break;
                case 0:
                    cout << "Returning to Main Menu...\n" << endl;
                    break;
                default:
                    cout << "Invalid selection. Please enter a valid option." << endl;
                    break;
            }
            
        } while (choice != 0);
    }

    void displayUpdatesMenu() {
        int choice;

        do {
            cout << "\nUpdates Menu:" << endl;
            cout << "1) Update User" << endl;
            cout << "2) Update Single Issue" << endl;
            cout << "0) Return to Main Menu" << endl;
            cout << "Enter Selection: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    updateUserControl();
                    break;
                case 2:
                    updateChangeItemControl();
                    break;
                case 0:
                    cout << "Returning to Main Menu...\n" << endl;
                    break;
                default:
                    cout << "Invalid selection. Please enter a valid option." << endl;
                    break;
            }
            
        } while (choice != 0);
    }

    void displayDisplayMenu() {
        int choice;

        do {
            cout << "\nDisplay Menu:" << endl;
            cout << "1) Remaining Items to be Implemented Report" << endl;
            cout << "2) Users to be Notified Report" << endl;
            cout << "3) Status of Change Items" << endl;
            cout << "0) Return to Main Menu" << endl;
            cout << "Enter Selection: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    displayRemainingReportControl();
                    break;
                case 2:
                    displayNotifyReportControl();
                    break;
                case 3:
                    getStatusControl();
                    break;
                case 0:
                    cout << "Returning to Main Menu...\n" << endl;
                    break;
                default:
                    cout << "Invalid selection. Please enter a valid option." << endl;
                    break;
            }
            
        } while (choice != 0);
    }
};
