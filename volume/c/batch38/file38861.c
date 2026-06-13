// fichero 38861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38861;

Registro38861 crear_registro38861(int id) {
    Registro38861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38861(Registro38861 r) {
    return r.valor + r.id;
}
