// fichero 1813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1813;

Registro1813 crear_registro1813(int id) {
    Registro1813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1813(Registro1813 r) {
    return r.valor + r.id;
}
