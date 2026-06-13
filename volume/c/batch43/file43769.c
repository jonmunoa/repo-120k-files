// fichero 43769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43769;

Registro43769 crear_registro43769(int id) {
    Registro43769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43769(Registro43769 r) {
    return r.valor + r.id;
}
