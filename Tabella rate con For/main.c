// Tabella rate con For
#include <stdio.h>
#include <math.h> // per il pow

int main( void )
{
    double amount, capital = 1000;
    double rate = 0.05; // 5%
    unsigned int n;
    
    /* stampa intestazioni delle colonne */
    printf( "%4s", "Year" ); 
    printf( "%21s\n", "Amount on deposit" );
    //21 specifica la larghezza della Tabella
    
    for (n = 1; n <= 10; n++) {
        amount = capital * pow( 1.0+rate, n ) ; 
        //pow si usa per i numeri esponenziali
        printf( "%4u%21.2f\n", n, amount ) ;
    }

    return 0;
}
