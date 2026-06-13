// fichero 22745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22745;

Registro22745 crear_registro22745(int id) {
    Registro22745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22745(Registro22745 r) {
    return r.valor + r.id;
}
