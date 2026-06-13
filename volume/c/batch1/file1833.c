// fichero 1833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1833;

Registro1833 crear_registro1833(int id) {
    Registro1833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1833(Registro1833 r) {
    return r.valor + r.id;
}
