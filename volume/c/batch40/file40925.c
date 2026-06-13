// fichero 40925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40925;

Registro40925 crear_registro40925(int id) {
    Registro40925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40925(Registro40925 r) {
    return r.valor + r.id;
}
