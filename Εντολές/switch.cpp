#include <iostream>
using namespace std;
/*
Σε αυτό το παράδειγμα, ο χρήστης καλείται να εισαγάγει έναν αριθμό που αντιστοιχεί σε μια ημέρα της εβδομάδας. 
Η δομή ελέγχου switch ελέγχει την τιμή της μεταβλητής day και εκτελεί τις αντίστοιχες ενέργειες για κάθε περίπτωση (case).
*/

int main() {
    int day;
    cout << "Παρακαλώ εισάγετε έναν αριθμό για την ημέρα της εβδομάδας (1-7): ";
    cin >> day;

    switch (day) {
        case 1:
            cout << "Δευτέρα" << endl;
            break;
        case 2:
            cout << "Τρίτη" << endl;
            break;
        case 3:
            cout << "Τετάρτη" << endl;
            break;
        case 4:
            cout << "Πέμπτη" << endl;
            break;
        case 5:
            cout << "Παρασκευή" << endl;
            break;
        case 6:
            cout << "Σάββατο" << endl;
            break;
        case 7:
            cout << "Κυριακή" << endl;
            break;
        default:
            cout << "Μη έγκυρη είσοδος!" << endl;
            break;
    }

    return 0;
}
