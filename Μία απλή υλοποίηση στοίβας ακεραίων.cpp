#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

//Η κλάση Stack χρησιμοποιείται για την αναπαράσταση μιας στοίβας ακεραίων αριθμών.
class Stack
{
    int *Mat; // Ο πίνακας που αποθηκεύει τα στοιχεία της στοίβας
    int Head; // Δείκτης που υποδεικνύει την κορυφή της στοίβας
    int Size; // Το μέγεθος της στοίβας
public:
    Stack (int); // Κατασκευαστής
    void push (int &); // Μέθοδος για την εισαγωγή ενός στοιχείου
    int pop (); // Μέθοδος για την αφαίρεση ενός στοιχείου
    bool isEmpty (); // Έλεγχος εάν η στοίβα είναι άδεια
    bool isFull (); // Έλεγχος εάν η στοίβα είναι γεμάτη
};

// Ο κατασκευαστής Stack::Stack(int S) αρχικοποιεί το μέγεθος της στοίβας και δεσμεύει μνήμη για τον πίνακα που αποθηκεύει τα στοιχεία.
Stack::Stack (int S)
{
    Size = S;
    Head = 0;
    Mat = new int[Size];
}

// Οι μέθοδοι Stack::isEmpty() και Stack::isFull() επιστρέφουν αντίστοιχα αν η στοίβα είναι άδεια ή γεμάτη.
bool Stack::isEmpty ()
{
    if (Head == 0)
        return true;
    return false;
}

bool Stack::isFull ()
{
    if (Head == Size)
        return true;
    return false;
}

// Η μέθοδος Stack::push(int &Elem) χρησιμοποιείται για την εισαγωγή ενός στοιχείου στην κορυφή της στοίβας.
void Stack::push (int &Elem)
{
    if (isFull ())
        throw 1; // Εκτίναξη εξαίρεσης αν η στοίβα είναι γεμάτη
    Mat[Head++] = Elem; // Εισαγωγή του στοιχείου στην κορυφή της στοίβας και αύξηση του δείκτη Head
}

// Η μέθοδος Stack::pop() αφαιρεί και επιστρέφει το στοιχείο που βρίσκεται στην κορυφή της στοίβας.
int Stack::pop ()
{
    if (isEmpty ())
        throw 2; // Εκτίναξη εξαίρεσης αν η στοίβα είναι άδεια
    return Mat[--Head]; // Αφαίρεση του στοιχείου από την κορυφή της στοίβας και μείωση του δείκτη Head
}

// Στην main(), δημιουργείται ένα αντικείμενο της κλάσης Stack και πραγματοποιούνται εισαγωγή και αφαίρεση στοιχείων από τη στοίβα.
int main (int argc, char **argv)
{
    int i;
    Stack S(5); // Δημιουργία αντικειμένου της κλάσης Stack με μέγεθος 5
    
    for (i = 10; i < 15; i++)
        S.push(i); // Εισαγωγή των αριθμών 10 έως 14 στη στοίβα
    
    for (i = 1; i <= 5; i++)
        cout << S.pop() << endl; // Αφαίρεση και εκτύπωση των στοιχείων της στοίβας
    
    cout << S.isEmpty() << endl; // Έλεγχος εάν η στοίβα είναι άδεια
    
    return 0;
}
