// fichero 14833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14833;

Registro14833 crear_registro14833(int id) {
    Registro14833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14833(Registro14833 r) {
    return r.valor + r.id;
}
