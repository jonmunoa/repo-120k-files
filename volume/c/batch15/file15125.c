// fichero 15125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15125;

Registro15125 crear_registro15125(int id) {
    Registro15125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15125(Registro15125 r) {
    return r.valor + r.id;
}
