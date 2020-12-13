/*
Autor: Dennis Wortmann
Schule: ESB-Hamm
Klasse: ITA1a
Datum: 07.12.2020
*/

/*
Ein Jahr ist ein Schaltjahr, wenn die Jahreszahl restlos durch 4 teilbar ist.
Ein Jahr ist kein Schaltjahr, wenn es durch 4 und 100 restlos teilbar ist.
Ein Jahr ist ein Schaltjahr, wenn es sowohl durch 4, durch 100 und durch 400 teilbar ist
*/

// Importieren der Standardbibliothek
#include <stdio.h>
#include <stdlib.h>

void checkYear(jahr)
{
    // Regel 1
    if (jahr % 4 == 0)
    {
        // Regel 2
        if (jahr % 100 == 0)
        {
            // Regel 3
            if (jahr % 400 == 0)
            {
                printf("%i ist ein Schaltjahr.\n", jahr);
            }

            // Falls Regel 3 nicht zutrifft ist es kein Schaltjahr.
            else
            {
                printf("%i ist kein Schaltjahr.\n", jahr);
            }
        }

        // Falls Regel 2 nicht zutrifft ist es ein Schaltjahr.
        else
        {
            printf("%i ist ein Schaltjahr.\n", jahr);
        }
    }

    // Falls Regel 1 nicht zutrifft ist es kein Schaltjahr.
    else
    {
        printf("%i ist kein Schaltjahr.\n", jahr);
    }
}

// Deklarierung der Hauptroutine (main function)
int main()
{
    // Variablendeklaration von Jahr als Integer.
    int jahr;

    // Einlesen des Jahrs welches ueberprueft werden soll.
    printf("Jahr eingeben: ");
    scanf_s(" %i", &jahr);

    // Aufrufen der "checkYear" Funktion mit dem eingegebenem Jahr.
    checkYear(jahr);
    /*
    for (jahr = 1800; jahr < 2501; jahr++)
    {
        checkYear(jahr);
    }
    */
    // Damit sich die Kommandozeile nicht direkt schließt.
    system("PAUSE");
}
