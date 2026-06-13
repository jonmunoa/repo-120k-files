// fichero 6413 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6413;

Registro6413 crear_registro6413(int id) {
    Registro6413 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6413(Registro6413 r) {
    return r.valor + r.id;
}
