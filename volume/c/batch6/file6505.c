// fichero 6505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6505;

Registro6505 crear_registro6505(int id) {
    Registro6505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6505(Registro6505 r) {
    return r.valor + r.id;
}
