// fichero 26493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26493;

Registro26493 crear_registro26493(int id) {
    Registro26493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26493(Registro26493 r) {
    return r.valor + r.id;
}
