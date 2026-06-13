// fichero 29433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29433;

Registro29433 crear_registro29433(int id) {
    Registro29433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29433(Registro29433 r) {
    return r.valor + r.id;
}
