#include <iostream>

/* classe che contiene 3 numeri di una data e una function per stamparli a video */
class Data {
public:
    // dichiaro i tipi di dati che contiene la classe (3 interi, tutti pubblicamente accessibili)
    int giorno;
    int mese;
    int anno;
    
    // dichiaro le function che possono operare sui dati della classe
    void stampaData() {
        std::cout << giorno << "/" << mese << "/" << anno << std::endl;
    }
};


/* corpo del programma */
int main() {
    // inserisco i numeri della data nella classe
    Data oggi {12, 1, 2016};    // classe + nome_desiderato + {dato1, dato2, ...};
    
    oggi.stampaData();          // accedo alla function che stampa la data a video come si accede normalmente a elementi di una struct
    
    return 0;
}


