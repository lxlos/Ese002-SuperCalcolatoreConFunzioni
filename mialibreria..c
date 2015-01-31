float somma(float a, float b) {
    int risultato;
    risultato=a+b;
    return risultato;
}

float sottrazione(float a, float b) {
    int risultato;
    risultato=a-b;
    
    return risultato;
}

float prodotto(float a, float b) {
    int risultato;
    risultato=a*b;         
    return risultato;
}

float divisione(float a, float b) {
    int risultato;
    risultato=a/b;
    
    return risultato;
}

int quoziente(int a, int b) {
    int risultato;
    risultato=(int)a/b;
    return risultato;
}

float frazionale(int a, int b) {
    float risultato;
    risultato=a/b-(int)risultato;
    return risultato;
}

float potenza(float base, int esponente) {
    int risultato=base;
    while(esponente>1){
        risultato=risultato*base;
        esponente=esponente-1;
    }
    
    return risultato;
}
