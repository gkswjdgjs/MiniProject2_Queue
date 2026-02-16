#include <iostream>
#include "Queue.h"
using namespace std;

int main() {
    Queue q(5); // fixed capacity example
    int choice, value;

    do {
        cout << "\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Peek\n";
        cout << "4. Size\n";
        cout << "5. Print Queue\n";
        cout << "6. Exit\n";
        cout << "Choose: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                q.enqueue(value);
                cout << "Enqueued.\n";
                break;

            case 2:
                cout << "Dequeued: " << q.dequeue() << endl;
                break;

            case 3:
                cout << "Front: " << q.peek() << endl;
                break;

            case 4:
                cout << "Size: " << q.size() << endl;
                break;

            case 5:
                q.printQueue();
                break;

            case 6:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }
    } while (choice != 6);

    return 0;
}
