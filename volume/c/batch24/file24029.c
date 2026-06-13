// fichero 24029 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24029;

Registro24029 crear_registro24029(int id) {
    Registro24029 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24029(Registro24029 r) {
    return r.valor + r.id;
}
