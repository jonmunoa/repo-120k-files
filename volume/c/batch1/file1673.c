// fichero 1673 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1673;

Registro1673 crear_registro1673(int id) {
    Registro1673 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1673(Registro1673 r) {
    return r.valor + r.id;
}
